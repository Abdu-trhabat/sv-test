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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch199Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.7;
signed short int var_1_3 = 16;
signed short int var_1_4 = 10;
signed long int var_1_5 = 32;
signed long int var_1_6 = 2;
double var_1_8 = 0.5;
unsigned short int var_1_9 = 256;
signed short int var_1_10 = 1;
signed short int var_1_11 = 2;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
signed long int var_1_14 = 0;
signed long int var_1_15 = -256;
signed long int var_1_16 = 1000000000;
signed long int var_1_17 = 4;
unsigned char var_1_18 = 5;
unsigned char var_1_19 = 2;
unsigned char var_1_20 = 64;
unsigned short int var_1_21 = 100;
signed short int var_1_22 = 256;
signed long int var_1_23 = 1;
signed long int var_1_24 = -16;
unsigned short int var_1_25 = 10;
unsigned short int var_1_26 = 256;
unsigned short int var_1_27 = 0;
unsigned short int var_1_28 = 128;
unsigned short int var_1_29 = 256;
double var_1_30 = 4.6;
double var_1_31 = 5.95;
double var_1_32 = 24.75;
double var_1_33 = 16.125;
double var_1_34 = 16.125;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
signed char var_1_37 = -128;
signed char var_1_38 = 1;
signed char var_1_39 = -64;
unsigned short int var_1_40 = 0;
signed char var_1_41 = 10;
void initially(void) {
}
void step(void) {
                                var_1_21 = (
  var_1_20
 );
                                var_1_22 = (
  var_1_20
 );
 signed long int stepLocal_4 = ((var_1_21) * (var_1_5));
 signed short int stepLocal_3 = var_1_11;
                                if ( ((stepLocal_3) != (var_1_4))) {
                                 if ( ((stepLocal_4) != (5))) {
                                  var_1_12 = (
    var_1_13
   );
  }
 }
 signed long int stepLocal_0 = ((var_1_5) * (var_1_6));
                               if (var_1_12) {
                                if ( (( (( ((-128) / (var_1_3))) / (var_1_4))) < (stepLocal_0))) {
                                 if (var_1_12) {
                                  var_1_1 = (
     var_1_8
    );
   } else {
                                  var_1_1 = (
     5.2
    );
   }
  }
 }
 signed long int stepLocal_2 = (( ((var_1_10) - (var_1_11))) % ( (((((var_1_3)) > ((-64))) ? ((var_1_3)) : ((-64))))));
 unsigned char stepLocal_1 = ((var_1_1) < (var_1_8));
                                if ( ((var_1_12) && (stepLocal_1))) {
                                 if ( ((var_1_4) <= (stepLocal_2))) {
                                 var_1_9 = (
    var_1_11
   );
  } else {
                                  var_1_9 = (
    256
   );
  }
 } else {
                                 var_1_9 = (
   var_1_11
  );
 }
                                if ( ((var_1_11) < (var_1_3))) {
                                 var_1_14 = (
                                  ((
    var_1_9
   ) + (
    var_1_15
   ))
  );
 } else {
                                 var_1_14 = (
                                  ((
                                   ((
                                    ((
      var_1_16
     ) - (
      var_1_11
     ))
    ) + (
     var_1_9
    ))
   ) - (
    var_1_17
   ))
  );
 }
 unsigned char stepLocal_6 = var_1_13;
 signed short int stepLocal_5 = var_1_3;
                                if ( ((var_1_14) <= (stepLocal_5))) {
                                 if ( ((stepLocal_6) || ( ((var_1_10) != ( ((var_1_11) >> (var_1_19))))))) {
                                  var_1_18 = (
                                   ((
                                    (((((( 100 ) + ( var_1_20 ))) < 0 ) ? -((( 100 ) + ( var_1_20 ))) : ((( 100 ) + ( var_1_20 )))))
    ) - (
     var_1_19
    ))
   );
  } else {
                                  if (var_1_12) {
                                   var_1_18 = (
     var_1_20
    );
   } else {
                                   var_1_18 = (
     32
    );
   }
  }
 } else {
                                 var_1_18 = (
   var_1_20
  );
 }
                 var_1_23 = (
  var_1_24
 );
                  var_1_25 = (
                   ((((( ((((( var_1_26 )) < (( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) ))) ? (( var_1_26 )) : (( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) )))) )) < (( (( var_1_29 ) + ( 4 )) ))) ? (( ((((( var_1_26 )) < (( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) ))) ? (( var_1_26 )) : (( ((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))) )))) )) : (( (( var_1_29 ) + ( 4 )) ))))
 );
                  if ( ((var_1_9) < (var_1_23))) {
                   if ( ((var_1_29) == ( ((var_1_9) ^ (32))))) {
                    var_1_30 = (
                     ((((((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) < 0 ) ? -(((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))) : (((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))))))
   );
  } else {
                    var_1_30 = (
                     ((((( (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) ) + ( (( var_1_33 ) + ( var_1_34 )) )) )) < (( var_1_31 ))) ? (( (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) ) + ( (( var_1_33 ) + ( var_1_34 )) )) )) : (( var_1_31 ))))
   );
  }
 } else {
                   var_1_30 = (
   var_1_34
  );
 }
                   if ( (( (((((var_1_26)) > (( ((var_1_9) / (2))))) ? ((var_1_26)) : (( ((var_1_9) / (2))))))) <= (4))) {
                    var_1_35 = (
   var_1_36
  );
 } else {
                    var_1_35 = (
                     ((
                      ((
     var_1_14
    ) >= (
     var_1_26
    ))
   ) && (
    var_1_36
   ))
  );
 }
                   if ( (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) <= ( ((var_1_29) * (var_1_28))))) {
                    var_1_37 = (
                     ((
    var_1_38
   ) - (
    25
   ))
  );
 } else {
                    var_1_37 = (
   var_1_39
  );
 }
                   if ( ((var_1_27) != ( ((var_1_26) * (var_1_21))))) {
                    if (var_1_36) {
                     var_1_40 = (
                      ((((( ((((( var_1_29 )) > (( var_1_28 ))) ? (( var_1_29 )) : (( var_1_28 )))) )) < (( 128 ))) ? (( ((((( var_1_29 )) > (( var_1_28 ))) ? (( var_1_29 )) : (( var_1_28 )))) )) : (( 128 ))))
   );
  } else {
                     var_1_40 = (
    var_1_28
   );
  }
 }
                   if ( (( (( (((((var_1_32)) < ((var_1_31))) ? ((var_1_32)) : ((var_1_31))))) <= (var_1_1))) && ( ((var_1_33) < (var_1_34))))) {
                    if (var_1_12) {
                     var_1_41 = (
    var_1_38
   );
  } else {
                     var_1_41 = (
    16
   );
  }
 } else {
                    var_1_41 = (
   var_1_38
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 assume_abort_if_not(var_1_3 != 0);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 0);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -1073741823);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= 536870911);
 assume_abort_if_not(var_1_16 <= 1073741823);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 2147483646);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 14);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 64);
 assume_abort_if_not(var_1_20 <= 127);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= -2147483647);
 assume_abort_if_not(var_1_24 <= 2147483646);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 65534);
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -461168.6018427383000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 4611686.018427383000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -230584.3009213691400e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 2305843.009213691400e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -230584.3009213691400e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 2305843.009213691400e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_12) {
  if ( (( (( ((-128) / (var_1_3))) / (var_1_4))) < ( ((var_1_5) * (var_1_6))))) {
   if (var_1_12) {
   } else {
   }
  }
 }
 if ( ((var_1_12) && ( ((var_1_1) < (var_1_8))))) {
  if ( ((var_1_4) <= ( (( ((var_1_10) - (var_1_11))) % ( (((((var_1_3)) > ((-64))) ? ((var_1_3)) : ((-64))))))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_11) != (var_1_4))) {
  if ( (( ((var_1_21) * (var_1_5))) != (5))) {
  }
 }
 if ( ((var_1_11) < (var_1_3))) {
 } else {
 }
 if ( ((var_1_14) <= (var_1_3))) {
  if ( ((var_1_13) || ( ((var_1_10) != ( ((var_1_11) >> (var_1_19))))))) {
  } else {
   if (var_1_12) {
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
                                          ((
       var_1_12
      ) ? (
                                           ((
                                                 ((
                                                 ((
                                                  ((
           -128
          ) / (
           var_1_3
          ))
         ) / (
          var_1_4
         ))
        ) < (
                                                  ((
          var_1_5
         ) * (
          var_1_6
         ))
        ))
       ) ? (
                                            ((
         var_1_12
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
           5.2
          ))
         ))
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
        var_1_12
       ) && (
                                                 ((
         var_1_1
        ) < (
         var_1_8
        ))
       ))
      ) ? (
                                            ((
                                                 ((
         var_1_4
        ) <= (
                                                  ((
                                                   ((
           var_1_10
          ) - (
           var_1_11
          ))
         ) % (
                                                   ((((( var_1_3 )) > (( -64 ))) ? (( var_1_3 )) : (( -64 ))))
         ))
        ))
       ) ? (
                                            ((
         var_1_9
        ) == (
                                             ((unsigned short int) (
          var_1_11
         ))
        ))
       ) : (
                                             ((
         var_1_9
        ) == (
                                              ((unsigned short int) (
          256
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_9
       ) == (
                                             ((unsigned short int) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_11
      ) != (
       var_1_4
      ))
     ) ? (
                                           ((
                                                  ((
                                                   ((
         var_1_21
        ) * (
         var_1_5
        ))
       ) != (
        5
       ))
      ) ? (
                                            ((
        var_1_12
       ) == (
                                             ((unsigned char) (
         var_1_13
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
      var_1_11
     ) < (
      var_1_3
     ))
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((signed long int) (
                                            ((
        var_1_9
       ) + (
        var_1_15
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_14
     ) == (
                                           ((signed long int) (
                                            ((
                                             ((
                                              ((
          var_1_16
         ) - (
          var_1_11
         ))
        ) + (
         var_1_9
        ))
       ) - (
        var_1_17
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_14
    ) <= (
     var_1_3
    ))
   ) ? (
                                         ((
                                                ((
      var_1_13
     ) || (
                                                 ((
       var_1_10
      ) != (
                                                  ((
        var_1_11
       ) >> (
        var_1_19
       ))
      ))
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((unsigned char) (
                                            ((
                                             (((((( 100 ) + ( var_1_20 ))) < 0 ) ? -((( 100 ) + ( var_1_20 ))) : ((( 100 ) + ( var_1_20 )))))
       ) - (
        var_1_19
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_12
     ) ? (
                                           ((
       var_1_18
      ) == (
                                            ((unsigned char) (
        var_1_20
       ))
      ))
     ) : (
                                           ((
       var_1_18
      ) == (
                                            ((unsigned char) (
        32
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((unsigned char) (
      var_1_20
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_21
  ) == (
                                        ((unsigned short int) (
    var_1_20
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((signed short int) (
   var_1_20
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
