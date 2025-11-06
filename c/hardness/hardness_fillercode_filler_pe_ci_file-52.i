// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

extern unsigned long __VERIFIER_nondet_ulong(void);
extern long __VERIFIER_nondet_long(void);
extern unsigned char __VERIFIER_nondet_uchar(void);
extern char __VERIFIER_nondet_char(void);
extern unsigned short __VERIFIER_nondet_ushort(void);
extern short __VERIFIER_nondet_short(void);
extern float __VERIFIER_nondet_float(void);
extern double __VERIFIER_nondet_double(void);
extern void abort(void);
extern void __assert_fail(const char *, const char *, unsigned int, const char *) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch52Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -1;
unsigned long int var_1_7 = 64;
unsigned char var_1_8 = 128;
unsigned char var_1_9 = 128;
unsigned char var_1_10 = 16;
signed long int var_1_11 = -256;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed long int var_1_15 = -50;
unsigned char var_1_17 = 4;
double var_1_18 = 100.5;
double var_1_19 = 4.2;
unsigned char var_1_20 = 0;
signed char var_1_21 = -16;
signed long int var_1_25 = 5;
signed char var_1_26 = 100;
unsigned short int var_1_27 = 10000;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 128;
unsigned char var_1_31 = 0;
float var_1_35 = 1.5;
unsigned char var_1_37 = 0;
unsigned long int var_1_38 = 3896410050;
unsigned char var_1_39 = 0;
signed short int var_1_40 = 1;
signed char var_1_41 = 32;
unsigned long int var_1_42 = 4;
unsigned long int var_1_43 = 2;
unsigned long int var_1_44 = 100000000;
void initially(void) {
}
void step(void) {
                               var_1_12 = (
                                ((
   var_1_13
  ) && (
   var_1_14
  ))
 );
                                var_1_17 = (
                                 ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
 );
 unsigned char stepLocal_7 = var_1_17;
                                if ( (( (( ((var_1_10) | (var_1_17))) % ( ((var_1_8) + (var_1_9))))) != (stepLocal_7))) {
                                 if (var_1_12) {
                                  var_1_20 = (
    5
   );
  } else {
                                  var_1_20 = (
    var_1_10
   );
  }
 }
 signed long int stepLocal_2 = (( (((((var_1_8)) < ((var_1_9))) ? ((var_1_8)) : ((var_1_9))))) - (var_1_10));
                              if ( ((var_1_17) < (stepLocal_2))) {
                               if (var_1_12) {
                                var_1_7 = (
    var_1_9
   );
  }
 }
 unsigned char stepLocal_3 = var_1_17;
                               if ( (( ((64) - (var_1_7))) >= (stepLocal_3))) {
                                if ( (! (var_1_12))) {
                                 var_1_11 = (
    var_1_10
   );
  }
 }
 unsigned char stepLocal_5 = ((var_1_8) < (var_1_17));
 signed long int stepLocal_4 = var_1_11;
                                if ( ((stepLocal_5) && (var_1_12))) {
                                 var_1_15 = (
                                  ((((( var_1_10 )) > (( (( var_1_17 ) - ( var_1_11 )) ))) ? (( var_1_10 )) : (( (( var_1_17 ) - ( var_1_11 )) ))))
  );
 } else {
                                 if ( ((var_1_10) < (stepLocal_4))) {
                                  var_1_15 = (
    var_1_8
   );
  } else {
                                  var_1_15 = (
    var_1_10
   );
  }
 }
 unsigned char stepLocal_6 = var_1_8;
                                if ( (( ((var_1_15) + (var_1_7))) < (stepLocal_6))) {
                                 if ( (! (var_1_13))) {
                                  var_1_18 = (
    var_1_19
   );
  }
 }
 unsigned long int stepLocal_1 = ((var_1_7) * ( (~ (var_1_15))));
 signed long int stepLocal_0 = var_1_15;
                              if ( ((stepLocal_1) >= (var_1_15))) {
                               if ( ((stepLocal_0) <= (var_1_7))) {
                                var_1_1 = (
                                 ((
                                  ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
    ) - (
     var_1_15
    ))
   );
  }
 } else {
                               if (var_1_12) {
                                var_1_1 = (
    var_1_7
   );
  } else {
                                var_1_1 = (
    var_1_15
   );
  }
 }
                  if ( (( ((var_1_10) | ( (((((var_1_10)) > ((var_1_17))) ? ((var_1_10)) : ((var_1_17))))))) < ( (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))) >> (25))))) {
                   var_1_21 = (
   var_1_26
  );
 }
                  var_1_27 = (
  256
 );
                  if ( (( ((var_1_25) / (var_1_29))) > (var_1_7))) {
                   var_1_28 = (
                    ((
                     (! (
                      ((
      var_1_12
     ) && (
      var_1_31
     ))
    ))
   ) && (
                     ((
     var_1_12
    ) || (
                      ((
      var_1_14
     ) && (
      var_1_13
     ))
    ))
   ))
  );
 }
                  var_1_35 = (
  var_1_19
 );
                   if ( ((var_1_17) != (var_1_7))) {
                    if ( ((var_1_29) >= ( ((var_1_38) - (var_1_25))))) {
                     var_1_37 = (
    var_1_31
   );
  } else {
                     var_1_37 = (
                      ((
     var_1_14
    ) && (
     var_1_13
    ))
   );
  }
 }
                   if ( (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))) >= (var_1_19))) {
                    var_1_39 = (
                     ((
    var_1_12
   ) && (
    var_1_31
   ))
  );
 }
                   if ( (( (( ((((8) < 0 ) ? -(8) : (8)))) % (var_1_29))) != (var_1_25))) {
                    var_1_40 = (
                     ((((( ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) )) < (( var_1_10 ))) ? (( ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17))) )) : (( var_1_10 ))))
  );
 }
                   if ( (( ((var_1_38) ^ (var_1_11))) >= (var_1_29))) {
                    if ( (( ((((( ((var_1_29) | (var_1_25)))) < ((var_1_38))) ? (( ((var_1_29) | (var_1_25)))) : ((var_1_38))))) < ( (( ((var_1_11) & (var_1_42))) * ( (((((var_1_43)) < ((var_1_44))) ? ((var_1_43)) : ((var_1_44))))))))) {
                     var_1_41 = (
    var_1_26
   );
  } else {
                     var_1_41 = (
    2
   );
  }
 }
}
void updateVariables(void) {
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 127);
 assume_abort_if_not(var_1_8 <= 255);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 127);
 assume_abort_if_not(var_1_9 <= 255);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 127);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 assume_abort_if_not(var_1_29 != 0);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 0);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 2147483647);
 assume_abort_if_not(var_1_38 <= 4294967295);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 4294967295);
 var_1_43 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 4294967295);
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967295);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_7) * ( (~ (var_1_15))))) >= (var_1_15))) {
  if ( ((var_1_15) <= (var_1_7))) {
  }
 } else {
  if (var_1_12) {
  } else {
  }
 }
 if ( ((var_1_17) < ( (( (((((var_1_8)) < ((var_1_9))) ? ((var_1_8)) : ((var_1_9))))) - (var_1_10))))) {
  if (var_1_12) {
  }
 }
 if ( (( ((64) - (var_1_7))) >= (var_1_17))) {
  if ( (! (var_1_12))) {
  }
 }
 if ( (( ((var_1_8) < (var_1_17))) && (var_1_12))) {
 } else {
  if ( ((var_1_10) < (var_1_11))) {
  } else {
  }
 }
 if ( (( ((var_1_15) + (var_1_7))) < (var_1_8))) {
  if ( (! (var_1_13))) {
  }
 }
 if ( (( (( ((var_1_10) | (var_1_17))) % ( ((var_1_8) + (var_1_9))))) != (var_1_17))) {
  if (var_1_12) {
  } else {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                           ((
                                                ((
                                                 ((
          var_1_7
         ) * (
                                                  (~ (
           var_1_15
          ))
         ))
        ) >= (
         var_1_15
        ))
       ) ? (
                                            ((
                                                  ((
          var_1_15
         ) <= (
          var_1_7
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
                                               ((
                                                ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
           ) - (
            var_1_15
           ))
          ))
         ))
        ) : (
         1
        ))
       ) : (
                                            ((
         var_1_12
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
           var_1_7
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed long int) (
           var_1_15
          ))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_17
        ) < (
                                                  ((
                                                   ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
         ) - (
          var_1_10
         ))
        ))
       ) ? (
                                            ((
         var_1_12
        ) ? (
                                             ((
          var_1_7
         ) == (
                                              ((unsigned long int) (
           var_1_9
          ))
         ))
        ) : (
         1
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                 ((
                                                  ((
         64
        ) - (
         var_1_7
        ))
       ) >= (
        var_1_17
       ))
      ) ? (
                                            ((
                                                   (! (
         var_1_12
        ))
       ) ? (
                                             ((
         var_1_11
        ) == (
                                              ((signed long int) (
          var_1_10
         ))
        ))
       ) : (
        1
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
      var_1_12
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_13
       ) && (
        var_1_14
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_8
      ) < (
       var_1_17
      ))
     ) && (
      var_1_12
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((signed long int) (
                                            ((((( var_1_10 )) > (( (( var_1_17 ) - ( var_1_11 )) ))) ? (( var_1_10 )) : (( (( var_1_17 ) - ( var_1_11 )) ))))
      ))
     ))
    ) : (
                                          ((
                                                 ((
       var_1_10
      ) < (
       var_1_11
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((signed long int) (
        var_1_8
       ))
      ))
     ) : (
                                           ((
       var_1_15
      ) == (
                                            ((signed long int) (
        var_1_10
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_17
   ) == (
                                         ((unsigned char) (
                                          ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
     var_1_15
    ) + (
     var_1_7
    ))
   ) < (
    var_1_8
   ))
  ) ? (
                                        ((
                                               (! (
     var_1_13
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((double) (
      var_1_19
     ))
    ))
   ) : (
    1
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
                                               ((
     var_1_10
    ) | (
     var_1_17
    ))
   ) % (
                                               ((
     var_1_8
    ) + (
     var_1_9
    ))
   ))
  ) != (
   var_1_17
  ))
 ) ? (
                                       ((
   var_1_12
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
     5
    ))
   ))
  ) : (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
     var_1_10
    ))
   ))
  ))
 ) : (
  1
 ))
))
;
}
int main(void) {
 isInitial = 1;
 initially();
 while (1) {
  updateLastVariables();
  updateVariables();
  step();
  __VERIFIER_assert(property());
  isInitial = 0;
 }
 return 0;
}
