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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch60Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 32;
float var_1_4 = 7.8;
signed short int var_1_6 = 16;
signed short int var_1_7 = 256;
float var_1_8 = 256.6;
unsigned char var_1_9 = 50;
unsigned char var_1_10 = 5;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 4;
float var_1_15 = 31.05;
float var_1_16 = 31.25;
float var_1_17 = 9.3;
float var_1_18 = 49.5;
float var_1_19 = 7.4;
double var_1_20 = 7.5;
double var_1_21 = 16.5;
double var_1_22 = 127.75;
double var_1_23 = 15.2;
float var_1_24 = 8.71;
unsigned char var_1_25 = 0;
signed long int var_1_26 = 4;
signed long int var_1_27 = 32;
signed long int var_1_28 = 256;
unsigned short int var_1_29 = 5;
signed long int var_1_30 = -128;
unsigned char var_1_32 = 0;
signed long int var_1_33 = -32;
signed long int var_1_34 = 128;
signed long int var_1_35 = 4;
signed long int var_1_36 = 50;
float var_1_37 = 31.6;
signed short int var_1_40 = -2;
float var_1_42 = 7.2;
double var_1_43 = 25.25;
signed char var_1_44 = -100;
signed char var_1_45 = 50;
unsigned char last_1_var_1_11 = 1;
float last_1_var_1_24 = 8.71;
void initially(void) {
}
void step(void) {
                  if ( ((var_1_26) <= ( ((var_1_27) + (var_1_28))))) {
                   if ( ((var_1_29) < (var_1_26))) {
                    var_1_25 = (
                     ((
                      ((
      var_1_26
     ) <= (
                       (~ (
       var_1_30
      ))
     ))
    ) || (
     var_1_12
    ))
   );
  } else {
                    var_1_25 = (
    var_1_32
   );
  }
 }
                   if ( ((var_1_29) != (var_1_30))) {
                    var_1_33 = (
                     ((
                      ((
                       ((((( var_1_29 )) > (( var_1_34 ))) ? (( var_1_29 )) : (( var_1_34 ))))
    ) + (
     var_1_35
    ))
   ) - (
    var_1_36
   ))
  );
 }
                   if ( ((var_1_32) && (var_1_12))) {
                    var_1_37 = (
                     ((
                      ((
     var_1_18
    ) + (
     var_1_21
    ))
   ) - (
    2.75f
   ))
  );
 } else {
                    var_1_37 = (
                     ((
    var_1_21
   ) + (
    var_1_18
   ))
  );
 }
                   var_1_40 = (
  var_1_6
 );
                   if (var_1_12) {
                    if ( ((var_1_26) > ( ((((var_1_36) < 0 ) ? -(var_1_36) : (var_1_36)))))) {
                     var_1_42 = (
                      ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))
   );
  } else {
                     if ( (( (~ (var_1_27))) >= (var_1_36))) {
                      var_1_42 = (
                       ((
                        ((
                         ((((( var_1_22 )) < (( var_1_21 ))) ? (( var_1_22 )) : (( var_1_21 ))))
      ) + (
       1.75f
      ))
     ) - (
      25.5f
     ))
    );
   }
  }
 } else {
                    var_1_42 = (
   var_1_22
  );
 }
                   if ( ((var_1_28) >= (var_1_35))) {
                    var_1_43 = (
                     ((((( 9.99999999999996E13 )) > (( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) ))) ? (( 9.99999999999996E13 )) : (( ((((var_1_23) < 0 ) ? -(var_1_23) : (var_1_23))) ))))
  );
 } else {
                    if ( (( (( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) - (var_1_45))) <= (var_1_30))) {
                     if (var_1_12) {
                      var_1_43 = (
     var_1_18
    );
   } else {
                      var_1_43 = (
     var_1_23
    );
   }
  } else {
                     var_1_43 = (
    var_1_23
   );
  }
 }
                                         if ( (( (- (last_1_var_1_24))) <= (var_1_4))) {
                                          if ( (( ((last_1_var_1_24) <= (var_1_4))) || (last_1_var_1_11))) {
                                            var_1_8 = (
    3.3f
   );
  }
 }
                                var_1_11 = (
  var_1_12
 );
 signed short int stepLocal_2 = var_1_6;
 unsigned char stepLocal_1 = var_1_11;
                                if ( ((var_1_7) < (stepLocal_2))) {
                                 if (var_1_11) {
                                  var_1_13 = (
                                   ((((( var_1_10 )) > (( var_1_14 ))) ? (( var_1_10 )) : (( var_1_14 ))))
   );
  } else {
                                  if ( ((var_1_12) || (stepLocal_1))) {
                                   var_1_13 = (
     var_1_14
    );
   }
  }
 }
                                if (var_1_11) {
                                 var_1_15 = (
                                  ((
    var_1_16
   ) + (
                                   ((
     var_1_17
    ) + (
     32.5f
    ))
   ))
  );
 } else {
                                 var_1_15 = (
                                  ((
                                   ((
     5.064290308105643E18f
    ) - (
                                    ((
      4.4f
     ) + (
      var_1_18
     ))
    ))
   ) - (
    var_1_19
   ))
  );
 }
                                var_1_20 = (
                                 ((
   var_1_18
  ) - (
                                  ((
                                   ((((( var_1_21 )) < (( var_1_22 ))) ? (( var_1_21 )) : (( var_1_22 ))))
   ) + (
    var_1_23
   ))
  ))
 );
                                if ( ((var_1_8) == (var_1_19))) {
                                 if ( ((var_1_13) < (var_1_6))) {
                                  var_1_24 = (
    var_1_23
   );
  }
 }
                              if (var_1_11) {
                               if ( (( ((var_1_8) / (var_1_4))) <= (var_1_24))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) - (
     var_1_7
    ))
   );
  } else {
                                var_1_1 = (
    var_1_6
   );
  }
 } else {
                               var_1_1 = (
   var_1_7
  );
 }
 signed long int stepLocal_0 = (((((var_1_7)) < ((var_1_1))) ? ((var_1_7)) : ((var_1_1))));
                                if ( ((var_1_8) < ( ((var_1_20) + (var_1_15))))) {
                                 if ( ((stepLocal_0) > ( ((var_1_6) * (1))))) {
                                  var_1_9 = (
    var_1_10
   );
  } else {
                                  var_1_9 = (
    64
   );
  }
 } else {
                                 var_1_9 = (
   var_1_10
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= -1);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -230584.3009213691400e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 2305843.009213691400e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 2305843.009213691400e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 4611686.018427383000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 4611686.018427383000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65535);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 0);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1073741823);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1073741823);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -127);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_11 = var_1_11;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if (var_1_11) {
  if ( (( ((var_1_8) / (var_1_4))) <= (var_1_24))) {
  } else {
  }
 } else {
 }
 if ( (( (- (last_1_var_1_24))) <= (var_1_4))) {
  if ( (( ((last_1_var_1_24) <= (var_1_4))) || (last_1_var_1_11))) {
  }
 }
 if ( ((var_1_8) < ( ((var_1_20) + (var_1_15))))) {
  if ( (( (((((var_1_7)) < ((var_1_1))) ? ((var_1_7)) : ((var_1_1))))) > ( ((var_1_6) * (1))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_7) < (var_1_6))) {
  if (var_1_11) {
  } else {
   if ( ((var_1_12) || (var_1_11))) {
   }
  }
 }
 if (var_1_11) {
 } else {
 }
 if ( ((var_1_8) == (var_1_19))) {
  if ( ((var_1_13) < (var_1_6))) {
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
        var_1_11
       ) ? (
                                            ((
                                                 ((
                                                  ((
           var_1_8
          ) / (
           var_1_4
          ))
         ) <= (
          var_1_24
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
                                               ((
            var_1_6
           ) - (
            var_1_7
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
           var_1_6
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
          var_1_7
         ))
        ))
       ))
      ) && (
                                                      ((
                                                            ((
                                                             (- (
          last_1_var_1_24
         ))
        ) <= (
         var_1_4
        ))
       ) ? (
                                                       ((
                                                             ((
                                                              ((
           last_1_var_1_24
          ) <= (
           var_1_4
          ))
         ) || (
          last_1_var_1_11
         ))
        ) ? (
                                                        ((
          var_1_8
         ) == (
                                                         ((float) (
           3.3f
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
        var_1_8
       ) < (
                                                 ((
         var_1_20
        ) + (
         var_1_15
        ))
       ))
      ) ? (
                                            ((
                                                   ((
                                                    ((((( var_1_7 )) < (( var_1_1 ))) ? (( var_1_7 )) : (( var_1_1 ))))
        ) > (
                                                    ((
          var_1_6
         ) * (
          1
         ))
        ))
       ) ? (
                                             ((
         var_1_9
        ) == (
                                              ((unsigned char) (
          var_1_10
         ))
        ))
       ) : (
                                             ((
         var_1_9
        ) == (
                                              ((unsigned char) (
          64
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_9
       ) == (
                                             ((unsigned char) (
         var_1_10
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_11
     ) == (
                                           ((unsigned char) (
       var_1_12
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_7
     ) < (
      var_1_6
     ))
    ) ? (
                                          ((
      var_1_11
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((unsigned char) (
                                             ((((( var_1_10 )) > (( var_1_14 ))) ? (( var_1_10 )) : (( var_1_14 ))))
       ))
      ))
     ) : (
                                           ((
                                                  ((
        var_1_12
       ) || (
        var_1_11
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_14
        ))
       ))
      ) : (
       1
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_11
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((float) (
                                           ((
       var_1_16
      ) + (
                                            ((
        var_1_17
       ) + (
        32.5f
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((float) (
                                           ((
                                            ((
        5.064290308105643E18f
       ) - (
                                             ((
         4.4f
        ) + (
         var_1_18
        ))
       ))
      ) - (
       var_1_19
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_20
  ) == (
                                        ((double) (
                                         ((
     var_1_18
    ) - (
                                          ((
                                           ((((( var_1_21 )) < (( var_1_22 ))) ? (( var_1_21 )) : (( var_1_22 ))))
     ) + (
      var_1_23
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_8
  ) == (
   var_1_19
  ))
 ) ? (
                                       ((
                                              ((
    var_1_13
   ) < (
    var_1_6
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((float) (
     var_1_23
    ))
   ))
  ) : (
   1
  ))
 ) : (
  1
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
