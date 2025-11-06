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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch187Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 0.17500000000000004;
unsigned char var_1_2 = 1;
double var_1_5 = 1.6;
double var_1_7 = 31.8;
float var_1_8 = 15.2;
signed char var_1_9 = 1;
signed char var_1_10 = 0;
signed char var_1_11 = 32;
signed char var_1_12 = 16;
unsigned char var_1_13 = 0;
signed short int var_1_14 = -1;
signed short int var_1_15 = 5;
signed long int var_1_16 = 4;
unsigned char var_1_17 = 4;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 128;
unsigned char var_1_20 = 32;
float var_1_21 = 0.625;
signed short int var_1_22 = -128;
unsigned short int var_1_23 = 16;
unsigned char var_1_24 = 32;
unsigned char var_1_25 = 1;
float var_1_26 = 1000000000.3;
unsigned char var_1_27 = 0;
float var_1_28 = 500.95;
unsigned char var_1_29 = 8;
float var_1_30 = 10.75;
float var_1_31 = 4.5;
float var_1_32 = 24.6;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 4;
unsigned char var_1_35 = 0;
signed long int var_1_36 = 5;
unsigned short int var_1_37 = 2;
unsigned short int var_1_38 = 62493;
signed short int var_1_39 = 1;
double var_1_40 = 0.0;
double var_1_41 = 3.7;
double var_1_42 = 1.6;
unsigned long int var_1_43 = 500;
unsigned long int var_1_44 = 8;
unsigned long int var_1_45 = 1000000;
double last_1_var_1_7 = 31.8;
void initially(void) {
}
void step(void) {
                               if (var_1_2) {
                                var_1_9 = (
                                 ((((( ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 )))) )) > (( var_1_12 ))) ? (( ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 )))) )) : (( var_1_12 ))))
  );
 }
                  if (var_1_27) {
                   var_1_26 = (
                    ((
                    ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
   ) + (
    -0.9f
   ))
  );
 }
 signed long int stepLocal_0 = (( ((var_1_10) + (1000000000))) / (var_1_16));
                               if ( (( ((var_1_14) - (var_1_15))) > (stepLocal_0))) {
                                var_1_13 = (
                                 ((
    var_1_17
   ) + (
    var_1_18
   ))
  );
 } else {
                                var_1_13 = (
                                 ((
    var_1_19
   ) - (
    var_1_20
   ))
  );
 }
                   if ( ((var_1_13) > (var_1_35))) {
                    var_1_37 = (
                     ((((( var_1_35 )) < (( (( var_1_38 ) - ( (( var_1_33 ) + ( var_1_34 )) )) ))) ? (( var_1_35 )) : (( (( var_1_38 ) - ( (( var_1_33 ) + ( var_1_34 )) )) ))))
  );
 }
 signed long int stepLocal_1 = ((var_1_18) << ( ((1) - (0))));
                               if ( (( (( (~ (var_1_17))) / (var_1_19))) >= (stepLocal_1))) {
                                var_1_21 = (
   25.8f
  );
 } else {
                                var_1_21 = (
   var_1_5
  );
 }
                  if ( ((var_1_26) > ( ((var_1_28) + ( ((var_1_30) * (var_1_31))))))) {
                   if ( ((var_1_30) > ( (( (((((var_1_28)) < ((var_1_26))) ? ((var_1_28)) : ((var_1_26))))) / (var_1_32))))) {
                    var_1_29 = (
                     ((
                      ((((( ((((( var_1_33 )) > (( 1 ))) ? (( var_1_33 )) : (( 1 )))) )) > (( var_1_34 ))) ? (( ((((( var_1_33 )) > (( 1 ))) ? (( var_1_33 )) : (( 1 )))) )) : (( var_1_34 ))))
    ) + (
                      ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
    ))
   );
  }
 }
                                var_1_23 = (
  var_1_18
 );
                                var_1_24 = (
  32
 );
                  var_1_36 = (
  -2
 );
                                var_1_25 = (
  var_1_18
 );
                   if ( (( ((var_1_28) + ( (((((var_1_1)) > ((var_1_7))) ? ((var_1_1)) : ((var_1_7))))))) < (var_1_7))) {
                    if ( (( (( ((var_1_40) - (var_1_41))) - (var_1_42))) > ( (- (var_1_1))))) {
                     var_1_39 = (
    var_1_35
   );
  } else {
                     var_1_39 = (
    var_1_13
   );
  }
 }
                               if ( (( ((last_1_var_1_7) / (var_1_8))) < (var_1_21))) {
                                if ( ((last_1_var_1_7) < (var_1_5))) {
                                 var_1_7 = (
    var_1_5
   );
  }
 }
                   if ( ((var_1_40) < (var_1_28))) {
                    if ( ((var_1_33) < (var_1_23))) {
                     if ( ((var_1_44) != (5u))) {
                      if ( ((var_1_40) > ( ((var_1_21) / (var_1_32))))) {
                       var_1_43 = (
                        ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))
     );
    } else {
                       var_1_43 = (
                        ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))
     );
    }
   } else {
                      if (var_1_27) {
                       var_1_43 = (
      var_1_23
     );
    }
   }
  } else {
                     var_1_43 = (
    var_1_45
   );
  }
 } else {
                    var_1_43 = (
   var_1_38
  );
 }
 signed long int stepLocal_3 = ((var_1_25) % ( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))));
 signed long int stepLocal_2 = (( ((2) ^ (var_1_19))) + (var_1_16));
                                if ( ((stepLocal_3) >= ( ((var_1_24) * (var_1_16))))) {
                                 if ( ((stepLocal_2) < (var_1_11))) {
                                  var_1_22 = (
    var_1_18
   );
  }
 }
                              if (var_1_2) {
                               if ( ((var_1_21) != (var_1_7))) {
                                var_1_1 = (
    var_1_5
   );
  } else {
                                if ( (( (( (- (var_1_21))) * (var_1_7))) < (var_1_7))) {
                                 var_1_1 = (
     var_1_5
    );
   } else {
                                 var_1_1 = (
     199.4
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -1);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_15 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483648);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 127);
 assume_abort_if_not(var_1_19 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 assume_abort_if_not(var_1_32 != 0.0F);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 127);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 127);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 127);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 32767);
 assume_abort_if_not(var_1_38 <= 65534);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= 4611686.018427388000e+12F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427388000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 4294967295);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_7 = var_1_7;
}
int property(void) {
 if (var_1_2) {
  if ( ((var_1_21) != (var_1_7))) {
  } else {
   if ( (( (( (- (var_1_21))) * (var_1_7))) < (var_1_7))) {
   } else {
   }
  }
 }
 if ( (( ((last_1_var_1_7) / (var_1_8))) < (var_1_21))) {
  if ( ((last_1_var_1_7) < (var_1_5))) {
  }
 }
 if (var_1_2) {
 }
 if ( (( ((var_1_14) - (var_1_15))) > ( (( ((var_1_10) + (1000000000))) / (var_1_16))))) {
 } else {
 }
 if ( (( (( (~ (var_1_17))) / (var_1_19))) >= ( ((var_1_18) << ( ((1) - (0))))))) {
 } else {
 }
 if ( (( ((var_1_25) % ( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))))) >= ( ((var_1_24) * (var_1_16))))) {
  if ( (( (( ((2) ^ (var_1_19))) + (var_1_16))) < (var_1_11))) {
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
         var_1_2
        ) ? (
                                             ((
                                                  ((
           var_1_21
          ) != (
           var_1_7
          ))
         ) ? (
                                              ((
           var_1_1
          ) == (
                                               ((double) (
            var_1_5
           ))
          ))
         ) : (
                                              ((
                                                    ((
                                                     ((
                                                      (- (
              var_1_21
             ))
            ) * (
             var_1_7
            ))
           ) < (
            var_1_7
           ))
          ) ? (
                                               ((
            var_1_1
           ) == (
                                                ((double) (
             var_1_5
            ))
           ))
          ) : (
                                               ((
            var_1_1
           ) == (
                                                ((double) (
             199.4
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
           last_1_var_1_7
          ) / (
           var_1_8
          ))
         ) < (
          var_1_21
         ))
        ) ? (
                                              ((
                                                     ((
           last_1_var_1_7
          ) < (
           var_1_5
          ))
         ) ? (
                                               ((
           var_1_7
          ) == (
                                                ((double) (
            var_1_5
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
        var_1_2
       ) ? (
                                             ((
         var_1_9
        ) == (
                                              ((signed char) (
                                               ((((( ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 )))) )) > (( var_1_12 ))) ? (( ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 )))) )) : (( var_1_12 ))))
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
                                                  ((
                                                   ((
         var_1_14
        ) - (
         var_1_15
        ))
       ) > (
                                                   ((
                                                    ((
          var_1_10
         ) + (
          1000000000
         ))
        ) / (
         var_1_16
        ))
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
                                              ((
          var_1_17
         ) + (
          var_1_18
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
                                              ((
          var_1_19
         ) - (
          var_1_20
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  ((
                                                   (~ (
         var_1_17
        ))
       ) / (
        var_1_19
       ))
      ) >= (
                                                  ((
        var_1_18
       ) << (
                                                   ((
         1
        ) - (
         0
        ))
       ))
      ))
     ) ? (
                                           ((
       var_1_21
      ) == (
                                            ((float) (
        25.8f
       ))
      ))
     ) : (
                                           ((
       var_1_21
      ) == (
                                            ((float) (
        var_1_5
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_25
      ) % (
                                                  ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19)))
      ))
     ) >= (
                                                 ((
       var_1_24
      ) * (
       var_1_16
      ))
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
                                                   ((
         2
        ) ^ (
         var_1_19
        ))
       ) + (
        var_1_16
       ))
      ) < (
       var_1_11
      ))
     ) ? (
                                           ((
       var_1_22
      ) == (
                                            ((signed short int) (
        var_1_18
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
    var_1_23
   ) == (
                                         ((unsigned short int) (
     var_1_18
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((unsigned char) (
    32
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((unsigned char) (
   var_1_18
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
