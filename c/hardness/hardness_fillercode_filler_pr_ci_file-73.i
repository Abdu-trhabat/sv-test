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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch73Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 7.325;
double var_1_3 = 63.8;
double var_1_4 = 256.6;
double var_1_5 = 2.375;
double var_1_6 = 25.8;
unsigned char var_1_7 = 1;
double var_1_8 = 1.5;
double var_1_9 = 5.6;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 5;
double var_1_13 = 9999999.62;
double var_1_14 = 49.125;
signed long int var_1_15 = 25;
float var_1_16 = 128.8;
float var_1_17 = 0.0;
float var_1_18 = 255.75;
float var_1_19 = 4.75;
float var_1_20 = 256.375;
unsigned char var_1_22 = 5;
unsigned char var_1_23 = 5;
unsigned char var_1_24 = 32;
double var_1_25 = 31.6;
signed short int var_1_27 = 16;
signed short int var_1_28 = 10;
signed long int var_1_31 = 8;
unsigned char var_1_32 = 1;
unsigned char var_1_33 = 0;
unsigned char var_1_34 = 50;
double var_1_35 = 63.4;
double var_1_36 = 7.8;
unsigned char var_1_37 = 50;
unsigned char var_1_38 = 0;
unsigned short int var_1_40 = 8;
signed short int var_1_41 = -64;
signed long int var_1_42 = -5;
float var_1_43 = 15.25;
signed long int var_1_44 = 100;
unsigned short int var_1_45 = 256;
signed short int var_1_46 = 5;
double last_1_var_1_1 = 7.325;
unsigned char last_1_var_1_22 = 5;
void initially(void) {
}
void step(void) {
                                           if ( (( (( ((var_1_8) + (last_1_var_1_1))) / (63.75f))) < ( (((((var_1_5)) < (( ((var_1_3) - (var_1_4))))) ? ((var_1_5)) : (( ((var_1_3) - (var_1_4))))))))) {
                                            var_1_15 = (
   last_1_var_1_22
  );
 } else {
                                            var_1_15 = (
   var_1_11
  );
 }
                   if ( ((var_1_37) <= (var_1_15))) {
                    var_1_46 = (
                     ((
    10
   ) - (
    var_1_11
   ))
  );
 } else {
                    if ( ((var_1_13) <= (var_1_4))) {
                     var_1_46 = (
    var_1_12
   );
  } else {
                     var_1_46 = (
    var_1_37
   );
  }
 }
                              if ( (! (var_1_7))) {
                               var_1_10 = (
                                 ((((( var_1_11 )) > (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
  );
 }
                   var_1_32 = (
  var_1_33
 );
                   if ( (( ((var_1_31) ^ (var_1_41))) < (var_1_37))) {
                    if ( ((var_1_4) <= (var_1_8))) {
                     var_1_42 = (
                      ((
     var_1_38
    ) - (
     var_1_12
    ))
   );
  } else {
                     var_1_42 = (
    var_1_11
   );
  }
 }
                               var_1_13 = (
                                ((((( var_1_8 )) < (( ((((( var_1_9 )) < (( var_1_14 ))) ? (( var_1_9 )) : (( var_1_14 )))) ))) ? (( var_1_8 )) : (( ((((( var_1_9 )) < (( var_1_14 ))) ? (( var_1_9 )) : (( var_1_14 )))) ))))
 );
                   if ( ((var_1_7) && ( ((var_1_27) > (var_1_28))))) {
                   var_1_25 = (
   var_1_8
  );
 } else {
                    if ( ((var_1_8) == (var_1_1))) {
                     if ( ((var_1_8) >= (var_1_1))) {
                     var_1_25 = (
     var_1_8
    );
   } else {
                      var_1_25 = (
     64.6
    );
   }
  }
 }
 unsigned char stepLocal_0 = ((var_1_12) > (var_1_11));
                                if ( (( ((var_1_8) >= (var_1_4))) || (stepLocal_0))) {
                                 if ( ((var_1_13) != (var_1_8))) {
                                  var_1_16 = (
                                   ((
     1.975f
    ) + (
                                    ((
                                     ((
       var_1_17
      ) - (
       var_1_18
      ))
     ) - (
      var_1_19
     ))
    ))
   );
  }
 } else {
                                 var_1_16 = (
                                  ((
    var_1_19
   ) - (
    var_1_18
   ))
  );
 }
                   if ( ((var_1_9) <= (var_1_4))) {
                    var_1_40 = (
   var_1_22
  );
 }
                   if ( (( ((var_1_38) << (var_1_15))) > (var_1_11))) {
                    var_1_44 = (
                     ((((( var_1_15 )) < (( ((((( var_1_15 )) > (( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) ))) ? (( var_1_15 )) : (( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) )))) ))) ? (( var_1_15 )) : (( ((((( var_1_15 )) > (( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) ))) ? (( var_1_15 )) : (( ((((var_1_15) < 0 ) ? -(var_1_15) : (var_1_15))) )))) ))))
  );
 }
                              if ( ((var_1_13) > ( (( ((var_1_3) - (var_1_4))) / ( (((((var_1_5)) > ((var_1_6))) ? ((var_1_5)) : ((var_1_6))))))))) {
                               if (var_1_7) {
                                var_1_1 = (
    var_1_8
   );
  } else {
                                var_1_1 = (
    var_1_9
   );
  }
 } else {
                               var_1_1 = (
   var_1_9
  );
 }
                   if ( (( ((((9.25) < 0 ) ? -(9.25) : (9.25)))) <= ( ((var_1_35) - (var_1_36))))) {
                    var_1_34 = (
                     ((((( (( 128 ) - ( (( var_1_37 ) + ( var_1_38 )) )) )) > (( var_1_11 ))) ? (( (( 128 ) - ( (( var_1_37 ) + ( var_1_38 )) )) )) : (( var_1_11 ))))
  );
 }
                   if (var_1_33) {
                    var_1_45 = (
                     ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
  );
 }
                                if ( ((var_1_6) <= ( (((((var_1_5)) > ((var_1_1))) ? ((var_1_5)) : ((var_1_1))))))) {
                                 var_1_20 = (
                                  ((
    var_1_18
   ) + (
    var_1_19
   ))
  );
 }
                   var_1_31 = (
  var_1_15
 );
                   var_1_43 = (
  var_1_8
 );
 unsigned char stepLocal_2 = var_1_7;
 unsigned char stepLocal_1 = var_1_7;
                                if ( (( ((var_1_15) == (var_1_10))) && (stepLocal_1))) {
                                 if ( ((stepLocal_2) || ( ((var_1_1) <= (var_1_13))))) {
                                  var_1_22 = (
                                   ((((( (( var_1_23 ) + ( var_1_24 )) )) < (( var_1_11 ))) ? (( (( var_1_23 ) + ( var_1_24 )) )) : (( var_1_11 ))))
   );
  } else {
                                  var_1_22 = (
    var_1_23
   );
  }
 } else {
                                 var_1_22 = (
   var_1_12
  );
 }
                   var_1_41 = (
                    ((((( var_1_11 )) > (( var_1_37 ))) ? (( var_1_11 )) : (( var_1_37 ))))
 );
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 assume_abort_if_not(var_1_5 != 0.0F);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 254);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 2305843.009213691400e+12F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 4611686.018427383000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32768);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 64);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 if ( ((var_1_13) > ( (( ((var_1_3) - (var_1_4))) / ( (((((var_1_5)) > ((var_1_6))) ? ((var_1_5)) : ((var_1_6))))))))) {
  if (var_1_7) {
  } else {
  }
 } else {
 }
 if ( (! (var_1_7))) {
 }
 if ( (( (( ((var_1_8) + (last_1_var_1_1))) / (63.75f))) < ( (((((var_1_5)) < (( ((var_1_3) - (var_1_4))))) ? ((var_1_5)) : (( ((var_1_3) - (var_1_4))))))))) {
 } else {
 }
 if ( (( ((var_1_8) >= (var_1_4))) || ( ((var_1_12) > (var_1_11))))) {
  if ( ((var_1_13) != (var_1_8))) {
  }
 } else {
 }
 if ( ((var_1_6) <= ( (((((var_1_5)) > ((var_1_1))) ? ((var_1_5)) : ((var_1_1))))))) {
 }
 if ( (( ((var_1_15) == (var_1_10))) && (var_1_7))) {
  if ( ((var_1_7) || ( ((var_1_1) <= (var_1_13))))) {
  } else {
  }
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
        var_1_13
       ) > (
                                                ((
                                                 ((
          var_1_3
         ) - (
          var_1_4
         ))
        ) / (
                                                 ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
        ))
       ))
      ) ? (
                                           ((
        var_1_7
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((double) (
          var_1_8
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((double) (
          var_1_9
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
         var_1_9
        ))
       ))
      ))
     ) && (
                                          ((
                                                (! (
        var_1_7
       ))
      ) ? (
                                           ((
        var_1_10
       ) == (
                                            ((unsigned char) (
                                             ((((( var_1_11 )) > (( var_1_12 ))) ? (( var_1_11 )) : (( var_1_12 ))))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                         ((
      var_1_13
     ) == (
                                          ((double) (
                                           ((((( var_1_8 )) < (( ((((( var_1_9 )) < (( var_1_14 ))) ? (( var_1_9 )) : (( var_1_14 )))) ))) ? (( var_1_8 )) : (( ((((( var_1_9 )) < (( var_1_14 ))) ? (( var_1_9 )) : (( var_1_14 )))) ))))
      ))
     ))
    ))
   ) && (
                                                    ((
                                                           ((
                                                            ((
                                                             ((
        var_1_8
       ) + (
        last_1_var_1_1
       ))
      ) / (
       63.75f
      ))
     ) < (
                                                            ((((( var_1_5 )) < (( (( var_1_3 ) - ( var_1_4 )) ))) ? (( var_1_5 )) : (( (( var_1_3 ) - ( var_1_4 )) ))))
     ))
    ) ? (
                                                     ((
      var_1_15
     ) == (
                                                      ((signed long int) (
       last_1_var_1_22
      ))
     ))
    ) : (
                                                     ((
      var_1_15
     ) == (
                                                      ((signed long int) (
       var_1_11
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_8
     ) >= (
      var_1_4
     ))
    ) || (
                                                ((
      var_1_12
     ) > (
      var_1_11
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_13
     ) != (
      var_1_8
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((float) (
                                            ((
        1.975f
       ) + (
                                             ((
                                              ((
          var_1_17
         ) - (
          var_1_18
         ))
        ) - (
         var_1_19
        ))
       ))
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((float) (
                                           ((
       var_1_19
      ) - (
       var_1_18
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_6
   ) <= (
                                               ((((( var_1_5 )) > (( var_1_1 ))) ? (( var_1_5 )) : (( var_1_1 ))))
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((float) (
                                          ((
      var_1_18
     ) + (
      var_1_19
     ))
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
    var_1_15
   ) == (
    var_1_10
   ))
  ) && (
   var_1_7
  ))
 ) ? (
                                       ((
                                              ((
    var_1_7
   ) || (
                                               ((
     var_1_1
    ) <= (
     var_1_13
    ))
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((unsigned char) (
                                          ((((( (( var_1_23 ) + ( var_1_24 )) )) < (( var_1_11 ))) ? (( (( var_1_23 ) + ( var_1_24 )) )) : (( var_1_11 ))))
    ))
   ))
  ) : (
                                        ((
    var_1_22
   ) == (
                                         ((unsigned char) (
     var_1_23
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_22
  ) == (
                                        ((unsigned char) (
    var_1_12
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
