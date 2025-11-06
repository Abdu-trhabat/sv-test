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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch95Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
double var_1_2 = 32.25;
double var_1_3 = 16.5;
unsigned char var_1_4 = 10;
unsigned char var_1_5 = 100;
unsigned char var_1_6 = 1;
signed char var_1_7 = -5;
unsigned char var_1_8 = 0;
signed char var_1_9 = -10;
signed short int var_1_10 = 64;
unsigned short int var_1_11 = 0;
float var_1_12 = 64.75;
double var_1_13 = 5.4;
float var_1_14 = 5.625;
unsigned long int var_1_15 = 32;
unsigned long int var_1_16 = 4;
unsigned long int var_1_19 = 1622847904;
unsigned long int var_1_20 = 1667052813;
unsigned long int var_1_21 = 8;
unsigned char var_1_22 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
double var_1_26 = 0.4;
double var_1_27 = 256.4;
signed long int var_1_28 = 1;
signed long int var_1_29 = -16;
signed long int var_1_30 = 64;
double var_1_31 = 255.5;
double var_1_32 = 1.625;
signed short int var_1_35 = 1;
float var_1_36 = 7.1;
unsigned long int var_1_39 = 256;
unsigned long int var_1_40 = 256;
unsigned char last_1_var_1_1 = 32;
signed short int last_1_var_1_10 = 64;
unsigned short int last_1_var_1_11 = 0;
unsigned long int last_1_var_1_15 = 32;
void initially(void) {
}
void step(void) {
                  if (var_1_8) {
                   if ( ((16u) > ( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15)))))) {
                    var_1_16 = (
                     ((
                      ((
      var_1_19
     ) + (
      var_1_20
     ))
    ) - (
     var_1_21
    ))
   );
  } else {
                    var_1_16 = (
    var_1_20
   );
  }
 }
                   if (var_1_8) {
                   var_1_22 = (
                    (! (
                     ((
     var_1_8
    ) && (
     var_1_24
    ))
   ))
  );
 } else {
                    if ( ((var_1_19) <= ( (~ ( ((var_1_15) % (var_1_20))))))) {
                     var_1_22 = (
                      (! (
     var_1_24
    ))
   );
  } else {
                     var_1_22 = (
    var_1_25
   );
  }
 }
                   if ( ((var_1_20) >= ( ((var_1_21) / ( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))))) {
                    var_1_26 = (
   var_1_27
  );
 }
                   var_1_28 = (
  var_1_29
 );
                   if ( (( (( ((var_1_31) - (var_1_32))) + ( ((var_1_27) / (var_1_13))))) < ( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) {
                    if ( ((var_1_19) >= (10u))) {
                     if (var_1_8) {
                      var_1_30 = (
                       ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) < 0 ) ? -(((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))
    );
   } else {
                      var_1_30 = (
                       ((((( ((((( var_1_29 )) > (( var_1_5 ))) ? (( var_1_29 )) : (( var_1_5 )))) )) < (( (( var_1_35 ) + ( 64 )) ))) ? (( ((((( var_1_29 )) > (( var_1_5 ))) ? (( var_1_29 )) : (( var_1_5 )))) )) : (( (( var_1_35 ) + ( 64 )) ))))
    );
   }
  } else {
                     var_1_30 = (
                      ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
   );
  }
 }
                   if (var_1_24) {
                    var_1_36 = (
                     ((((( var_1_27 )) > (( ((((( var_1_14 )) > (( ((((( var_1_14 )) < (( 1.25f ))) ? (( var_1_14 )) : (( 1.25f )))) ))) ? (( var_1_14 )) : (( ((((( var_1_14 )) < (( 1.25f ))) ? (( var_1_14 )) : (( 1.25f )))) )))) ))) ? (( var_1_27 )) : (( ((((( var_1_14 )) > (( ((((( var_1_14 )) < (( 1.25f ))) ? (( var_1_14 )) : (( 1.25f )))) ))) ? (( var_1_14 )) : (( ((((( var_1_14 )) < (( 1.25f ))) ? (( var_1_14 )) : (( 1.25f )))) )))) ))))
  );
 }
                   var_1_39 = (
  var_1_35
 );
                   var_1_40 = (
  var_1_5
 );
                                           if ( ((128) >= (last_1_var_1_10))) {
                                            var_1_15 = (
                                             ((
    var_1_6
   ) + (
                                              ((
     var_1_4
    ) + (
     last_1_var_1_11
    ))
   ))
  );
 } else {
                                            var_1_15 = (
   last_1_var_1_1
  );
 }
 unsigned char stepLocal_0 = var_1_4;
                                     if ( ((-4) >= (stepLocal_0))) {
                                      if ( ((var_1_3) == (var_1_2))) {
                                       var_1_10 = (
                                        ((
     last_1_var_1_15
    ) + (
     var_1_6
    ))
   );
  } else {
                                       var_1_10 = (
    var_1_5
   );
  }
 } else {
                                      var_1_10 = (
   var_1_4
  );
 }
 unsigned long int stepLocal_1 = (( ((var_1_10) ^ (var_1_15))) / ( (((((-8)) > ((var_1_5))) ? ((-8)) : ((var_1_5))))));
                               if ( (( ((var_1_6) - (var_1_15))) < (stepLocal_1))) {
                                if ( ((var_1_3) == (var_1_2))) {
                                 var_1_11 = (
    var_1_15
   );
  }
 }
                              if ( (( ((10.8) + (var_1_2))) <= ( (- (var_1_3))))) {
                               var_1_1 = (
                                ((
                                 ((((( 1 )) < (( var_1_4 ))) ? (( 1 )) : (( var_1_4 ))))
   ) + (
                                 ((
     var_1_5
    ) - (
     var_1_6
    ))
   ))
  );
 }
                              if ( (( ((var_1_5) <= (var_1_4))) && (var_1_8))) {
                               if (var_1_8) {
                                var_1_7 = (
                                 ((
     var_1_6
    ) + (
                                  ((((( 5 )) < (( var_1_9 ))) ? (( 5 )) : (( var_1_9 ))))
    ))
   );
  } else {
                                var_1_7 = (
                                 ((((( var_1_6 )) < (( var_1_9 ))) ? (( var_1_6 )) : (( var_1_9 ))))
   );
  }
 } else {
                               if ( (( ((-8) * (var_1_10))) < (var_1_4))) {
                                var_1_7 = (
    1
   );
  } else {
                                var_1_7 = (
    var_1_9
   );
  }
 }
                               if ( ((var_1_2) != ( ((var_1_3) / ( ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) {
                                 var_1_12 = (
   var_1_14
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 63);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -63);
 assume_abort_if_not(var_1_9 <= 63);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741824);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483647);
 assume_abort_if_not(var_1_29 <= 2147483646);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 6);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_11 = var_1_11;
 last_1_var_1_15 = var_1_15;
}
int property(void) {
 if ( (( ((10.8) + (var_1_2))) <= ( (- (var_1_3))))) {
 }
 if ( (( ((var_1_5) <= (var_1_4))) && (var_1_8))) {
  if (var_1_8) {
  } else {
  }
 } else {
  if ( (( ((-8) * (var_1_10))) < (var_1_4))) {
  } else {
  }
 }
 if ( ((-4) >= (var_1_4))) {
  if ( ((var_1_3) == (var_1_2))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_6) - (var_1_15))) < ( (( ((var_1_10) ^ (var_1_15))) / ( (((((-8)) > ((var_1_5))) ? ((-8)) : ((var_1_5))))))))) {
  if ( ((var_1_3) == (var_1_2))) {
  }
 }
 if ( ((var_1_2) != ( ((var_1_3) / ( ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))))))) {
 }
 if ( ((128) >= (last_1_var_1_10))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
                                              ((
                                               ((
        10.8
       ) + (
        var_1_2
       ))
      ) <= (
                                               (- (
        var_1_3
       ))
      ))
     ) ? (
                                          ((
       var_1_1
      ) == (
                                           ((unsigned char) (
                                            ((
                                             ((((( 1 )) < (( var_1_4 ))) ? (( 1 )) : (( var_1_4 ))))
        ) + (
                                             ((
          var_1_5
         ) - (
          var_1_6
         ))
        ))
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                         ((
                                               ((
                                                ((
        var_1_5
       ) <= (
        var_1_4
       ))
      ) && (
       var_1_8
      ))
     ) ? (
                                          ((
       var_1_8
      ) ? (
                                           ((
        var_1_7
       ) == (
                                            ((signed char) (
                                             ((
          var_1_6
         ) + (
                                              ((((( 5 )) < (( var_1_9 ))) ? (( 5 )) : (( var_1_9 ))))
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_7
       ) == (
                                            ((signed char) (
                                             ((((( var_1_6 )) < (( var_1_9 ))) ? (( var_1_6 )) : (( var_1_9 ))))
        ))
       ))
      ))
     ) : (
                                          ((
                                                ((
                                                 ((
         -8
        ) * (
         var_1_10
        ))
       ) < (
        var_1_4
       ))
      ) ? (
                                           ((
        var_1_7
       ) == (
                                            ((signed char) (
         1
        ))
       ))
      ) : (
                                           ((
        var_1_7
       ) == (
                                            ((signed char) (
         var_1_9
        ))
       ))
      ))
     ))
    ))
   ) && (
                                               ((
                                                      ((
      -4
     ) >= (
      var_1_4
     ))
    ) ? (
                                                ((
                                                       ((
       var_1_3
      ) == (
       var_1_2
      ))
     ) ? (
                                                 ((
       var_1_10
      ) == (
                                                  ((signed short int) (
                                                   ((
         last_1_var_1_15
        ) + (
         var_1_6
        ))
       ))
      ))
     ) : (
                                                 ((
       var_1_10
      ) == (
                                                  ((signed short int) (
        var_1_5
       ))
      ))
     ))
    ) : (
                                                ((
      var_1_10
     ) == (
                                                 ((signed short int) (
       var_1_4
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_6
     ) - (
      var_1_15
     ))
    ) < (
                                                ((
                                                 ((
       var_1_10
      ) ^ (
       var_1_15
      ))
     ) / (
                                                 ((((( -8 )) > (( var_1_5 ))) ? (( -8 )) : (( var_1_5 ))))
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_3
     ) == (
      var_1_2
     ))
    ) ? (
                                          ((
      var_1_11
     ) == (
                                           ((unsigned short int) (
       var_1_15
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
    var_1_2
   ) != (
                                               ((
     var_1_3
    ) / (
                                                ((((var_1_13) < 0 ) ? -(var_1_13) : (var_1_13)))
    ))
   ))
  ) ? (
                                        ((
    var_1_12
   ) == (
                                         ((float) (
     var_1_14
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                                 ((
                                                        ((
   128
  ) >= (
   last_1_var_1_10
  ))
 ) ? (
                                                  ((
   var_1_15
  ) == (
                                                   ((unsigned long int) (
                                                    ((
     var_1_6
    ) + (
                                                     ((
      var_1_4
     ) + (
      last_1_var_1_11
     ))
    ))
   ))
  ))
 ) : (
                                                  ((
   var_1_15
  ) == (
                                                   ((unsigned long int) (
    last_1_var_1_1
   ))
  ))
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
