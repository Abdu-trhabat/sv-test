/*
 * This file is part of the SV-Benchmarks collection of verification tasks:
 * https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
 *
 * SPDX-FileCopyrightText: 2012-2024 Free Software Foundation, Inc.
 * SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 */

/* Written by Pádraig Brady.  */



#include <config.h>



#include "system.h"

#include "relpath.h"





/* Return the length of the longest common prefix

   of canonical PATH1 and PATH2, ensuring only full path components

   are matched.  Return 0 on no match.  */

ATTRIBUTE_PURE

static int

path_common_prefix (char const *path1, char const *path2)

{

  int i = 0;

  int ret = 0;



  /* We already know path1[0] and path2[0] are '/'.  Special case

     '//', which is only present in a canonical name on platforms

     where it is distinct.  */

  if ((path1[1] == '/') != (path2[1] == '/'))

    return 0;



  while (*path1 && *path2)

    {

      if (*path1 != *path2)

        break;

      if (*path1 == '/')

        ret = i + 1;

      path1++;

      path2++;

      i++;

    }



  if ((!*path1 && !*path2)

      || (!*path1 && *path2 == '/')

      || (!*path2 && *path1 == '/'))

    ret = i;



  return ret;

}



/* Either output STR to stdout or

   if *PBUF is not null then append STR to *PBUF

   and update *PBUF to point to the end of the buffer

   and adjust *PLEN to reflect the remaining space.

   Return TRUE on failure.  */

static bool

buffer_or_output (char const *str, char **pbuf, size_t *plen)

{

  if (*pbuf)

    {

      size_t slen = strlen (str);

      if (slen >= *plen)

        return true;

      memcpy (*pbuf, str, slen + 1);

      *pbuf += slen;

      *plen -= slen;

    }

  else

    {

      fputs (str, stdout);

    }



  return false;

}



/* Output the relative representation if possible.

   If BUF is non-null, write to that buffer rather than to stdout.  */

bool

relpath (char const *can_fname, char const *can_reldir, char *buf, size_t len)

{

  bool buf_err = false;



  /* Skip the prefix common to --relative-to and path.  */

  int common_index = path_common_prefix (can_reldir, can_fname);

  if (!common_index)

    return false;



  char const *relto_suffix = can_reldir + common_index;

  char const *fname_suffix = can_fname + common_index;



  /* Skip over extraneous '/'.  */

  if (*relto_suffix == '/')

    relto_suffix++;

  if (*fname_suffix == '/')

    fname_suffix++;



  /* Replace remaining components of --relative-to with '..', to get

     to a common directory.  Then output the remainder of fname.  */

  if (*relto_suffix)

    {

      buf_err |= buffer_or_output ("..", &buf, &len);

      for (; *relto_suffix; ++relto_suffix)

        {

          if (*relto_suffix == '/')

            buf_err |= buffer_or_output ("/..", &buf, &len);

        }



      if (*fname_suffix)

        {

          buf_err |= buffer_or_output ("/", &buf, &len);

          buf_err |= buffer_or_output (fname_suffix, &buf, &len);

        }

    }

  else

    {

        buf_err |= buffer_or_output (*fname_suffix ? fname_suffix : ".",

                                     &buf, &len);

    }



  if (buf_err)

    error (0, ENAMETOOLONG, "%s", _("generating relative path"));



  return !buf_err;

}

// This file is part of HarnessForge-data:

// https://gitlab.com/sosy-lab/research/data/harnessforge-automatic-extraction-of-verification-tasks

//

// SPDX-FileCopyrightText: 2025 Dirk Beyer <https://www.sosy-lab.org>

//

// SPDX-License-Identifier: Apache-2.0



#ifndef _RELPATH_H

#include "relpath.c"

#endif

#include<stdlib.h>
void *safe_malloc(size_t size) {
  void *p = malloc(size);
  if (p == 0) {
    abort();
  }
  return p;
}


#include<assert.h>

#include<string.h>

#include "util.h"



#define MAX_BUFFER_SIZE 200



extern int path_common_prefix(const char *path1, const char *path2);

extern bool relpath (char const *can_fname, char const *can_reldir, char *buf, size_t len);



// gen_path_char generates a path character (alphanumeric or '/')

static char gen_path_char() {

    unsigned char c = __VERIFIER_nondet_uchar();

    // Allow anything but NUL in paths (names + separator '/')

    assume_or_exit(c != '\0');

    return c;

}



static char *path1;

static char *path2;

// use int for lengths instead of size_t, to make sure that the paths

// are not too long for path_common_prefix (which returns int)

static int path1_len;

static int path2_len;

static int length_common_prefix_1_2;

static int length_common_prefix_2_1;



static char *output_buf;

static size_t output_len;

static bool relpath_return_value;



// init_buffers_large allocates all buffers with MAX_BUFFER_SIZE

static void init_buffers_large() {

    path1 = safe_malloc(MAX_BUFFER_SIZE);

    path2 = safe_malloc(MAX_BUFFER_SIZE);

    output_buf = safe_malloc(MAX_BUFFER_SIZE);

    output_len = MAX_BUFFER_SIZE;

    assume_or_exit(path1 != NULL && path2 != NULL && output_buf != NULL);

}



// init_buffers_for_overflow allocates path buffers large, but output buffer smaller (for overflow testing)

