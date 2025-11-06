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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch50Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed long int var_1_2 = -16;
signed long int var_1_3 = 4;
unsigned char var_1_4 = 0;
signed long int var_1_5 = 256;
signed long int var_1_6 = 32;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 1;
signed short int var_1_9 = -2;
signed short int var_1_10 = -1;
signed short int var_1_11 = 4;
signed short int var_1_12 = -10;
float var_1_13 = 999.4;
float var_1_14 = 100.425;
float var_1_15 = 3.375;
float var_1_16 = 15.9;
signed short int var_1_17 = -10;
signed short int var_1_18 = 18060;
signed short int var_1_19 = 128;
unsigned char var_1_20 = 0;
unsigned long int var_1_21 = 4;
unsigned long int var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 100;
unsigned char var_1_26 = 32;
unsigned char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned short int var_1_29 = 256;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 4;
double var_1_33 = 31.625;
double var_1_35 = 7.5;
double var_1_36 = 15.75;
double var_1_37 = 15.375;
unsigned short int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned short int var_1_40 = 5;
double var_1_45 = 128.5;
float var_1_46 = 1.85;
double var_1_47 = 1.5;
double var_1_48 = 99999999999.4;
unsigned char var_1_49 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_1 = var_1_5;
 signed long int stepLocal_0 = ((var_1_5) - (var_1_6));
                              if ( (( (((((var_1_2)) > ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) <= (stepLocal_0))) {
                               if ( ((stepLocal_1) < (var_1_6))) {
                                if (var_1_4) {
                                 var_1_1 = (
     var_1_7
    );
   } else {
                                 var_1_1 = (
     var_1_8
    );
   }
  }
 } else {
                               var_1_1 = (
   0
  );
 }
                  if ( (( ((var_1_3) & ( ((var_1_2) + (2u))))) < ( ((16u) >> (var_1_40))))) {
                   var_1_39 = (
                    ((
                     ((
     var_1_4
    ) && (
                      ((
      var_1_7
     ) && (
      var_1_4
     ))
    ))
   ) && (
                     (! (
     var_1_24
    ))
   ))
  );
 }
                               if (var_1_8) {
                                var_1_13 = (
                                 ((((( (( var_1_14 ) + ( var_1_15 )) )) < (( ((((( -0.2f )) < (( var_1_16 ))) ? (( -0.2f )) : (( var_1_16 )))) ))) ? (( (( var_1_14 ) + ( var_1_15 )) )) : (( ((((( -0.2f )) < (( var_1_16 ))) ? (( -0.2f )) : (( var_1_16 )))) ))))
  );
 }
                 var_1_31 = (
  var_1_27
 );
                   if ( (( ((var_1_35) * ( ((var_1_47) - (var_1_48))))) < (var_1_45))) {
                    if ( (( (((((((((var_1_22)) > ((var_1_5))) ? ((var_1_22)) : ((var_1_5))))) < 0 ) ? -((((((var_1_22)) > ((var_1_5))) ? ((var_1_22)) : ((var_1_5))))) : ((((((var_1_22)) > ((var_1_5))) ? ((var_1_22)) : ((var_1_5)))))))) > ( (((((var_1_40)) < (( ((256) + (var_1_26))))) ? ((var_1_40)) : (( ((256) + (var_1_26))))))))) {
                     var_1_46 = (
                      ((((( var_1_37 )) < (( var_1_35 ))) ? (( var_1_37 )) : (( var_1_35 ))))
   );
  }
 } else {
                    var_1_46 = (
                     ((((((((( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) < (( var_1_37 ))) ? (( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) : (( var_1_37 ))))) < 0 ) ? -(((((( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) < (( var_1_37 ))) ? (( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) : (( var_1_37 ))))) : (((((( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) < (( var_1_37 ))) ? (( ((((( var_1_35 )) > (( var_1_36 ))) ? (( var_1_35 )) : (( var_1_36 )))) )) : (( var_1_37 )))))))
  );
 }
                               var_1_17 = (
                                ((
                                 ((
    var_1_18
   ) - (
    25
   ))
  ) - (
   var_1_19
  ))
 );
 unsigned long int stepLocal_2 = ((var_1_22) + (var_1_3));
                               if ( (( (( ((var_1_18) % (var_1_21))) & ( ((((1u) < 0 ) ? -(1u) : (1u)))))) < (stepLocal_2))) {
                                var_1_20 = (
                                 ((
    var_1_23
   ) || (
    var_1_24
   ))
  );
 } else {
                                var_1_20 = (
   var_1_7
  );
 }
                               if (var_1_8) {
                                var_1_25 = (
                                 ((
    var_1_26
   ) + (
    var_1_27
   ))
  );
 }
                  var_1_38 = (
                   ((((( var_1_26 )) > (( var_1_27 ))) ? (( var_1_26 )) : (( var_1_27 ))))
 );
 signed long int stepLocal_3 = var_1_3;
                               if ( (( (~ (var_1_5))) > (stepLocal_3))) {
                                var_1_28 = (
                                 (! (
    var_1_4
   ))
  );
 } else {
                                var_1_28 = (
                                 ((
    var_1_1
   ) || (
                                  ((
                                   (! (
      var_1_23
     ))
    ) && (
                                   ((
      var_1_24
     ) || (
      var_1_4
     ))
    ))
   ))
  );
 }
                   if ( ((var_1_1) || ( ((var_1_14) >= ( ((var_1_48) + (var_1_37))))))) {
                    if ( ((-2) > (var_1_11))) {
                     var_1_49 = (
    var_1_27
   );
  } else {
                     var_1_49 = (
    var_1_40
   );
  }
 }
                               var_1_29 = (
  var_1_27
 );
                               var_1_30 = (
  var_1_4
 );
                  if ( (! (var_1_7))) {
                   var_1_33 = (
                    ((((( var_1_35 )) > (( (( var_1_36 ) - ( var_1_37 )) ))) ? (( var_1_35 )) : (( (( var_1_36 ) - ( var_1_37 )) ))))
  );
 }
                   if ( ((var_1_33) <= (var_1_35))) {
                    if ( (( ((((((var_1_33) + (var_1_37))) < 0 ) ? -(((var_1_33) + (var_1_37))) : (((var_1_33) + (var_1_37)))))) < (var_1_36))) {
                     var_1_45 = (
                      ((((( 31.35 )) < (( ((((( var_1_37 )) < (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 )))) ))) ? (( 31.35 )) : (( ((((( var_1_37 )) < (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 )))) ))))
   );
  }
 } else {
                    var_1_45 = (
   var_1_36
  );
 }
                              if ( (( ((var_1_6) > (var_1_3))) && (var_1_28))) {
                               var_1_9 = (
   var_1_10
  );
 } else {
                               var_1_9 = (
                                ((((( var_1_10 )) > (( ((((( (( var_1_11 ) - ( 10 )) )) < (( var_1_12 ))) ? (( (( var_1_11 ) - ( 10 )) )) : (( var_1_12 )))) ))) ? (( var_1_10 )) : (( ((((( (( var_1_11 ) - ( 10 )) )) < (( var_1_12 ))) ? (( (( var_1_11 ) - ( 10 )) )) : (( var_1_12 )))) ))))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32767);
 assume_abort_if_not(var_1_12 <= 32766);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -461168.6018427383000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -461168.6018427383000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854766000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 4294967295);
 assume_abort_if_not(var_1_21 != 0);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854766000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854766000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 31);
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= 0.0F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 9223372.036854776000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (((((var_1_2)) > ((var_1_3))) ? ((var_1_2)) : ((var_1_3))))) <= ( ((var_1_5) - (var_1_6))))) {
  if ( ((var_1_5) < (var_1_6))) {
   if (var_1_4) {
   } else {
   }
  }
 } else {
 }
 if ( (( ((var_1_6) > (var_1_3))) && (var_1_28))) {
 } else {
 }
 if (var_1_8) {
 }
 if ( (( (( ((var_1_18) % (var_1_21))) & ( ((((1u) < 0 ) ? -(1u) : (1u)))))) < ( ((var_1_22) + (var_1_3))))) {
 } else {
 }
 if (var_1_8) {
 }
 if ( (( (~ (var_1_5))) > (var_1_3))) {
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
                                            ((
                                                  ((
                                                  ((((( var_1_2 )) > (( var_1_3 ))) ? (( var_1_2 )) : (( var_1_3 ))))
         ) <= (
                                                  ((
           var_1_5
          ) - (
           var_1_6
          ))
         ))
        ) ? (
                                             ((
                                                   ((
           var_1_5
          ) < (
           var_1_6
          ))
         ) ? (
                                              ((
           var_1_4
          ) ? (
                                               ((
            var_1_1
           ) == (
                                                ((unsigned char) (
             var_1_7
            ))
           ))
          ) : (
                                               ((
            var_1_1
           ) == (
                                                ((unsigned char) (
             var_1_8
            ))
           ))
          ))
         ) : (
          1
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned char) (
           0
          ))
         ))
        ))
       ) && (
                                            ((
                                                  ((
                                                   ((
           var_1_6
          ) > (
           var_1_3
          ))
         ) && (
          var_1_28
         ))
        ) ? (
                                             ((
          var_1_9
         ) == (
                                              ((signed short int) (
           var_1_10
          ))
         ))
        ) : (
                                             ((
          var_1_9
         ) == (
                                              ((signed short int) (
                                               ((((( var_1_10 )) > (( ((((( (( var_1_11 ) - ( 10 )) )) < (( var_1_12 ))) ? (( (( var_1_11 ) - ( 10 )) )) : (( var_1_12 )))) ))) ? (( var_1_10 )) : (( ((((( (( var_1_11 ) - ( 10 )) )) < (( var_1_12 ))) ? (( (( var_1_11 ) - ( 10 )) )) : (( var_1_12 )))) ))))
          ))
         ))
        ))
       ))
      ) && (
                                            ((
        var_1_8
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((float) (
                                               ((((( (( var_1_14 ) + ( var_1_15 )) )) < (( ((((( -0.2f )) < (( var_1_16 ))) ? (( -0.2f )) : (( var_1_16 )))) ))) ? (( (( var_1_14 ) + ( var_1_15 )) )) : (( ((((( -0.2f )) < (( var_1_16 ))) ? (( -0.2f )) : (( var_1_16 )))) ))))
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
       var_1_17
      ) == (
                                            ((signed short int) (
                                             ((
                                              ((
          var_1_18
         ) - (
          25
         ))
        ) - (
         var_1_19
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
                                                  ((
                                                   ((
         var_1_18
        ) % (
         var_1_21
        ))
       ) & (
                                                   ((((1u) < 0 ) ? -(1u) : (1u)))
       ))
      ) < (
                                                  ((
        var_1_22
       ) + (
        var_1_3
       ))
      ))
     ) ? (
                                           ((
       var_1_20
      ) == (
                                            ((unsigned char) (
                                             ((
         var_1_23
        ) || (
         var_1_24
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_20
      ) == (
                                            ((unsigned char) (
        var_1_7
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_8
    ) ? (
                                          ((
      var_1_25
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_26
       ) + (
        var_1_27
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
                                                (~ (
      var_1_5
     ))
    ) > (
     var_1_3
    ))
   ) ? (
                                         ((
     var_1_28
    ) == (
                                          ((unsigned char) (
                                           (! (
       var_1_4
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_28
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_1
      ) || (
                                            ((
                                             (! (
         var_1_23
        ))
       ) && (
                                             ((
         var_1_24
        ) || (
         var_1_4
        ))
       ))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_29
  ) == (
                                        ((unsigned short int) (
    var_1_27
   ))
  ))
 ))
) && (
                                      ((
  var_1_30
 ) == (
                                       ((unsigned char) (
   var_1_4
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
