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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch2Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 3.95;
unsigned char var_1_2 = 50;
unsigned char var_1_3 = 10;
float var_1_4 = 9999999.8;
float var_1_5 = 8.6;
unsigned long int var_1_6 = 10000;
double var_1_8 = 64.5;
float var_1_10 = 255.25;
float var_1_11 = 7.5;
float var_1_12 = 0.0;
float var_1_13 = 64.8;
double var_1_14 = 127.75;
signed char var_1_15 = 8;
signed char var_1_16 = 32;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned char var_1_19 = 0;
signed short int var_1_20 = -32;
float var_1_21 = 256.5;
unsigned char var_1_22 = 2;
unsigned char var_1_23 = 1;
float var_1_24 = 1.375;
float var_1_25 = 10.25;
signed char var_1_26 = -64;
signed long int var_1_27 = -1;
signed long int var_1_28 = 5;
signed char var_1_29 = -10;
unsigned long int var_1_30 = 8;
double var_1_31 = 499.75;
double var_1_33 = 25.1;
double var_1_34 = 0.0;
double var_1_35 = 3.15;
double var_1_36 = 16.5;
unsigned char var_1_37 = 8;
unsigned char var_1_38 = 1;
float var_1_39 = 255.8;
signed long int var_1_40 = -1;
signed short int var_1_41 = 28397;
unsigned long int last_1_var_1_6 = 10000;
float last_1_var_1_10 = 255.25;
double last_1_var_1_14 = 127.75;
unsigned char last_1_var_1_17 = 0;
signed short int last_1_var_1_20 = -32;
void initially(void) {
}
void step(void) {
                   if ( ((var_1_6) >= (var_1_20))) {
                    var_1_21 = (
                     ((
    var_1_24
   ) + (
    var_1_25
   ))
  );
 }
                   if ( (( (( ((var_1_24) + (127.75f))) * (var_1_1))) < (var_1_25))) {
                    if ( (( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))) <= ( (( (((((var_1_20)) < ((var_1_27))) ? ((var_1_20)) : ((var_1_27))))) & (var_1_28))))) {
                     var_1_26 = (
    var_1_29
   );
  }
 }
                   if ( ((var_1_29) < ( (~ (var_1_23))))) {
                    if ( ((var_1_26) < (var_1_22))) {
                     var_1_30 = (
    var_1_22
   );
  }
 }
                   if ( ((var_1_25) == (var_1_14))) {
                    if ( ((var_1_6) >= (var_1_29))) {
                     if ( (! (var_1_17))) {
                      var_1_31 = (
                       ((
      var_1_33
     ) - (
                        ((((( var_1_36 )) > (( var_1_35 ))) ? (( var_1_36 )) : (( var_1_35 ))))
     ))
    );
   }
  }
 } else {
                    var_1_31 = (
                     (((((((((( var_1_34 ) - ( 9.5 ))) < 0 ) ? -((( var_1_34 ) - ( 9.5 ))) : ((( var_1_34 ) - ( 9.5 )))))) < 0 ) ? -((((((( var_1_34 ) - ( 9.5 ))) < 0 ) ? -((( var_1_34 ) - ( 9.5 ))) : ((( var_1_34 ) - ( 9.5 )))))) : ((((((( var_1_34 ) - ( 9.5 ))) < 0 ) ? -((( var_1_34 ) - ( 9.5 ))) : ((( var_1_34 ) - ( 9.5 ))))))))
  );
 }
                   if ( (! ( ((var_1_25) <= (var_1_10))))) {
                    var_1_37 = (
   var_1_38
  );
 }
                   if ( ((128) != ( (~ (var_1_6))))) {
                    var_1_39 = (
   var_1_33
  );
 }
                   if ( ((var_1_36) != (var_1_33))) {
                    if ( (( (( ((var_1_41) - (var_1_38))) - ( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) <= ( ((var_1_28) * (var_1_20))))) {
                     var_1_40 = (
    var_1_38
   );
  }
 } else {
                    var_1_40 = (
   var_1_29
  );
 }
 unsigned char stepLocal_0 = last_1_var_1_17;
                                           if (last_1_var_1_17) {
                                            if ( (( (((((last_1_var_1_14)) > (( (((((var_1_5)) > ((199.78))) ? ((var_1_5)) : ((199.78))))))) ? ((last_1_var_1_14)) : (( (((((var_1_5)) > ((199.78))) ? ((var_1_5)) : ((199.78))))))))) != ( ((var_1_4) - (var_1_8))))) {
                                            if ( (( ((var_1_2) != (var_1_3))) || (stepLocal_0))) {
                                             var_1_6 = (
     var_1_2
    );
   } else {
                                             var_1_6 = (
     5u
    );
   }
  } else {
                                             var_1_6 = (
    var_1_2
   );
  }
 } else {
                                            var_1_6 = (
   var_1_2
  );
 }
                                if ( (( ((var_1_15) - ( (((((0)) < ((var_1_16))) ? ((0)) : ((var_1_16))))))) > (var_1_6))) {
                                 var_1_14 = (
   var_1_12
  );
 }
                                            if ( ((last_1_var_1_6) <= ( ((var_1_16) * (last_1_var_1_20))))) {
                                             if ( (( ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
                                              var_1_17 = (
    var_1_18
   );
  } else {
                                              var_1_17 = (
    var_1_19
   );
  }
 } else {
                                             var_1_17 = (
   var_1_19
  );
 }
 unsigned char stepLocal_1 = ((var_1_19) && (var_1_17));
                                if ( ((-0.25) < ( ((256.4) - (var_1_5))))) {
                                 if ( ((var_1_17) && (stepLocal_1))) {
                                  var_1_20 = (
    var_1_15
   );
  }
 } else {
                                 var_1_20 = (
   1
  );
 }
                               if ( ((var_1_6) <= (var_1_20))) {
                                if ( ((var_1_20) > (var_1_6))) {
                                 var_1_1 = (
                                  ((
     var_1_4
    ) - (
     var_1_5
    ))
   );
  } else {
                                 var_1_1 = (
    var_1_5
   );
  }
 } else {
                                var_1_1 = (
   var_1_4
  );
 }
                                if ( (( ((var_1_5) / (var_1_11))) >= ( ((var_1_8) - (var_1_4))))) {
                                 var_1_10 = (
                                  ((((( (( var_1_5 ) - ( (( var_1_12 ) - ( var_1_13 )) )) )) < (( var_1_4 ))) ? (( (( var_1_5 ) - ( (( var_1_12 ) - ( var_1_13 )) )) )) : (( var_1_4 ))))
  );
 } else {
                                 var_1_10 = (
   4.2f
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 255);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 255);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854776000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 assume_abort_if_not(var_1_11 != 0.0F);
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 4611686.018427383000e+12F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_15 >= -1);
 assume_abort_if_not(var_1_15 <= 127);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 0);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 0);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 255);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 255);
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= -127);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= 6917529.027641074000e+12F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= 0.0F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= 0.0F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= 16383);
 assume_abort_if_not(var_1_41 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_14 = var_1_14;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( ((var_1_6) <= (var_1_20))) {
  if ( ((var_1_20) > (var_1_6))) {
  } else {
  }
 } else {
 }
 if (last_1_var_1_17) {
  if ( (( (((((last_1_var_1_14)) > (( (((((var_1_5)) > ((199.78))) ? ((var_1_5)) : ((199.78))))))) ? ((last_1_var_1_14)) : (( (((((var_1_5)) > ((199.78))) ? ((var_1_5)) : ((199.78))))))))) != ( ((var_1_4) - (var_1_8))))) {
   if ( (( ((var_1_2) != (var_1_3))) || (last_1_var_1_17))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (( ((var_1_5) / (var_1_11))) >= ( ((var_1_8) - (var_1_4))))) {
 } else {
 }
 if ( (( ((var_1_15) - ( (((((0)) < ((var_1_16))) ? ((0)) : ((var_1_16))))))) > (var_1_6))) {
 }
 if ( ((last_1_var_1_6) <= ( ((var_1_16) * (last_1_var_1_20))))) {
  if ( (( ((var_1_5) + (last_1_var_1_10))) <= (127.025f))) {
  } else {
  }
 } else {
 }
 if ( ((-0.25) < ( ((256.4) - (var_1_5))))) {
  if ( ((var_1_17) && ( ((var_1_19) && (var_1_17))))) {
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
       var_1_6
      ) <= (
       var_1_20
      ))
     ) ? (
                                          ((
                                                ((
        var_1_20
       ) > (
        var_1_6
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
                                             ((
          var_1_4
         ) - (
          var_1_5
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
         var_1_5
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_1
      ) == (
                                           ((float) (
        var_1_4
       ))
      ))
     ))
    ) && (
                                                       ((
      last_1_var_1_17
     ) ? (
                                                        ((
                                                            ((
                                                             ((((( last_1_var_1_14 )) > (( ((((( var_1_5 )) > (( 199.78 ))) ? (( var_1_5 )) : (( 199.78 )))) ))) ? (( last_1_var_1_14 )) : (( ((((( var_1_5 )) > (( 199.78 ))) ? (( var_1_5 )) : (( 199.78 )))) ))))
       ) != (
                                                             ((
         var_1_4
        ) - (
         var_1_8
        ))
       ))
      ) ? (
                                                        ((
                                                             ((
                                                              ((
          var_1_2
         ) != (
          var_1_3
         ))
        ) || (
         last_1_var_1_17
        ))
       ) ? (
                                                         ((
         var_1_6
        ) == (
                                                          ((unsigned long int) (
          var_1_2
         ))
        ))
       ) : (
                                                         ((
         var_1_6
        ) == (
                                                          ((unsigned long int) (
          5u
         ))
        ))
       ))
      ) : (
                                                         ((
        var_1_6
       ) == (
                                                          ((unsigned long int) (
         var_1_2
        ))
       ))
      ))
     ) : (
                                                        ((
       var_1_6
      ) == (
                                                         ((unsigned long int) (
        var_1_2
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_5
      ) / (
       var_1_11
      ))
     ) >= (
                                                 ((
       var_1_8
      ) - (
       var_1_4
      ))
     ))
    ) ? (
                                          ((
      var_1_10
     ) == (
                                           ((float) (
                                            ((((( (( var_1_5 ) - ( (( var_1_12 ) - ( var_1_13 )) )) )) < (( var_1_4 ))) ? (( (( var_1_5 ) - ( (( var_1_12 ) - ( var_1_13 )) )) )) : (( var_1_4 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_10
     ) == (
                                           ((float) (
       4.2f
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_15
     ) - (
                                                 ((((( 0 )) < (( var_1_16 ))) ? (( 0 )) : (( var_1_16 ))))
     ))
    ) > (
     var_1_6
    ))
   ) ? (
                                         ((
     var_1_14
    ) == (
                                          ((double) (
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
    last_1_var_1_6
   ) <= (
                                                           ((
     var_1_16
    ) * (
     last_1_var_1_20
    ))
   ))
  ) ? (
                                                    ((
                                                           ((
                                                            ((
      var_1_5
     ) + (
      last_1_var_1_10
     ))
    ) <= (
     127.025f
    ))
   ) ? (
                                                     ((
     var_1_17
    ) == (
                                                      ((unsigned char) (
      var_1_18
     ))
    ))
   ) : (
                                                     ((
     var_1_17
    ) == (
                                                      ((unsigned char) (
      var_1_19
     ))
    ))
   ))
  ) : (
                                                    ((
    var_1_17
   ) == (
                                                     ((unsigned char) (
     var_1_19
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   -0.25
  ) < (
                                              ((
    256.4
   ) - (
    var_1_5
   ))
  ))
 ) ? (
                                       ((
                                              ((
    var_1_17
   ) && (
                                               ((
     var_1_19
    ) && (
     var_1_17
    ))
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((signed short int) (
     var_1_15
    ))
   ))
  ) : (
   1
  ))
 ) : (
                                       ((
   var_1_20
  ) == (
                                        ((signed short int) (
    1
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
