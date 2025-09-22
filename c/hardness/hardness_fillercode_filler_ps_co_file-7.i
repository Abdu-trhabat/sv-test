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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch7Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
float var_1_2 = 200.875;
float var_1_3 = 100.25;
float var_1_4 = 99999999.34;
unsigned short int var_1_5 = 10;
unsigned short int var_1_6 = 8;
unsigned long int var_1_7 = 25;
unsigned char var_1_8 = 0;
signed long int var_1_9 = -16;
unsigned short int var_1_10 = 25;
unsigned short int var_1_11 = 10000;
signed short int var_1_12 = -32;
signed char var_1_13 = 4;
signed char var_1_14 = 25;
signed short int var_1_15 = -16;
signed short int var_1_16 = 100;
signed short int var_1_17 = 8;
float var_1_18 = 5.8;
float var_1_19 = 0.19999999999999996;
float var_1_20 = 1.5;
float var_1_21 = 10000000.5;
float var_1_22 = 4.5;
float var_1_23 = 4.25;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 100;
unsigned long int var_1_27 = 10;
signed long int var_1_28 = 1238418420;
signed long int var_1_29 = 2;
double var_1_30 = 499.1;
double var_1_31 = 1000000.625;
double var_1_32 = 63.5;
signed char var_1_33 = -64;
unsigned long int var_1_34 = 200;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 25;
unsigned char var_1_37 = 1;
unsigned short int var_1_38 = 10000;
unsigned short int var_1_39 = 2;
unsigned short int var_1_40 = 8;
unsigned short int var_1_41 = 5;
signed long int var_1_42 = -1;
double var_1_43 = 127.4;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
signed char var_1_46 = -25;
void initially(void) {
}
void step(void) {
                  if ( (( ((var_1_9) >> (var_1_27))) > ( (((((var_1_29)) > ((var_1_28))) ? ((var_1_29)) : ((var_1_28))))))) {
                   if ( ((var_1_29) >= (5))) {
                    var_1_25 = (
                     ((((50) < 0 ) ? -(50) : (50)))
   );
  }
 } else {
                   if ( (( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) >= ( ((var_1_31) - (var_1_32))))) {
                    var_1_25 = (
                     ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
   );
  }
 }
                  if ( (! ( (( (((((var_1_1)) > ((5))) ? ((var_1_1)) : ((5))))) != (var_1_27))))) {
                   var_1_33 = (
                    ((((((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) < 0 ) ? -(((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) : (((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27))))))
  );
 }
                   if ( (( ((var_1_1) ^ (var_1_9))) > (var_1_24))) {
                    if ( ((var_1_27) >= (var_1_28))) {
                     var_1_34 = (
    var_1_27
   );
  }
 }
                   var_1_35 = (
  var_1_27
 );
                   if ( (( ((((var_1_9) < 0 ) ? -(var_1_9) : (var_1_9)))) > ( ((var_1_1) / (var_1_28))))) {
                    if ( (! (var_1_37))) {
                     var_1_36 = (
                      ((
     var_1_27
    ) + (
                       ((
                        ((
       var_1_38
      ) - (
       var_1_39
      ))
     ) + (
                        ((
       var_1_40
      ) + (
       var_1_41
      ))
     ))
    ))
   );
  }
 } else {
                    if (var_1_37) {
                     var_1_36 = (
    var_1_40
   );
  } else {
                     var_1_36 = (
    var_1_38
   );
  }
 }
                   if ( (( (- (var_1_32))) == ( ((var_1_31) - (var_1_43))))) {
                    var_1_42 = (
                     ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))
  );
 }
                   var_1_44 = (
  var_1_45
 );
                   var_1_46 = (
  var_1_27
 );
                              var_1_9 = (
                               ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
 );
 signed long int stepLocal_1 = ((56016) - (var_1_11));
 signed long int stepLocal_0 = 10;
                               if ( ((var_1_6) < (stepLocal_0))) {
                                if ( ((var_1_5) < (stepLocal_1))) {
                                 var_1_10 = (
    var_1_5
   );
  }
 }
                               var_1_15 = (
                                ((
   var_1_14
  ) - (
                                 ((((( (( var_1_16 ) + ( var_1_17 )) )) > (( 4 ))) ? (( (( var_1_16 ) + ( var_1_17 )) )) : (( 4 ))))
  ))
 );
                               if ( ((var_1_4) > (var_1_2))) {
                                var_1_18 = (
                                 ((
                                  (((((( var_1_19 ) + ( var_1_20 ))) < 0 ) ? -((( var_1_19 ) + ( var_1_20 ))) : ((( var_1_19 ) + ( var_1_20 )))))
   ) - (
    var_1_21
   ))
  );
 } else {
                                if ( (! ( (( ((var_1_17) - (var_1_11))) < (128))))) {
                                 var_1_18 = (
                                  ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
   );
  } else {
                                 var_1_18 = (
                                  ((((( ((((( 9.75f )) > (( var_1_19 ))) ? (( 9.75f )) : (( var_1_19 )))) )) < (( ((((( (( var_1_21 ) - ( var_1_22 )) )) > (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) ))) ? (( (( var_1_21 ) - ( var_1_22 )) )) : (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) )))) ))) ? (( ((((( 9.75f )) > (( var_1_19 ))) ? (( 9.75f )) : (( var_1_19 )))) )) : (( ((((( (( var_1_21 ) - ( var_1_22 )) )) > (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) ))) ? (( (( var_1_21 ) - ( var_1_22 )) )) : (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) )))) ))))
   );
  }
 }
                               var_1_24 = (
  16
 );
                              if ( ((var_1_18) <= ( ((var_1_3) - (var_1_4))))) {
                               var_1_1 = (
   var_1_5
  );
 } else {
                               var_1_1 = (
                                ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
  );
 }
                              if (var_1_8) {
                               if ( ((var_1_5) < (16))) {
                                var_1_7 = (
                                 ((
     var_1_6
    ) + (
     var_1_10
    ))
   );
  }
 }
                               if ( (( ((var_1_13) - (var_1_14))) > ( ((var_1_7) + (var_1_11))))) {
                                if ( (! (var_1_8))) {
                                 var_1_12 = (
    var_1_13
   );
  }
 } else {
                                var_1_12 = (
   var_1_14
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65534);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 65534);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 127);
 var_1_14 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 127);
 var_1_16 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 16383);
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 16383);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= -461168.6018427383000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 15);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= 1073741823);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1073741823);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= 0.0F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_38 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_38 >= 8192);
 assume_abort_if_not(var_1_38 <= 16384);
 var_1_39 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 8192);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 8192);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 8191);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_18) <= ( ((var_1_3) - (var_1_4))))) {
 } else {
 }
 if (var_1_8) {
  if ( ((var_1_5) < (16))) {
  }
 }
 if ( ((var_1_6) < (10))) {
  if ( ((var_1_5) < ( ((56016) - (var_1_11))))) {
  }
 }
 if ( (( ((var_1_13) - (var_1_14))) > ( ((var_1_7) + (var_1_11))))) {
  if ( (! (var_1_8))) {
  }
 } else {
 }
 if ( ((var_1_4) > (var_1_2))) {
 } else {
  if ( (! ( (( ((var_1_17) - (var_1_11))) < (128))))) {
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
         var_1_18
        ) <= (
                                                ((
          var_1_3
         ) - (
          var_1_4
         ))
        ))
       ) ? (
                                           ((
         var_1_1
        ) == (
                                            ((unsigned short int) (
          var_1_5
         ))
        ))
       ) : (
                                           ((
         var_1_1
        ) == (
                                            ((unsigned short int) (
                                             ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
         ))
        ))
       ))
      ) && (
                                          ((
        var_1_8
       ) ? (
                                           ((
                                                 ((
          var_1_5
         ) < (
          16
         ))
        ) ? (
                                            ((
          var_1_7
         ) == (
                                             ((unsigned long int) (
                                              ((
            var_1_6
           ) + (
            var_1_10
           ))
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
       var_1_9
      ) == (
                                          ((signed long int) (
                                           ((((( var_1_5 )) > (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
       ))
      ))
     ))
    ) && (
                                         ((
                                              ((
       var_1_6
      ) < (
       10
      ))
     ) ? (
                                          ((
                                               ((
        var_1_5
       ) < (
                                                ((
         56016
        ) - (
         var_1_11
        ))
       ))
      ) ? (
                                           ((
        var_1_10
       ) == (
                                            ((unsigned short int) (
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
                                               ((
                                                ((
       var_1_13
      ) - (
       var_1_14
      ))
     ) > (
                                                ((
       var_1_7
      ) + (
       var_1_11
      ))
     ))
    ) ? (
                                         ((
                                                (! (
       var_1_8
      ))
     ) ? (
                                          ((
       var_1_12
      ) == (
                                           ((signed short int) (
        var_1_13
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                         ((
      var_1_12
     ) == (
                                          ((signed short int) (
       var_1_14
      ))
     ))
    ))
   ))
  ) && (
                                       ((
    var_1_15
   ) == (
                                        ((signed short int) (
                                          ((
      var_1_14
     ) - (
                                           ((((( (( var_1_16 ) + ( var_1_17 )) )) > (( 4 ))) ? (( (( var_1_16 ) + ( var_1_17 )) )) : (( 4 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_4
   ) > (
    var_1_2
   ))
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((float) (
                                          ((
                                           (((((( var_1_19 ) + ( var_1_20 ))) < 0 ) ? -((( var_1_19 ) + ( var_1_20 ))) : ((( var_1_19 ) + ( var_1_20 )))))
     ) - (
      var_1_21
     ))
    ))
   ))
  ) : (
                                        ((
                                               (! (
                                                ((
                                                 ((
       var_1_17
      ) - (
       var_1_11
      ))
     ) < (
      128
     ))
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((float) (
                                           ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
     ))
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((float) (
                                           ((((( ((((( 9.75f )) > (( var_1_19 ))) ? (( 9.75f )) : (( var_1_19 )))) )) < (( ((((( (( var_1_21 ) - ( var_1_22 )) )) > (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) ))) ? (( (( var_1_21 ) - ( var_1_22 )) )) : (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) )))) ))) ? (( ((((( 9.75f )) > (( var_1_19 ))) ? (( 9.75f )) : (( var_1_19 )))) )) : (( ((((( (( var_1_21 ) - ( var_1_22 )) )) > (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) ))) ? (( (( var_1_21 ) - ( var_1_22 )) )) : (( ((((( var_1_20 )) > (( var_1_23 ))) ? (( var_1_20 )) : (( var_1_23 )))) )))) ))))
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((signed short int) (
   16
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
