# https://github.com/sosy-lab/sv-benchmarks
#
# SPDX-FileCopyrightText: 2015-2016 Daniel Liew <dan@su-root.co.uk>
# SPDX-FileCopyrightText: 2015-2025 The SV-Benchmarks Community
#
# SPDX-License-Identifier: Apache-2.0
#
LEVEL := ../

CLANG_WARNINGS := -Wno-tautological-compare -Wno-missing-braces

# These directories do not contain tasks
IGNORE_DIRS := ./original/

CC.Arch := 64
include $(LEVEL)/Makefile.config

generate:
	cd original/coreutils-project \
	&& rm -rf formal && mkdir -p formal \
	&& cp -r ../formal/* formal/ \
	&& cp formal/project-config.yaml ./ \
	&& for taskconfig in formal/configs/*.yml; do harnessforge create-task "$$taskconfig"; done \
	&& cp output_tasks/*{.i,.c,.yml} ../../