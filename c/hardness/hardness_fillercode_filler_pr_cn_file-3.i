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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch3Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -64;
float var_1_2 = 128.2;
unsigned char var_1_3 = 1;
float var_1_4 = 32.32;
signed char var_1_5 = -32;
unsigned long int var_1_6 = 10;
unsigned long int var_1_7 = 8;
unsigned short int var_1_8 = 8;
unsigned char var_1_9 = 0;
float var_1_10 = 100.4;
unsigned short int var_1_11 = 100;
unsigned short int var_1_12 = 0;
unsigned long int var_1_13 = 64;
signed short int var_1_14 = 10;
unsigned char var_1_15 = 128;
unsigned char var_1_17 = 128;
unsigned char var_1_18 = 128;
unsigned char var_1_19 = 64;
unsigned char var_1_20 = 10;
float var_1_21 = 49.75;
double var_1_22 = 64.75;
double var_1_23 = 10.5;
signed char var_1_24 = 2;
signed long int var_1_25 = 64;
unsigned long int var_1_26 = 5;
unsigned short int var_1_27 = 2;
unsigned short int var_1_28 = 1;
unsigned short int var_1_29 = 64;
signed short int var_1_30 = 256;
signed short int var_1_31 = -128;
signed long int var_1_32 = -4;
signed short int var_1_33 = 64;
unsigned char var_1_34 = 0;
float var_1_35 = 255.65;
unsigned long int var_1_36 = 50;
float var_1_37 = 15.75;
float var_1_38 = -0.5;
float var_1_39 = 1.25;
unsigned char var_1_40 = 1;
unsigned long int var_1_41 = 2;
unsigned char var_1_42 = 1;
float var_1_43 = 7.8;
float var_1_44 = 7.4;
void initially(void) {
}
void step(void) {
                               if ( ((var_1_3) || ( (( ((var_1_2) + (var_1_4))) > (var_1_10))))) {
                                var_1_8 = (
                                 ((
    var_1_11
   ) + (
    var_1_12
   ))
  );
 } else {
                                var_1_8 = (
   var_1_12
  );
 }
                               var_1_22 = (
  var_1_23
 );
            if ( ((var_1_27) >= ( (((((var_1_28)) > ((var_1_29))) ? ((var_1_28)) : ((var_1_29))))))) {
             var_1_26 = (
              ((((( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) )) < (( var_1_29 ))) ? (( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) )) : (( var_1_29 ))))
  );
 } else {
             var_1_26 = (
              ((
               ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
   ) + (
               ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
   ))
  );
 }
            if ( ((var_1_27) > (var_1_33))) {
             var_1_32 = (
              ((((((((((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) < 0 ) ? -(((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) : (((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 )))))))) < 0 ) ? -(((((((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) < 0 ) ? -(((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) : (((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 )))))))) : (((((((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) < 0 ) ? -(((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))) : (((((( var_1_28 )) < (( var_1_31 ))) ? (( var_1_28 )) : (( var_1_31 ))))))))))
  );
 }
                               var_1_24 = (
  var_1_20
 );
                               var_1_25 = (
  10
 );
                              if ( ((99999.8f) < (var_1_22))) {
                               if ( (! (var_1_3))) {
                                if ( ((var_1_22) >= ( ((var_1_22) / (2.5f))))) {
                                 if (var_1_3) {
                                  var_1_1 = (
      var_1_5
     );
    } else {
                                  var_1_1 = (
      -2
     );
    }
   }
  }
 }
             if ( (( (( ((var_1_27) * (var_1_28))) / (var_1_36))) >= (var_1_32))) {
              var_1_35 = (
               ((((( ((((((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))) < 0 ) ? -(((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))) : (((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))))) )) > (( var_1_39 ))) ? (( ((((((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))) < 0 ) ? -(((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))) : (((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 ))))))) )) : (( var_1_39 ))))
  );
 }
             if ( (( (( (~ (25))) & (var_1_36))) <= (var_1_32))) {
              if ( (( ((5u) / (var_1_36))) <= ( (( ((32u) << (var_1_29))) / (var_1_41))))) {
               if ( ((var_1_29) > (var_1_28))) {
                var_1_40 = (
                 (! (
      var_1_42
     ))
    );
   }
  } else {
               if ( ((var_1_27) < (var_1_36))) {
                var_1_40 = (
                 ((
      var_1_34
     ) || (
      var_1_42
     ))
    );
   } else {
                var_1_40 = (
     1
    );
   }
  }
 }
             if ( (( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < ( (((((var_1_38)) > ((var_1_37))) ? ((var_1_38)) : ((var_1_37))))))) {
              var_1_43 = (
               ((((( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) )) > (( var_1_37 ))) ? (( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) )) : (( var_1_37 ))))
  );
 } else {
              var_1_43 = (
   var_1_44
  );
 }
                              if ( (( (- ( ((((2.45f) < 0 ) ? -(2.45f) : (2.45f)))))) < (var_1_22))) {
                               var_1_6 = (
   var_1_7
  );
 }
 signed long int stepLocal_0 = var_1_25;
                               if ( ((var_1_12) > (stepLocal_0))) {
                                if ( ((15.8f) != (var_1_22))) {
                                 var_1_13 = (
    var_1_25
   );
  }
 }
                               if ( (! (var_1_9))) {
                                var_1_14 = (
   var_1_6
  );
 }
            var_1_30 = (
  var_1_31
 );
 unsigned long int stepLocal_1 = var_1_13;
                               if ( (( (((((var_1_6)) > ((var_1_13))) ? ((var_1_6)) : ((var_1_13))))) > (stepLocal_1))) {
                                var_1_15 = (
                                 ((
                                  ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
   ) - (
                                  ((
     var_1_19
    ) - (
     var_1_20
    ))
   ))
  );
 } else {
                                if ( (( (((((var_1_22)) < (( ((var_1_22) / (var_1_21))))) ? ((var_1_22)) : (( ((var_1_22) / (var_1_21))))))) > (var_1_22))) {
                                 var_1_15 = (
                                  ((((( ((((( 5 )) < (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))) ? (( 5 )) : (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) )))) )) < (( ((((( var_1_20 )) > (( var_1_17 ))) ? (( var_1_20 )) : (( var_1_17 )))) ))) ? (( ((((( 5 )) < (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))) ? (( 5 )) : (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) )))) )) : (( ((((( var_1_20 )) > (( var_1_17 ))) ? (( var_1_20 )) : (( var_1_17 )))) ))))
   );
  } else {
                                 var_1_15 = (
    var_1_18
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -127);
 assume_abort_if_not(var_1_5 <= 126);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 127);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 127);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 63);
 assume_abort_if_not(var_1_19 <= 127);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 assume_abort_if_not(var_1_21 != 0.0F);
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 65535);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65535);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -32767);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -32768);
 assume_abort_if_not(var_1_33 <= 32767);
 assume_abort_if_not(var_1_33 != 0);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967295);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854766000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 4294967295);
 assume_abort_if_not(var_1_41 != 0);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((99999.8f) < (var_1_22))) {
  if ( (! (var_1_3))) {
   if ( ((var_1_22) >= ( ((var_1_22) / (2.5f))))) {
    if (var_1_3) {
    } else {
    }
   }
  }
 }
 if ( (( (- ( ((((2.45f) < 0 ) ? -(2.45f) : (2.45f)))))) < (var_1_22))) {
 }
 if ( ((var_1_3) || ( (( ((var_1_2) + (var_1_4))) > (var_1_10))))) {
 } else {
 }
 if ( ((var_1_12) > (var_1_25))) {
  if ( ((15.8f) != (var_1_22))) {
  }
 }
 if ( (! (var_1_9))) {
 }
 if ( (( (((((var_1_6)) > ((var_1_13))) ? ((var_1_6)) : ((var_1_13))))) > (var_1_13))) {
 } else {
  if ( (( (((((var_1_22)) < (( ((var_1_22) / (var_1_21))))) ? ((var_1_22)) : (( ((var_1_22) / (var_1_21))))))) > (var_1_22))) {
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
          99999.8f
         ) < (
          var_1_22
         ))
        ) ? (
                                             ((
                                                   (! (
           var_1_3
          ))
         ) ? (
                                              ((
                                                    ((
            var_1_22
           ) >= (
                                                     ((
             var_1_22
            ) / (
             2.5f
            ))
           ))
          ) ? (
                                               ((
            var_1_3
           ) ? (
                                                ((
             var_1_1
            ) == (
                                                 ((signed char) (
              var_1_5
             ))
            ))
           ) : (
                                                ((
             var_1_1
            ) == (
                                                 ((signed char) (
              -2
             ))
            ))
           ))
          ) : (
           1
          ))
         ) : (
          1
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
                                                  ((
                                                   (- (
                                                    ((((2.45f) < 0 ) ? -(2.45f) : (2.45f)))
          ))
         ) < (
          var_1_22
         ))
        ) ? (
                                             ((
          var_1_6
         ) == (
                                              ((unsigned long int) (
           var_1_7
          ))
         ))
        ) : (
         1
        ))
       ))
      ) && (
                                            ((
                                                  ((
         var_1_3
        ) || (
                                                   ((
                                                    ((
           var_1_2
          ) + (
           var_1_4
          ))
         ) > (
          var_1_10
         ))
        ))
       ) ? (
                                             ((
         var_1_8
        ) == (
                                              ((unsigned short int) (
                                               ((
           var_1_11
          ) + (
           var_1_12
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_8
        ) == (
                                              ((unsigned short int) (
          var_1_12
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_12
       ) > (
        var_1_25
       ))
      ) ? (
                                            ((
                                                   ((
         15.8f
        ) != (
         var_1_22
        ))
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((unsigned long int) (
          var_1_25
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
                                                 (! (
       var_1_9
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
        var_1_6
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((((( var_1_6 )) > (( var_1_13 ))) ? (( var_1_6 )) : (( var_1_13 ))))
     ) > (
      var_1_13
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned char) (
                                            ((
                                             ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
       ) - (
                                             ((
         var_1_19
        ) - (
         var_1_20
        ))
       ))
      ))
     ))
    ) : (
                                          ((
                                                 ((
                                                  ((((( var_1_22 )) < (( (( var_1_22 ) / ( var_1_21 )) ))) ? (( var_1_22 )) : (( (( var_1_22 ) / ( var_1_21 )) ))))
      ) > (
       var_1_22
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((unsigned char) (
                                             ((((( ((((( 5 )) < (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))) ? (( 5 )) : (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) )))) )) < (( ((((( var_1_20 )) > (( var_1_17 ))) ? (( var_1_20 )) : (( var_1_17 )))) ))) ? (( ((((( 5 )) < (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))) ? (( 5 )) : (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) )))) )) : (( ((((( var_1_20 )) > (( var_1_17 ))) ? (( var_1_20 )) : (( var_1_17 )))) ))))
       ))
      ))
     ) : (
                                           ((
       var_1_15
      ) == (
                                            ((unsigned char) (
        var_1_18
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_22
   ) == (
                                         ((double) (
     var_1_23
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((signed char) (
    var_1_20
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((signed long int) (
   10
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