static void init_buffers_for_overflow() {

    path1 = safe_malloc(MAX_BUFFER_SIZE);

    path2 = safe_malloc(MAX_BUFFER_SIZE);

    output_len = __VERIFIER_nondet_size_t();

    assume_or_exit(output_len > 0 && output_len < MAX_BUFFER_SIZE);

    output_buf = safe_malloc(output_len);

    assume_or_exit(path1 != NULL && path2 != NULL && output_buf != NULL);

}



// free_buffers frees all global buffers

static void free_buffers() {

    free(path1);

    free(path2);

    free(output_buf);

}



// init_input_paths initializes two non-deterministic absolute paths

static void init_input_paths() {

    path1_len = __VERIFIER_nondet_int();

    path2_len = __VERIFIER_nondet_int();

    assume_or_exit(path1_len > 0 && path1_len < MAX_BUFFER_SIZE);

    assume_or_exit(path2_len > 0 && path2_len < MAX_BUFFER_SIZE);



    // Both paths must start with '/' (requirement for canonical paths)

    path1[0] = '/';

    path2[0] = '/';



    // Generate rest of paths

    for (size_t i = 1; i < path1_len; i++) {

        path1[i] = gen_path_char();

    }

    path1[path1_len] = '\0';



    for (size_t i = 1; i < path2_len; i++) {

        path2[i] = gen_path_char();

    }

    path2[path2_len] = '\0';

}



static bool are_paths_equal_in_first_directory () {

    for (size_t i = 1; i < path1_len && i < path2_len; i++) {

        if (path1[i] != path2[i]) {

            return false;

        }

        if (path1[i] == '/' && path2[i] == '/') {

            return true;

        }

    }

    return true; // if single directory and all chars equal

}





static void precond_paths_equal_in_first_directory() {

    // Make sure that both paths are identical up to the first '/' after position 0

    assume_or_exit(are_paths_equal_in_first_directory());

}



static void precond_paths_equal_for_more_than_output_length() {

    // Make sure that both paths are identical for at least output_len characters

    assume_or_exit(path1_len > output_len && path2_len > output_len);

    for (size_t i = 0; i < output_len; i++) {

        assume_or_exit(path1[i] == path2[i]);

    }

}



static void precond_paths_not_equal_in_first_directory() {

    assume_or_exit(!are_paths_equal_in_first_directory());

}



// call_path_common_prefix calls path_common_prefix in both directiong

static void call_path_common_prefix() {

    length_common_prefix_1_2 = path_common_prefix(path1, path2);

    length_common_prefix_2_1 = path_common_prefix(path2, path1);

}



// postcond_symmetry checks that path_common_prefix(a, b) == path_common_prefix(b, a)

static void postcond_path_common_prefix_symmetric() {

    // Symmetry: prefix(a, b) must equal prefix(b, a)

    fv_assert(length_common_prefix_1_2 == length_common_prefix_2_1);

}



// postcond_valid checks that the returned length indicates a valid common prefix

static void postcond_path_common_prefix_valid() {

    // Result should be non-negative and not exceed either path length

    fv_assert(length_common_prefix_1_2 >= 0);

    fv_assert(length_common_prefix_1_2 <= (int)path1_len);

    fv_assert(length_common_prefix_1_2 <= (int)path2_len);



    // If prefix_len > 0, the characters up to that point must be identical

    for (int i = 0; i < length_common_prefix_1_2; i++) {

        fv_assert(path1[i] == path2[i]);

    }

    // ... and they must differ at the next character (if within bounds)

    if (length_common_prefix_1_2 < path1_len && length_common_prefix_1_2 < path2_len) {

        fv_assert(path1[length_common_prefix_1_2] != path2[length_common_prefix_1_2]);

    }

}



// call_path_common_prefix_identical calls path_common_prefix with the same path twice

static void call_path_common_prefix_identical() {

    // Call with same path twice

    length_common_prefix_1_2 = path_common_prefix(path1, path1);

}



// postcond_identical checks that comparing a path with itself gives the full length

static void postcond_path_common_prefix_identical() {

    fv_assert(length_common_prefix_1_2 == path1_len);

}



// call_relpath calls the relpath function with path1 as target, path2 as reference directory

static void call_relpath() {

    relpath_return_value = relpath(path1, path2, output_buf, output_len);

}



// call_relpath_identical calls relpath with the same path for both arguments

static void call_relpath_identical() {

    relpath_return_value = relpath(path1, path1, output_buf, output_len);

}



static bool is_null_terminated_buffer(char *buf, size_t len) {

    for (size_t i = 0; i < len; i++) {

        if (buf[i] == '\0') {

            return true;

        }

    }

    return false;

}



static void postcond_relpath_success() {

    fv_assert(relpath_return_value == true);

}



static void postcond_relpath_failure() {

    fv_assert(relpath_return_value == false);

}



static void postcond_relpath_valid_output() {

    fv_assert(is_null_terminated_buffer(output_buf, output_len));



    // Output should be non-empty (at least contains something before null terminator)

    fv_assert(output_buf[0] != '\0');

}



// postcond_relpath_identical_result checks that comparing identical paths yields "."

static void postcond_relpath_identical_result() {

    // Output should be exactly "."

    fv_assert(output_buf[0] == '.');

    fv_assert(output_buf[1] == '\0');

}
