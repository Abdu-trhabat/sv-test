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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch123Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 16;
unsigned long int var_1_2 = 3375952581;
unsigned long int var_1_3 = 16;
unsigned long int var_1_4 = 5;
unsigned long int var_1_5 = 2;
unsigned char var_1_6 = 0;
signed char var_1_7 = -1;
signed char var_1_8 = -32;
signed char var_1_9 = 64;
signed char var_1_10 = 0;
unsigned short int var_1_11 = 2;
unsigned short int var_1_12 = 5;
unsigned short int var_1_13 = 50;
float var_1_16 = 8.75;
float var_1_17 = 9.75;
float var_1_18 = 4.2;
float var_1_19 = 0.0;
float var_1_20 = 100.25;
float var_1_21 = 8.1;
signed short int var_1_22 = 64;
signed short int var_1_23 = -8;
signed char var_1_24 = 16;
signed short int var_1_25 = 100;
signed char var_1_26 = -25;
signed char var_1_27 = 10;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
signed char var_1_30 = 1;
signed char var_1_31 = 16;
unsigned long int var_1_32 = 50;
unsigned long int var_1_33 = 1891520580;
unsigned long int var_1_34 = 1720392339;
unsigned long int var_1_35 = 32;
unsigned short int var_1_36 = 2;
unsigned short int var_1_37 = 60368;
unsigned char var_1_38 = 0;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 1;
float var_1_42 = 4.75;
float var_1_43 = 0.7;
float var_1_44 = 63.4;
float var_1_45 = 255.5;
unsigned short int var_1_46 = 10000;
unsigned long int last_1_var_1_1 = 16;
float last_1_var_1_16 = 8.75;
void initially(void) {
}
void step(void) {
                                           if ( ((var_1_2) <= (last_1_var_1_1))) {
                                           var_1_11 = (
                                            ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
  );
 } else {
                                            if ( (( (- (last_1_var_1_16))) <= (last_1_var_1_16))) {
                                             var_1_11 = (
                                              ((((( var_1_13 )) > (( var_1_12 ))) ? (( var_1_13 )) : (( var_1_12 ))))
   );
  } else {
                                             var_1_11 = (
    4
   );
  }
 }
                              if ( (( ((var_1_2) - (var_1_3))) != ( ((var_1_4) / (var_1_5))))) {
                               if (var_1_6) {
                                var_1_1 = (
    var_1_3
   );
  } else {
                                var_1_1 = (
    16u
   );
  }
 } else {
                                var_1_1 = (
   var_1_3
  );
 }
                   if ( ((var_1_28) && (var_1_29))) {
                    var_1_27 = (
                     (((((( var_1_30 ) - ( ((((( var_1_31 )) < (( 100 ))) ? (( var_1_31 )) : (( 100 )))) ))) < 0 ) ? -((( var_1_30 ) - ( ((((( var_1_31 )) < (( 100 ))) ? (( var_1_31 )) : (( 100 )))) ))) : ((( var_1_30 ) - ( ((((( var_1_31 )) < (( 100 ))) ? (( var_1_31 )) : (( 100 )))) )))))
  );
 }
                               if (var_1_6) {
                                var_1_7 = (
   var_1_8
  );
 }
                  var_1_22 = (
  var_1_23
 );
 signed long int stepLocal_1 = 8;
 unsigned long int stepLocal_0 = var_1_1;
                                if ( ((stepLocal_1) == (var_1_3))) {
                                 if ( ((stepLocal_0) >= (var_1_3))) {
                                  if ( (! ( ((var_1_3) > ( ((var_1_5) / (var_1_2))))))) {
                                   var_1_9 = (
     var_1_8
    );
   } else {
                                   var_1_9 = (
     0
    );
   }
  } else {
                                  var_1_9 = (
    var_1_8
   );
  }
 } else {
                                 var_1_9 = (
   -50
  );
 }
                  if ( ((var_1_1) <= ( ((var_1_25) - ( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))))))) {
                   var_1_24 = (
                    ((((( var_1_26 )) < (( -2 ))) ? (( var_1_26 )) : (( -2 ))))
  );
 }
                   if ( ((-5) > (var_1_7))) {
                    var_1_32 = (
                     ((
                      ((
                       ((
      var_1_33
     ) - (
      var_1_31
     ))
    ) + (
                       ((
      var_1_34
     ) - (
      var_1_30
     ))
    ))
   ) - (
                      (((((( 200u ) + ( var_1_35 ))) < 0 ) ? -((( 200u ) + ( var_1_35 ))) : ((( 200u ) + ( var_1_35 )))))
   ))
  );
 } else {
                    var_1_32 = (
                     ((((( ((((( var_1_30 )) > (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 )))) )) < (( var_1_33 ))) ? (( ((((( var_1_30 )) > (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 )))) )) : (( var_1_33 ))))
  );
 }
                   if ( ((var_1_1) < ( (~ (var_1_35))))) {
                    var_1_36 = (
                     ((
                      ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
   ) - (
    var_1_30
   ))
  );
 } else {
                    if ( ((var_1_25) >= (var_1_34))) {
                     if (var_1_28) {
                      var_1_36 = (
     var_1_31
    );
   } else {
                      var_1_36 = (
     var_1_37
    );
   }
  } else {
                     var_1_36 = (
    var_1_31
   );
  }
 }
                   if (var_1_28) {
                    var_1_38 = (
                     ((
    var_1_39
   ) && (
                      ((
     var_1_29
    ) || (
     var_1_40
    ))
   ))
  );
 } else {
                    var_1_38 = (
                     ((
                      ((
     var_1_29
    ) || (
     var_1_40
    ))
   ) && (
                      ((
     var_1_39
    ) || (
     var_1_41
    ))
   ))
  );
 }
                   if (var_1_40) {
                    var_1_42 = (
                     ((((( var_1_43 )) < (( ((((( var_1_44 )) > (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))) ? (( var_1_43 )) : (( ((((( var_1_44 )) > (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))))
  );
 }
                                if ( (( ((var_1_3) == (32u))) || ( ((var_1_5) == (var_1_1))))) {
                                 var_1_10 = (
   var_1_8
  );
 }
 unsigned short int stepLocal_4 = var_1_11;
 unsigned short int stepLocal_3 = var_1_12;
 unsigned short int stepLocal_2 = var_1_11;
                                if ( ((var_1_4) > (stepLocal_2))) {
                                 if ( ((stepLocal_4) <= (var_1_13))) {
                                  if ( (( ((var_1_1) / (var_1_5))) > (stepLocal_3))) {
                                   var_1_16 = (
     var_1_17
    );
   } else {
                                   var_1_16 = (
                                    ((
      var_1_18
     ) - (
                                     ((((( (( var_1_19 ) - ( var_1_20 )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( var_1_20 )) )) : (( var_1_21 ))))
     ))
    );
   }
  } else {
                                  var_1_16 = (
    var_1_18
   );
  }
 } else {
                                 var_1_16 = (
   var_1_18
  );
 }
                   var_1_46 = (
  5
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 2147483647);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 assume_abort_if_not(var_1_5 != 0);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_8 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_8 >= -127);
 assume_abort_if_not(var_1_8 <= 126);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 65534);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 65534);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854766000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 4611686.018427383000e+12F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -32767);
 assume_abort_if_not(var_1_23 <= 32766);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 1610612735);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1610612735);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1073741823);
 var_1_37 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_37 >= 32767);
 assume_abort_if_not(var_1_37 <= 65534);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 if ( (( ((var_1_2) - (var_1_3))) != ( ((var_1_4) / (var_1_5))))) {
  if (var_1_6) {
  } else {
  }
 } else {
 }
 if (var_1_6) {
 }
 if ( ((8) == (var_1_3))) {
  if ( ((var_1_1) >= (var_1_3))) {
   if ( (! ( ((var_1_3) > ( ((var_1_5) / (var_1_2))))))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (( ((var_1_3) == (32u))) || ( ((var_1_5) == (var_1_1))))) {
 }
 if ( ((var_1_2) <= (last_1_var_1_1))) {
 } else {
  if ( (( (- (last_1_var_1_16))) <= (last_1_var_1_16))) {
  } else {
  }
 }
 if ( ((var_1_4) > (var_1_11))) {
  if ( ((var_1_11) <= (var_1_13))) {
   if ( (( ((var_1_1) / (var_1_5))) > (var_1_12))) {
   } else {
   }
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
        var_1_2
       ) - (
        var_1_3
       ))
      ) != (
                                               ((
        var_1_4
       ) / (
        var_1_5
       ))
      ))
     ) ? (
                                          ((
       var_1_6
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned long int) (
         var_1_3
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned long int) (
         16u
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_1
      ) == (
                                           ((unsigned long int) (
        var_1_3
       ))
      ))
     ))
    ) && (
                                         ((
      var_1_6
     ) ? (
                                          ((
       var_1_7
      ) == (
                                           ((signed char) (
        var_1_8
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
                                              ((
      8
     ) == (
      var_1_3
     ))
    ) ? (
                                          ((
                                               ((
       var_1_1
      ) >= (
       var_1_3
      ))
     ) ? (
                                           ((
                                                (! (
                                                 ((
         var_1_3
        ) > (
                                                  ((
          var_1_5
         ) / (
          var_1_2
         ))
        ))
       ))
      ) ? (
                                            ((
        var_1_9
       ) == (
                                             ((signed char) (
         var_1_8
        ))
       ))
      ) : (
                                            ((
        var_1_9
       ) == (
                                             ((signed char) (
         0
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_9
      ) == (
                                            ((signed char) (
        var_1_8
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_9
     ) == (
                                           ((signed char) (
       -50
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_3
     ) == (
      32u
     ))
    ) || (
                                                ((
      var_1_5
     ) == (
      var_1_1
     ))
    ))
   ) ? (
                                         ((
     var_1_10
    ) == (
                                          ((signed char) (
      var_1_8
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                                  ((
                                                         ((
    var_1_2
   ) <= (
    last_1_var_1_1
   ))
  ) ? (
                                                   ((
    var_1_11
   ) == (
                                                    ((unsigned short int) (
                                                     ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
    ))
   ))
  ) : (
                                                   ((
                                                          ((
                                                           (- (
      last_1_var_1_16
     ))
    ) <= (
     last_1_var_1_16
    ))
   ) ? (
                                                    ((
     var_1_11
    ) == (
                                                     ((unsigned short int) (
                                                      ((((( var_1_13 )) > (( var_1_12 ))) ? (( var_1_13 )) : (( var_1_12 ))))
     ))
    ))
   ) : (
                                                    ((
     var_1_11
    ) == (
                                                     ((unsigned short int) (
      4
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_4
  ) > (
   var_1_11
  ))
 ) ? (
                                       ((
                                              ((
    var_1_11
   ) <= (
    var_1_13
   ))
  ) ? (
                                        ((
                                               ((
                                                ((
      var_1_1
     ) / (
      var_1_5
     ))
    ) > (
     var_1_12
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((float) (
      var_1_17
     ))
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((float) (
                                           ((
       var_1_18
      ) - (
                                            ((((( (( var_1_19 ) - ( var_1_20 )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( var_1_20 )) )) : (( var_1_21 ))))
      ))
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_16
   ) == (
                                         ((float) (
     var_1_18
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_16
  ) == (
                                        ((float) (
    var_1_18
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
