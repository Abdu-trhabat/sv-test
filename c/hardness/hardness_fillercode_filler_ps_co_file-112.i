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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch112Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 8;
unsigned long int var_1_4 = 3917050220;
unsigned char var_1_5 = 1;
float var_1_6 = 7.5;
float var_1_7 = 16.75;
float var_1_8 = 10.125;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 8;
signed char var_1_11 = 100;
unsigned char var_1_12 = 1;
signed char var_1_13 = -4;
unsigned long int var_1_14 = 64;
unsigned short int var_1_15 = 100;
unsigned char var_1_16 = 128;
unsigned char var_1_17 = 5;
unsigned short int var_1_18 = 128;
unsigned long int var_1_19 = 1450604137;
unsigned long int var_1_20 = 1115287165;
unsigned short int var_1_21 = 24626;
unsigned short int var_1_22 = 2;
unsigned short int var_1_23 = 50515;
double var_1_24 = 5.4;
double var_1_25 = 9999.2;
signed short int var_1_26 = 32;
signed char var_1_27 = -8;
unsigned short int var_1_28 = 32995;
unsigned short int var_1_29 = 32;
signed long int var_1_30 = 50;
unsigned char var_1_31 = 0;
signed char var_1_32 = -1;
float var_1_33 = 9999999999999.5;
float var_1_35 = 100.5;
float var_1_36 = 3.125;
float var_1_37 = -0.5;
float var_1_38 = 2.6;
float var_1_39 = 25.5;
unsigned long int var_1_40 = 128;
signed short int var_1_41 = -16;
double var_1_42 = 0.141;
float var_1_44 = -0.6;
unsigned long int var_1_45 = 1000000;
signed short int var_1_46 = -500;
unsigned char var_1_47 = 1;
unsigned char var_1_48 = 0;
signed char last_1_var_1_11 = 100;
unsigned long int last_1_var_1_14 = 64;
unsigned short int last_1_var_1_18 = 128;
void initially(void) {
}
void step(void) {
                  if ( (( ((var_1_28) - (var_1_29))) != ( ((var_1_30) >> (25))))) {
                   if (var_1_31) {
                    var_1_27 = (
    var_1_32
   );
  }
 }
                   if ( ((var_1_31) && ( ((10.4f) > ( ((99.625f) + (var_1_24))))))) {
                   var_1_33 = (
                    ((
    var_1_35
   ) + (
                     ((((( var_1_36 )) < (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))
   ))
  );
 } else {
                    if ( (( ((var_1_14) + (var_1_30))) <= ( (((((var_1_29)) > (( (~ (var_1_28))))) ? ((var_1_29)) : (( (~ (var_1_28))))))))) {
                     var_1_33 = (
                      ((
                       ((
      var_1_38
     ) - (
      var_1_39
     ))
    ) + (
     var_1_37
    ))
   );
  }
 }
                   var_1_40 = (
  var_1_28
 );
                   var_1_41 = (
  var_1_32
 );
                   if ( ((var_1_39) < (var_1_35))) {
                    var_1_42 = (
                     ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
  );
 } else {
                    if (var_1_31) {
                     if ( ((var_1_29) >= ( (- (var_1_18))))) {
                      var_1_42 = (
                       (((((( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ) - ( var_1_38 ))) < 0 ) ? -((( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ) - ( var_1_38 ))) : ((( ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))) ) - ( var_1_38 )))))
    );
   } else {
                      if ( ((var_1_14) < (var_1_30))) {
                       var_1_42 = (
                        ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
     );
    }
   }
  } else {
                     var_1_42 = (
                      ((
     var_1_39
    ) - (
     var_1_38
    ))
   );
  }
 }
                   if ( (( ((var_1_29) << (var_1_15))) < (var_1_15))) {
                    var_1_44 = (
                     (((((( var_1_37 ) + ( var_1_38 ))) < 0 ) ? -((( var_1_37 ) + ( var_1_38 ))) : ((( var_1_37 ) + ( var_1_38 )))))
  );
 }
                   var_1_45 = (
  var_1_1
 );
                   var_1_46 = (
  0
 );
                   var_1_47 = (
  var_1_48
 );
 signed long int stepLocal_0 = last_1_var_1_11;
                                         if ( ((last_1_var_1_14) != (stepLocal_0))) {
                                          var_1_1 = (
                                           ((
    var_1_4
   ) - (
    100000000u
   ))
  );
 }
 unsigned char stepLocal_2 = var_1_9;
 unsigned long int stepLocal_1 = (( ((var_1_4) - (var_1_10))) | (var_1_1));
                               if ( ((stepLocal_2) && (var_1_12))) {
                                if ( ((stepLocal_1) > (var_1_1))) {
                                var_1_11 = (
    var_1_13
   );
  } else {
                                 var_1_11 = (
    -32
   );
  }
 }
                               if ( (( ((var_1_16) - (var_1_17))) < ( ((var_1_10) - (var_1_1))))) {
                                var_1_15 = (
   1
  );
 }
                               var_1_14 = (
                                ((((( (( var_1_15 ) + ( var_1_10 )) )) > (( var_1_4 ))) ? (( (( var_1_15 ) + ( var_1_10 )) )) : (( var_1_4 ))))
 );
                              if ( (( ((var_1_6) * (var_1_7))) >= (var_1_8))) {
                               if (var_1_9) {
                                var_1_5 = (
    var_1_10
   );
  }
 }
                               if ( (( (( ((var_1_19) + (var_1_20))) - ( ((var_1_17) + (var_1_16))))) > ( ((var_1_4) - (var_1_10))))) {
                                 if ( ((var_1_1) > (var_1_20))) {
                                  var_1_18 = (
                                   ((
                                    ((
      var_1_21
     ) - (
      var_1_17
     ))
    ) + (
     last_1_var_1_18
    ))
   );
  } else {
                                  var_1_18 = (
    var_1_17
   );
  }
 } else {
                                 if ( (( (( ((var_1_16) % (var_1_21))) % (var_1_22))) > (last_1_var_1_18))) {
                                  var_1_18 = (
                                   ((
                                    ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))
    ) - (
     var_1_17
    ))
   );
  } else {
                                  if ( (! (var_1_9))) {
                                   var_1_18 = (
     var_1_21
    );
   } else {
                                   var_1_18 = (
     var_1_10
    );
   }
  }
 }
                                var_1_24 = (
  var_1_25
 );
                                var_1_26 = (
  10
 );
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 2147483647);
 assume_abort_if_not(var_1_4 <= 4294967294);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 255);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 127);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 1073741823);
 assume_abort_if_not(var_1_19 <= 2147483648);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 1073741824);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 16383);
 assume_abort_if_not(var_1_21 <= 32767);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65535);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 32767);
 assume_abort_if_not(var_1_23 <= 65534);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 32767);
 assume_abort_if_not(var_1_28 <= 65535);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= -127);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -461168.6018427383000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 4611686.018427383000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -461168.6018427383000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 4611686.018427383000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 4611686.018427383000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if ( ((last_1_var_1_14) != (last_1_var_1_11))) {
 }
 if ( (( ((var_1_6) * (var_1_7))) >= (var_1_8))) {
  if (var_1_9) {
  }
 }
 if ( ((var_1_9) && (var_1_12))) {
  if ( (( (( ((var_1_4) - (var_1_10))) | (var_1_1))) > (var_1_1))) {
  } else {
  }
 }
 if ( (( ((var_1_16) - (var_1_17))) < ( ((var_1_10) - (var_1_1))))) {
 }
 if ( (( (( ((var_1_19) + (var_1_20))) - ( ((var_1_17) + (var_1_16))))) > ( ((var_1_4) - (var_1_10))))) {
  if ( ((var_1_1) > (var_1_20))) {
  } else {
  }
 } else {
  if ( (( (( ((var_1_16) % (var_1_21))) % (var_1_22))) > (last_1_var_1_18))) {
  } else {
   if ( (! (var_1_9))) {
   } else {
   }
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
         last_1_var_1_14
        ) != (
         last_1_var_1_11
        ))
       ) ? (
                                                       ((
         var_1_1
        ) == (
                                                        ((unsigned long int) (
                                                         ((
           var_1_4
          ) - (
           100000000u
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
          var_1_6
         ) * (
          var_1_7
         ))
        ) >= (
         var_1_8
        ))
       ) ? (
                                            ((
         var_1_9
        ) ? (
                                             ((
          var_1_5
         ) == (
                                              ((unsigned char) (
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
                                                ((
        var_1_9
       ) && (
        var_1_12
       ))
      ) ? (
                                            ((
                                                 ((
                                                  ((
                                                   ((
           var_1_4
          ) - (
           var_1_10
          ))
         ) | (
          var_1_1
         ))
        ) > (
         var_1_1
        ))
       ) ? (
                                            ((
         var_1_11
        ) == (
                                             ((signed char) (
          var_1_13
         ))
        ))
       ) : (
                                             ((
         var_1_11
        ) == (
                                              ((signed char) (
          -32
         ))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
      var_1_14
     ) == (
                                           ((unsigned long int) (
                                            ((((( (( var_1_15 ) + ( var_1_10 )) )) > (( var_1_4 ))) ? (( (( var_1_15 ) + ( var_1_10 )) )) : (( var_1_4 ))))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_16
      ) - (
       var_1_17
      ))
     ) < (
                                                 ((
       var_1_10
      ) - (
       var_1_1
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned short int) (
       1
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
                                                 ((
       var_1_19
      ) + (
       var_1_20
      ))
     ) - (
                                                 ((
       var_1_17
      ) + (
       var_1_16
      ))
     ))
    ) > (
                                                ((
      var_1_4
     ) - (
      var_1_10
     ))
    ))
   ) ? (
                                         ((
                                                ((
      var_1_1
     ) > (
      var_1_20
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned short int) (
                                            ((
                                             ((
         var_1_21
        ) - (
         var_1_17
        ))
       ) + (
        last_1_var_1_18
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned short int) (
       var_1_17
      ))
     ))
    ))
   ) : (
                                         ((
                                                ((
                                                 ((
                                                  ((
        var_1_16
       ) % (
        var_1_21
       ))
      ) % (
       var_1_22
      ))
     ) > (
      last_1_var_1_18
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned short int) (
                                            ((
                                             ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23)))
       ) - (
        var_1_17
       ))
      ))
     ))
    ) : (
                                          ((
                                                 (! (
       var_1_9
      ))
     ) ? (
                                           ((
       var_1_18
      ) == (
                                            ((unsigned short int) (
        var_1_21
       ))
      ))
     ) : (
                                           ((
       var_1_18
      ) == (
                                            ((unsigned short int) (
        var_1_10
       ))
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((double) (
    var_1_25
   ))
  ))
 ))
) && (
                                      ((
  var_1_26
 ) == (
                                       ((signed short int) (
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
