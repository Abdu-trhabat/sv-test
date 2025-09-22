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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch54Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -4;
double var_1_2 = 15.8;
double var_1_3 = 0.19999999999999996;
signed short int var_1_4 = 256;
signed short int var_1_5 = 0;
signed short int var_1_6 = 25;
signed short int var_1_8 = 100;
unsigned char var_1_9 = 1;
signed short int var_1_10 = -4;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 1;
unsigned long int var_1_14 = 64;
double var_1_15 = 10.3;
double var_1_16 = 128.6;
unsigned long int var_1_17 = 2600113953;
float var_1_18 = 8.25;
float var_1_19 = 31.5;
float var_1_20 = 2.625;
float var_1_21 = 999999999999999.2;
float var_1_22 = 127.5;
float var_1_23 = 4.8;
float var_1_25 = 1000000.2;
float var_1_29 = 100000000000.65;
float var_1_30 = 25.4;
float var_1_31 = 255.75;
float var_1_32 = 256.625;
unsigned short int var_1_33 = 1;
unsigned short int var_1_34 = 256;
signed long int var_1_35 = 10;
signed short int var_1_36 = 2;
signed char var_1_37 = -16;
signed char var_1_39 = 5;
signed long int var_1_40 = 32;
signed char var_1_43 = -100;
void initially(void) {
}
void step(void) {
                  if ( ((var_1_4) > (-64))) {
                   var_1_23 = (
                    ((((( 49.2f )) > (( 63.125f ))) ? (( 49.2f )) : (( 63.125f ))))
  );
 }
                  if ( ((var_1_1) >= (var_1_14))) {
                   var_1_25 = (
                    ((((( ((((((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))) < 0 ) ? -(((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))) : (((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))))) )) > (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))) ? (( ((((((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))) < 0 ) ? -(((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))) : (((((( 9.999999999999962E13f )) < (( var_1_20 ))) ? (( 9.999999999999962E13f )) : (( var_1_20 ))))))) )) : (( ((((var_1_19) < 0 ) ? -(var_1_19) : (var_1_19))) ))))
  );
 } else {
                   var_1_25 = (
                    ((
                     ((
     var_1_29
    ) + (
     4.1f
    ))
   ) + (
                     ((
     var_1_30
    ) + (
                      ((((( var_1_31 )) > (( var_1_32 ))) ? (( var_1_31 )) : (( var_1_32 ))))
    ))
   ))
  );
 }
                  var_1_33 = (
  var_1_34
 );
                  if ( (( ((var_1_14) ^ ( ((var_1_10) >> (var_1_36))))) < (var_1_34))) {
                   var_1_35 = (
   var_1_14
  );
 }
                   if ( (! (var_1_12))) {
                    var_1_37 = (
                     ((((( var_1_36 )) > (( var_1_39 ))) ? (( var_1_36 )) : (( var_1_39 ))))
  );
 }
                   if ( ((var_1_10) >= (var_1_5))) {
                    if ( ((var_1_22) >= ( ((var_1_16) - (var_1_20))))) {
                     var_1_40 = (
                      ((((((((((((-4) < 0 ) ? -(-4) : (-4)))) < 0 ) ? -(((((-4) < 0 ) ? -(-4) : (-4)))) : (((((-4) < 0 ) ? -(-4) : (-4))))))) < 0 ) ? -(((((((((-4) < 0 ) ? -(-4) : (-4)))) < 0 ) ? -(((((-4) < 0 ) ? -(-4) : (-4)))) : (((((-4) < 0 ) ? -(-4) : (-4))))))) : (((((((((-4) < 0 ) ? -(-4) : (-4)))) < 0 ) ? -(((((-4) < 0 ) ? -(-4) : (-4)))) : (((((-4) < 0 ) ? -(-4) : (-4)))))))))
   );
  }
 } else {
                    if ( ((var_1_22) <= ( ((((((var_1_20) * (var_1_3))) < 0 ) ? -(((var_1_20) * (var_1_3))) : (((var_1_20) * (var_1_3)))))))) {
                     var_1_40 = (
                      ((
                       ((((((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) < 0 ) ? -(((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))) : (((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10))))))
    ) + (
                       ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
    ))
   );
  }
 }
                   if ( (( ((var_1_20) < (var_1_21))) && ( ((var_1_36) != (var_1_8))))) {
                    if ( ((var_1_17) > (var_1_34))) {
                     var_1_43 = (
    8
   );
  } else {
                     var_1_43 = (
    var_1_39
   );
  }
 }
                              if ( ((var_1_2) > (var_1_3))) {
                               var_1_1 = (
                                ((
                                 ((((( (( 2 ) + ( var_1_4 )) )) < (( var_1_5 ))) ? (( (( 2 ) + ( var_1_4 )) )) : (( var_1_5 ))))
   ) - (
    2
   ))
  );
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
                               if ( ((var_1_2) < ( (((((var_1_3)) > (( ((var_1_15) - (var_1_16))))) ? ((var_1_3)) : (( ((var_1_15) - (var_1_16))))))))) {
                                var_1_14 = (
                                 ((
    var_1_17
   ) - (
                                  ((
     var_1_8
    ) + (
     var_1_4
    ))
   ))
  );
 }
 signed short int stepLocal_0 = var_1_1;
                               if ( (( (( ((var_1_8) % (var_1_10))) * ( ((8) + (var_1_14))))) >= (stepLocal_0))) {
                                var_1_9 = (
                                 ((
                                  (! (
     var_1_11
    ))
   ) || (
    var_1_12
   ))
  );
 } else {
                                var_1_9 = (
                                 (! (
    var_1_12
   ))
  );
 }
                              if (var_1_9) {
                               if ( ((var_1_5) == (var_1_4))) {
                                var_1_6 = (
                                 ((((( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) )) < (( (( var_1_4 ) - ( var_1_8 )) ))) ? (( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) )) : (( (( var_1_4 ) - ( var_1_8 )) ))))
   );
  } else {
                                var_1_6 = (
    var_1_8
   );
  }
 } else {
                               var_1_6 = (
   var_1_4
  );
 }
 signed long int stepLocal_1 = (( ((var_1_8) * (var_1_6))) + (var_1_4));
                               if ( ((stepLocal_1) >= ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))) {
                                var_1_13 = (
   var_1_12
  );
 }
                               if ( ((-32) >= ( ((var_1_5) - (var_1_8))))) {
                                if ( ((var_1_10) > (var_1_6))) {
                                 var_1_18 = (
                                  ((
                                   ((
      var_1_19
     ) - (
      var_1_20
     ))
    ) + (
                                   ((
      var_1_21
     ) + (
      var_1_22
     ))
    ))
   );
  } else {
                                 var_1_18 = (
    var_1_20
   );
  }
 } else {
                                var_1_18 = (
   var_1_19
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 0);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 2147483647);
 assume_abort_if_not(var_1_17 <= 4294967294);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -230584.3009213691400e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 2305843.009213691400e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -230584.3009213691400e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 2305843.009213691400e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -230584.3009213691400e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 2305843.009213691400e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -230584.3009213691400e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 2305843.009213691400e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -230584.3009213691400e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 2305843.009213691400e+12F && var_1_32 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 65534);
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= 1);
 assume_abort_if_not(var_1_36 <= 6);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) > (var_1_3))) {
 } else {
 }
 if (var_1_9) {
  if ( ((var_1_5) == (var_1_4))) {
  } else {
  }
 } else {
 }
 if ( (( (( ((var_1_8) % (var_1_10))) * ( ((8) + (var_1_14))))) >= (var_1_1))) {
 } else {
 }
 if ( (( (( ((var_1_8) * (var_1_6))) + (var_1_4))) >= ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))) {
 }
 if ( ((var_1_2) < ( (((((var_1_3)) > (( ((var_1_15) - (var_1_16))))) ? ((var_1_3)) : (( ((var_1_15) - (var_1_16))))))))) {
 }
 if ( ((-32) >= ( ((var_1_5) - (var_1_8))))) {
  if ( ((var_1_10) > (var_1_6))) {
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
       var_1_2
      ) > (
       var_1_3
      ))
     ) ? (
                                         ((
       var_1_1
      ) == (
                                          ((signed short int) (
                                           ((
                                            ((((( (( 2 ) + ( var_1_4 )) )) < (( var_1_5 ))) ? (( (( 2 ) + ( var_1_4 )) )) : (( var_1_5 ))))
        ) - (
         2
        ))
       ))
      ))
     ) : (
                                         ((
       var_1_1
      ) == (
                                          ((signed short int) (
        var_1_4
       ))
      ))
     ))
    ) && (
                                        ((
      var_1_9
     ) ? (
                                         ((
                                               ((
        var_1_5
       ) == (
        var_1_4
       ))
      ) ? (
                                          ((
        var_1_6
       ) == (
                                           ((signed short int) (
                                            ((((( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) )) < (( (( var_1_4 ) - ( var_1_8 )) ))) ? (( ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5))) )) : (( (( var_1_4 ) - ( var_1_8 )) ))))
        ))
       ))
      ) : (
                                          ((
        var_1_6
       ) == (
                                           ((signed short int) (
         var_1_8
        ))
       ))
      ))
     ) : (
                                         ((
       var_1_6
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
                                               ((
        var_1_8
       ) % (
        var_1_10
       ))
      ) * (
                                               ((
        8
       ) + (
        var_1_14
       ))
      ))
     ) >= (
      var_1_1
     ))
    ) ? (
                                         ((
      var_1_9
     ) == (
                                          ((unsigned char) (
                                           ((
                                            (! (
         var_1_11
        ))
       ) || (
        var_1_12
       ))
      ))
     ))
    ) : (
                                         ((
      var_1_9
     ) == (
                                          ((unsigned char) (
                                           (! (
        var_1_12
       ))
      ))
     ))
    ))
   ))
  ) && (
                                       ((
                                              ((
                                               ((
                                                ((
       var_1_8
      ) * (
       var_1_6
      ))
     ) + (
      var_1_4
     ))
    ) >= (
                                               ((((( var_1_6 )) < (( var_1_5 ))) ? (( var_1_6 )) : (( var_1_5 ))))
    ))
   ) ? (
                                        ((
     var_1_13
    ) == (
                                         ((unsigned char) (
      var_1_12
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
   ) < (
                                              ((((( var_1_3 )) > (( (( var_1_15 ) - ( var_1_16 )) ))) ? (( var_1_3 )) : (( (( var_1_15 ) - ( var_1_16 )) ))))
   ))
  ) ? (
                                       ((
    var_1_14
   ) == (
                                        ((unsigned long int) (
                                         ((
      var_1_17
     ) - (
                                          ((
       var_1_8
      ) + (
       var_1_4
      ))
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
   -32
  ) >= (
                                              ((
    var_1_5
   ) - (
    var_1_8
   ))
  ))
 ) ? (
                                       ((
                                              ((
    var_1_10
   ) > (
    var_1_6
   ))
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((float) (
                                          ((
                                           ((
       var_1_19
      ) - (
       var_1_20
      ))
     ) + (
                                           ((
       var_1_21
      ) + (
       var_1_22
      ))
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((float) (
     var_1_20
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_18
  ) == (
                                        ((float) (
    var_1_19
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
