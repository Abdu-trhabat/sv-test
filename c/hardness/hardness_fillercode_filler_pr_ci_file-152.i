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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch152Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 16;
signed char var_1_2 = 1;
signed char var_1_3 = 25;
signed char var_1_4 = -4;
signed char var_1_5 = 1;
signed char var_1_6 = 32;
signed char var_1_7 = 4;
signed long int var_1_8 = 4;
signed char var_1_9 = 100;
signed char var_1_10 = 100;
signed char var_1_11 = 1;
unsigned char var_1_12 = 0;
float var_1_13 = 31.25;
float var_1_14 = 99.5;
signed long int var_1_15 = -64;
float var_1_16 = 10.4;
float var_1_17 = 49.1;
unsigned short int var_1_18 = 0;
float var_1_19 = 0.1;
float var_1_20 = 0.0;
float var_1_21 = 0.0;
float var_1_22 = 0.4;
unsigned short int var_1_23 = 16;
signed char var_1_25 = 32;
unsigned long int var_1_27 = 256;
unsigned long int var_1_28 = 256;
unsigned long int var_1_29 = 10;
double var_1_30 = 10.4;
double var_1_31 = 9.875;
float var_1_32 = 100000000000000.25;
float var_1_34 = 999.25;
float var_1_35 = 9999999999999.4;
signed short int var_1_38 = 5;
double var_1_41 = 15.625;
unsigned short int var_1_42 = 8;
unsigned short int var_1_43 = 59542;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
double var_1_49 = 128.5;
void initially(void) {
}
void step(void) {
                              var_1_1 = (
                               ((((( (( var_1_2 ) - ( 25 )) )) > (( (( var_1_3 ) + ( (( 1 ) + ( var_1_4 )) )) ))) ? (( (( var_1_2 ) - ( 25 )) )) : (( (( var_1_3 ) + ( (( 1 ) + ( var_1_4 )) )) ))))
 );
                  var_1_27 = (
                   ((((( ((((( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) > (( var_1_18 ))) ? (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) : (( var_1_18 )))) )) < (( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) ))) ? (( ((((( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) > (( var_1_18 ))) ? (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) : (( var_1_18 )))) )) : (( ((((( var_1_28 )) < (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) ))))
 );
                               if (var_1_12) {
                                var_1_15 = (
                                 ((
    var_1_2
   ) - (
                                  ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))
   ))
  );
 }
                 var_1_23 = (
  var_1_18
 );
                  var_1_30 = (
  var_1_31
 );
                              if ( ((var_1_15) >= ( (( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) * (1))))) {
                               var_1_5 = (
   var_1_3
  );
 }
                   if (var_1_12) {
                    if ( (( (( ((var_1_34) + (var_1_31))) / (var_1_20))) != ( ((var_1_35) / (var_1_41))))) {
                     var_1_38 = (
                      ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))
   );
  }
 }
                   if ( ((var_1_2) < ( (~ (-32))))) {
                    var_1_42 = (
                     ((
                      ((
     var_1_43
    ) - (
     var_1_18
    ))
   ) - (
    var_1_18
   ))
  );
 } else {
                    var_1_42 = (
                     ((((( (( var_1_43 ) - ( var_1_18 )) )) < (( ((((( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) > (( var_1_18 ))) ? (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) : (( var_1_18 )))) ))) ? (( (( var_1_43 ) - ( var_1_18 )) )) : (( ((((( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) > (( var_1_18 ))) ? (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) )) : (( var_1_18 )))) ))))
  );
 }
 signed long int stepLocal_0 = (( ((var_1_4) | (var_1_3))) + ( ((var_1_15) / (var_1_8))));
                               if ( (( ((var_1_2) / (var_1_7))) < (stepLocal_0))) {
                               var_1_6 = (
                                ((
                                 ((((( var_1_2 )) > (( var_1_9 ))) ? (( var_1_2 )) : (( var_1_9 ))))
   ) - (
                                 ((
     var_1_10
    ) - (
     var_1_11
    ))
   ))
  );
 } else {
                                if (var_1_12) {
                                 var_1_6 = (
    var_1_3
   );
  } else {
                                 var_1_6 = (
    var_1_9
   );
  }
 }
                               if (var_1_12) {
                                if ( (( (((((var_1_15)) > (( ((var_1_2) - (var_1_11))))) ? ((var_1_15)) : (( ((var_1_2) - (var_1_11))))))) >= (var_1_1))) {
                                 var_1_13 = (
    var_1_14
   );
  }
 }
                  if ( ((var_1_30) < (var_1_31))) {
                   var_1_32 = (
                    ((((( ((((( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) < (( var_1_14 ))) ? (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) : (( var_1_14 )))) )) < (( (( (( var_1_34 ) + ( var_1_35 )) ) + ( var_1_21 )) ))) ? (( ((((( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) < (( var_1_14 ))) ? (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) )) : (( var_1_14 )))) )) : (( (( (( var_1_34 ) + ( var_1_35 )) ) + ( var_1_21 )) ))))
  );
 } else {
                   var_1_32 = (
                    ((
    var_1_20
   ) - (
                     ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
   ))
  );
 }
 signed char stepLocal_2 = var_1_9;
 signed char stepLocal_1 = var_1_1;
                                if ( (( ((var_1_13) / (var_1_17))) >= (var_1_14))) {
                                 if ( (( ((var_1_11) << ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) <= (stepLocal_2))) {
                                 var_1_16 = (
                                  ((
     var_1_19
    ) - (
     64.4f
    ))
   );
  } else {
                                  if ( ((var_1_15) >= (stepLocal_1))) {
                                  var_1_16 = (
                                   ((((( var_1_14 )) > (( (( var_1_19 ) - ( (( var_1_20 ) - ( var_1_21 )) )) ))) ? (( var_1_14 )) : (( (( var_1_19 ) - ( (( var_1_20 ) - ( var_1_21 )) )) ))))
    );
   } else {
                                  var_1_16 = (
     var_1_22
    );
   }
  }
 } else {
                                 var_1_16 = (
   var_1_20
  );
 }
                  var_1_25 = (
  var_1_10
 );
                   if ( (( ((var_1_21) - ( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))))) > (var_1_30))) {
                    var_1_46 = (
                     (! (
                      (! (
                       ((
      var_1_12
     ) || (
      var_1_47
     ))
    ))
   ))
  );
 } else {
                    if ( ((var_1_47) || (var_1_12))) {
                     var_1_46 = (
    var_1_48
   );
  }
 }
                   var_1_49 = (
  var_1_14
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 126);
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= -63);
 assume_abort_if_not(var_1_3 <= 63);
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -31);
 assume_abort_if_not(var_1_4 <= 31);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -128);
 assume_abort_if_not(var_1_7 <= 127);
 assume_abort_if_not(var_1_7 != 0);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 assume_abort_if_not(var_1_8 != 0);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= 63);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 4611686.018427383000e+12F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854766000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 4294967294);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967294);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 assume_abort_if_not(var_1_41 != 0.0F);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 49150);
 assume_abort_if_not(var_1_43 <= 65534);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 1);
 assume_abort_if_not(var_1_47 <= 1);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 0);
 assume_abort_if_not(var_1_48 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_15) >= ( (( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) * (1))))) {
 }
 if ( (( ((var_1_2) / (var_1_7))) < ( (( ((var_1_4) | (var_1_3))) + ( ((var_1_15) / (var_1_8))))))) {
 } else {
  if (var_1_12) {
  } else {
  }
 }
 if (var_1_12) {
  if ( (( (((((var_1_15)) > (( ((var_1_2) - (var_1_11))))) ? ((var_1_15)) : (( ((var_1_2) - (var_1_11))))))) >= (var_1_1))) {
  }
 }
 if (var_1_12) {
 }
 if ( (( ((var_1_13) / (var_1_17))) >= (var_1_14))) {
  if ( (( ((var_1_11) << ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))) <= (var_1_9))) {
  } else {
   if ( ((var_1_15) >= (var_1_1))) {
   } else {
   }
  }
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
      var_1_1
     ) == (
                                          ((signed char) (
                                           ((((( (( var_1_2 ) - ( 25 )) )) > (( (( var_1_3 ) + ( (( 1 ) + ( var_1_4 )) )) ))) ? (( (( var_1_2 ) - ( 25 )) )) : (( (( var_1_3 ) + ( (( 1 ) + ( var_1_4 )) )) ))))
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_15
      ) >= (
                                                ((
                                                 ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
       ) * (
        1
       ))
      ))
     ) ? (
                                          ((
       var_1_5
      ) == (
                                           ((signed char) (
        var_1_3
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
       var_1_2
      ) / (
       var_1_7
      ))
     ) < (
                                               ((
                                                ((
        var_1_4
       ) | (
        var_1_3
       ))
      ) + (
                                                ((
        var_1_15
       ) / (
        var_1_8
       ))
      ))
     ))
    ) ? (
                                         ((
      var_1_6
     ) == (
                                          ((signed char) (
                                           ((
                                            ((((( var_1_2 )) > (( var_1_9 ))) ? (( var_1_2 )) : (( var_1_9 ))))
       ) - (
                                            ((
         var_1_10
        ) - (
         var_1_11
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_12
     ) ? (
                                           ((
       var_1_6
      ) == (
                                            ((signed char) (
        var_1_3
       ))
      ))
     ) : (
                                           ((
       var_1_6
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
    var_1_12
   ) ? (
                                         ((
                                                ((
                                                 ((((( var_1_15 )) > (( (( var_1_2 ) - ( var_1_11 )) ))) ? (( var_1_15 )) : (( (( var_1_2 ) - ( var_1_11 )) ))))
     ) >= (
      var_1_1
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((float) (
       var_1_14
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
  ) ? (
                                        ((
    var_1_15
   ) == (
                                         ((signed long int) (
                                          ((
      var_1_2
     ) - (
                                           ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))
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
    var_1_13
   ) / (
    var_1_17
   ))
  ) >= (
   var_1_14
  ))
 ) ? (
                                       ((
                                              ((
                                               ((
     var_1_11
    ) << (
                                                ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))
    ))
   ) <= (
    var_1_9
   ))
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((float) (
                                          ((
      var_1_19
     ) - (
      64.4f
     ))
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_15
    ) >= (
     var_1_1
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((float) (
                                           ((((( var_1_14 )) > (( (( var_1_19 ) - ( (( var_1_20 ) - ( var_1_21 )) )) ))) ? (( var_1_14 )) : (( (( var_1_19 ) - ( (( var_1_20 ) - ( var_1_21 )) )) ))))
     ))
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((float) (
      var_1_22
     ))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_16
  ) == (
                                        ((float) (
    var_1_20
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
