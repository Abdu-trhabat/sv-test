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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch132Filler_PS_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = 8;
signed long int var_1_4 = 128;
unsigned char var_1_5 = 0;
unsigned char var_1_7 = 100;
unsigned char var_1_8 = 2;
unsigned char var_1_9 = 1;
unsigned char var_1_10 = 0;
unsigned char var_1_11 = 128;
unsigned char var_1_12 = 4;
unsigned char var_1_13 = 32;
unsigned char var_1_14 = 1;
signed long int var_1_15 = 0;
signed char var_1_16 = 25;
signed char var_1_18 = 8;
signed char var_1_19 = -8;
float var_1_20 = 0.75;
float var_1_21 = 2.25;
float var_1_22 = 3.8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_27 = 32;
float var_1_29 = 0.0;
float var_1_30 = 99999999.6;
signed char var_1_32 = -10;
float var_1_34 = 1000000000000.5;
float var_1_35 = 1.4;
float var_1_36 = 10.625;
signed short int var_1_37 = 4;
signed long int var_1_39 = -50;
signed short int var_1_40 = 5;
signed long int var_1_41 = 8;
unsigned char var_1_43 = 1;
unsigned char var_1_44 = 0;
unsigned char last_1_var_1_5 = 0;
unsigned char last_1_var_1_9 = 1;
unsigned char last_1_var_1_10 = 0;
unsigned char last_1_var_1_13 = 32;
void initially(void) {
}
void step(void) {
                   if ( ((var_1_23) && (var_1_24))) {
                    if ( ((var_1_15) <= ( ((var_1_1) % (var_1_27))))) {
                     var_1_22 = (
                      ((
                       ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
    ) - (
                       ((
      var_1_29
     ) - (
      var_1_30
     ))
    ))
   );
  } else {
                     var_1_22 = (
                      ((((( ((((( ((((( var_1_30 )) > (( var_1_21 ))) ? (( var_1_30 )) : (( var_1_21 )))) )) > (( (( var_1_29 ) - ( 0.5f )) ))) ? (( ((((( var_1_30 )) > (( var_1_21 ))) ? (( var_1_30 )) : (( var_1_21 )))) )) : (( (( var_1_29 ) - ( 0.5f )) )))) )) < (( var_1_21 ))) ? (( ((((( ((((( var_1_30 )) > (( var_1_21 ))) ? (( var_1_30 )) : (( var_1_21 )))) )) > (( (( var_1_29 ) - ( 0.5f )) ))) ? (( ((((( var_1_30 )) > (( var_1_21 ))) ? (( var_1_30 )) : (( var_1_21 )))) )) : (( (( var_1_29 ) - ( 0.5f )) )))) )) : (( var_1_21 ))))
   );
  }
 }
                   var_1_32 = (
  var_1_19
 );
                   if (var_1_9) {
                    if ( ((var_1_18) < (var_1_7))) {
                     var_1_34 = (
                      ((
     var_1_30
    ) + (
                       ((
      var_1_35
     ) + (
      var_1_36
     ))
    ))
   );
  } else {
                     var_1_34 = (
    var_1_35
   );
  }
 }
                   if (var_1_14) {
                    if ( ((var_1_27) < (var_1_15))) {
                     if ( (! ( ((var_1_27) <= (var_1_1))))) {
                      if ( ((var_1_1) <= (var_1_15))) {
                       var_1_37 = (
      var_1_19
     );
    }
   } else {
                      var_1_37 = (
     var_1_19
    );
   }
  }
 }
                   if ( (( (~ ( ((var_1_40) >> (var_1_41))))) <= (var_1_4))) {
                    if ( (( ((63.5f) * (var_1_21))) < ( ((var_1_30) - ( ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))))))) {
                     var_1_39 = (
    var_1_7
   );
  }
 }
                   if ( (( (((((var_1_21)) > ((1.2f))) ? ((var_1_21)) : ((1.2f))))) > ( (- (var_1_30))))) {
                    if ( (( ((4.1850000000000005f) - (var_1_30))) >= ( ((4.8f) - (var_1_29))))) {
                     var_1_43 = (
    var_1_44
   );
  }
 }
 signed long int stepLocal_0 = ((last_1_var_1_10) + (last_1_var_1_13));
                                          if ( ((stepLocal_0) > ( ((var_1_4) + ( ((((256) < 0 ) ? -(256) : (256)))))))) {
                                           var_1_1 = (
   -1
  );
 }
 signed long int stepLocal_5 = ((last_1_var_1_5) * (var_1_12));
 signed long int stepLocal_4 = var_1_15;
 unsigned char stepLocal_3 = var_1_14;
                                           if ( ((last_1_var_1_9) || (stepLocal_3))) {
                                            if ( ((stepLocal_5) >= (last_1_var_1_10))) {
                                             if ( ((var_1_4) >= (stepLocal_4))) {
                                              var_1_13 = (
     32
    );
   } else {
                                              var_1_13 = (
     var_1_7
    );
   }
  } else {
                                             var_1_13 = (
    64
   );
  }
 }
 signed long int stepLocal_1 = var_1_1;
                               if ( ((stepLocal_1) <= ( (( ((var_1_13) * (var_1_1))) * ( (((((var_1_1)) < ((var_1_13))) ? ((var_1_1)) : ((var_1_13))))))))) {
                                var_1_5 = (
                                 ((
    var_1_7
   ) + (
    var_1_8
   ))
  );
 } else {
                                var_1_5 = (
   var_1_7
  );
 }
                               var_1_9 = (
                                (! (
   0
  ))
 );
                                if ( ((var_1_5) != (var_1_13))) {
                                 if ( ((var_1_5) <= (var_1_1))) {
                                  var_1_16 = (
                                   ((
     var_1_18
    ) + (
     var_1_19
    ))
   );
  }
 } else {
                                 if ( (( (((((var_1_5)) < ((var_1_7))) ? ((var_1_5)) : ((var_1_7))))) > (var_1_11))) {
                                  var_1_16 = (
    var_1_19
   );
  }
 }
 signed long int stepLocal_6 = var_1_1;
                                if ( ((5) <= (stepLocal_6))) {
                                 if (var_1_9) {
                                  var_1_20 = (
                                   ((((( var_1_21 )) > (( 10.8f ))) ? (( var_1_21 )) : (( 10.8f ))))
   );
  } else {
                                  var_1_20 = (
                                   ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
   );
  }
 }
 signed long int stepLocal_2 = (- ( ((var_1_1) ^ (var_1_13))));
                                if (var_1_9) {
                                 if ( ((var_1_7) != (stepLocal_2))) {
                                  var_1_10 = (
                                   ((
     var_1_11
    ) - (
     var_1_12
    ))
   );
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 127);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 127);
 assume_abort_if_not(var_1_11 <= 254);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483648);
 assume_abort_if_not(var_1_15 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -922337.2036854766000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854766000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_27 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 65535);
 assume_abort_if_not(var_1_27 != 0);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 4611686.018427383000e+12F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= 0.0F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 4611686.018427383000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -230584.3009213691400e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 2305843.009213691400e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_36 >= -230584.3009213691400e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 2305843.009213691400e+12F && var_1_36 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 32767);
 var_1_41 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_41 >= 1);
 assume_abort_if_not(var_1_41 <= 14);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 0);
}
void updateLastVariables(void) {
 last_1_var_1_5 = var_1_5;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 if ( (( ((last_1_var_1_10) + (last_1_var_1_13))) > ( ((var_1_4) + ( ((((256) < 0 ) ? -(256) : (256)))))))) {
 }
 if ( ((var_1_1) <= ( (( ((var_1_13) * (var_1_1))) * ( (((((var_1_1)) < ((var_1_13))) ? ((var_1_1)) : ((var_1_13))))))))) {
 } else {
 }
 if (var_1_9) {
  if ( ((var_1_7) != ( (- ( ((var_1_1) ^ (var_1_13))))))) {
  }
 }
 if ( ((last_1_var_1_9) || (var_1_14))) {
  if ( (( ((last_1_var_1_5) * (var_1_12))) >= (last_1_var_1_10))) {
   if ( ((var_1_4) >= (var_1_15))) {
   } else {
   }
  } else {
  }
 }
 if ( ((var_1_5) != (var_1_13))) {
  if ( ((var_1_5) <= (var_1_1))) {
  }
 } else {
  if ( (( (((((var_1_5)) < ((var_1_7))) ? ((var_1_5)) : ((var_1_7))))) > (var_1_11))) {
  }
 }
 if ( ((5) <= (var_1_1))) {
  if (var_1_9) {
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
         last_1_var_1_10
        ) + (
         last_1_var_1_13
        ))
       ) > (
                                                            ((
         var_1_4
        ) + (
                                                            ((((256) < 0 ) ? -(256) : (256)))
        ))
       ))
      ) ? (
                                                        ((
        var_1_1
       ) == (
                                                         ((signed long int) (
         -1
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                          ((
                                                ((
        var_1_1
       ) <= (
                                                 ((
                                                  ((
          var_1_13
         ) * (
          var_1_1
         ))
        ) * (
                                                  ((((( var_1_1 )) < (( var_1_13 ))) ? (( var_1_1 )) : (( var_1_13 ))))
        ))
       ))
      ) ? (
                                           ((
        var_1_5
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_7
         ) + (
          var_1_8
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_5
       ) == (
                                            ((unsigned char) (
         var_1_7
        ))
       ))
      ))
     ))
    ) && (
                                         ((
      var_1_9
     ) == (
                                          ((unsigned char) (
                                           (! (
        0
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_9
    ) ? (
                                          ((
                                                 ((
       var_1_7
      ) != (
                                                  (- (
                                                   ((
         var_1_1
        ) ^ (
         var_1_13
        ))
       ))
      ))
     ) ? (
                                           ((
       var_1_10
      ) == (
                                            ((unsigned char) (
                                             ((
         var_1_11
        ) - (
         var_1_12
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
                                                          ((
     last_1_var_1_9
    ) || (
     var_1_14
    ))
   ) ? (
                                                    ((
                                                           ((
                                                            ((
       last_1_var_1_5
      ) * (
       var_1_12
      ))
     ) >= (
      last_1_var_1_10
     ))
    ) ? (
                                                     ((
                                                            ((
       var_1_4
      ) >= (
       var_1_15
      ))
     ) ? (
                                                      ((
       var_1_13
      ) == (
                                                       ((unsigned char) (
        32
       ))
      ))
     ) : (
                                                      ((
       var_1_13
      ) == (
                                                       ((unsigned char) (
        var_1_7
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_13
     ) == (
                                                      ((unsigned char) (
       64
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
    var_1_5
   ) != (
    var_1_13
   ))
  ) ? (
                                        ((
                                               ((
     var_1_5
    ) <= (
     var_1_1
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((signed char) (
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
  ) : (
                                        ((
                                               ((
                                                ((((( var_1_5 )) < (( var_1_7 ))) ? (( var_1_5 )) : (( var_1_7 ))))
    ) > (
     var_1_11
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((signed char) (
      var_1_19
     ))
    ))
   ) : (
    1
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   5
  ) <= (
   var_1_1
  ))
 ) ? (
                                       ((
   var_1_9
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((float) (
                                          ((((( var_1_21 )) > (( 10.8f ))) ? (( var_1_21 )) : (( 10.8f ))))
    ))
   ))
  ) : (
                                        ((
    var_1_20
   ) == (
                                         ((float) (
                                          ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
    ))
   ))
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
