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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch87Filler_PR_CI.c", 13, "reach_error"); }
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
signed long int var_1_2 = 5;
signed long int var_1_3 = 5;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 10;
signed long int var_1_6 = 256;
signed long int var_1_7 = 16;
unsigned char var_1_8 = 1;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 0;
double var_1_11 = 500.25;
double var_1_12 = 4.75;
double var_1_13 = 25.25;
double var_1_14 = 256.82;
double var_1_15 = 1.375;
signed long int var_1_16 = -256;
signed short int var_1_17 = 256;
signed long int var_1_18 = -5;
signed long int var_1_19 = 32;
signed long int var_1_20 = 64;
float var_1_21 = 2.375;
double var_1_22 = 256.75;
double var_1_23 = 255.1;
signed long int var_1_24 = 500;
signed short int var_1_25 = -128;
signed short int var_1_28 = 128;
double var_1_29 = 9.5;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 32;
signed short int var_1_33 = 25;
signed char var_1_34 = -4;
unsigned long int var_1_35 = 1;
unsigned long int var_1_36 = 25;
unsigned char var_1_37 = 0;
signed long int var_1_39 = 10;
unsigned char var_1_40 = 10;
signed long int var_1_41 = -64;
unsigned char var_1_42 = 4;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = ((var_1_5) - ( (((((var_1_6)) < ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))));
                              if ( (( ((var_1_2) - (var_1_3))) >= (stepLocal_0))) {
                               var_1_1 = (
                                ((
                                 ((
                                  ((
      var_1_4
     ) || (
      var_1_8
     ))
    ) && (
     var_1_9
    ))
   ) || (
    var_1_10
   ))
  );
 }
                  if ( ((var_1_3) > ( ((-100) ^ (var_1_19))))) {
                   var_1_25 = (
                    ((((( 1 )) < (( var_1_28 ))) ? (( 1 )) : (( var_1_28 ))))
  );
 }
                   if ( ((var_1_13) > (var_1_14))) {
                   var_1_33 = (
   var_1_32
  );
 } else {
                    if ( ((var_1_13) >= (var_1_14))) {
                     if ( (( ((var_1_18) % (var_1_34))) > ( ((var_1_2) + (var_1_32))))) {
                     var_1_33 = (
                      ((((((((2) < 0 ) ? -(2) : (2)))) < 0 ) ? -(((((2) < 0 ) ? -(2) : (2)))) : (((((2) < 0 ) ? -(2) : (2))))))
    );
   } else {
                      if ( (( ((var_1_18) & (var_1_34))) <= ( (((((var_1_2)) < ((var_1_28))) ? ((var_1_2)) : ((var_1_28))))))) {
                       var_1_33 = (
      var_1_32
     );
    } else {
                       var_1_33 = (
      var_1_2
     );
    }
   }
  } else {
                     var_1_33 = (
    var_1_28
   );
  }
 }
                              var_1_11 = (
                               ((((( ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 )))) )) > (( (( var_1_14 ) - ( (( 5.86478081602821E18 ) - ( var_1_15 )) )) ))) ? (( ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 )))) )) : (( (( var_1_14 ) - ( (( 5.86478081602821E18 ) - ( var_1_15 )) )) ))))
 );
                   if ( ((var_1_5) > ( (( ((((var_1_17) < 0 ) ? -(var_1_17) : (var_1_17)))) << (var_1_19))))) {
                    var_1_35 = (
                     ((
    var_1_32
   ) + (
    var_1_5
   ))
  );
 }
                   if ( ((var_1_19) == (var_1_34))) {
                    var_1_36 = (
                     ((((( var_1_18 )) > (( var_1_32 ))) ? (( var_1_18 )) : (( var_1_32 ))))
  );
 } else {
                    var_1_36 = (
                     ((((( var_1_32 )) < (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) ))) ? (( var_1_32 )) : (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18))) ))))
  );
 }
                   if (var_1_9) {
                    var_1_37 = (
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
  );
 } else {
                    if ( (( (( ((var_1_36) + (var_1_32))) >> (var_1_39))) > (var_1_20))) {
                     var_1_37 = (
                      ((
     var_1_39
    ) + (
     var_1_40
    ))
   );
  }
 }
                   var_1_41 = (
  var_1_2
 );
                               if ( (( ((var_1_3) % (var_1_17))) >= (var_1_2))) {
                               var_1_16 = (
                                ((
                                 ((
     var_1_17
    ) + (
     var_1_18
    ))
   ) + (
                                 ((
     var_1_19
    ) - (
     var_1_20
    ))
   ))
  );
 } else {
                                if (var_1_1) {
                                 var_1_16 = (
    var_1_17
   );
  } else {
                                 var_1_16 = (
    var_1_19
   );
  }
 }
                               if ( ((var_1_3) < (var_1_5))) {
                                var_1_21 = (
   var_1_14
  );
 }
                  var_1_29 = (
  var_1_14
 );
                  var_1_31 = (
  var_1_32
 );
                   var_1_42 = (
  var_1_39
 );
 signed short int stepLocal_1 = var_1_17;
                               if ( ((var_1_21) <= (var_1_15))) {
                                var_1_22 = (
                                 ((((( var_1_13 )) > (( 255.75 ))) ? (( var_1_13 )) : (( 255.75 ))))
  );
 } else {
                                if ( ((var_1_19) > (stepLocal_1))) {
                                 if (var_1_1) {
                                  var_1_22 = (
     var_1_15
    );
   } else {
                                  var_1_22 = (
     var_1_14
    );
   }
  } else {
                                 var_1_22 = (
    var_1_12
   );
  }
 }
                               if ( (( (( ((64) + (var_1_19))) - (var_1_24))) <= (-128))) {
                                var_1_23 = (
                                 ((((( var_1_14 )) < (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) ))) ? (( var_1_14 )) : (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) ))))
  );
 } else {
                                if ( (( ((var_1_18) / (var_1_17))) <= ( (~ (var_1_6))))) {
                                 var_1_23 = (
    var_1_13
   );
  } else {
                                 var_1_23 = (
    0.725
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -1);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 1);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= -922337.2036854766000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_17 >= -32768);
 assume_abort_if_not(var_1_17 <= 32767);
 assume_abort_if_not(var_1_17 != 0);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -536870911);
 assume_abort_if_not(var_1_18 <= 536870911);
 var_1_19 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1073741823);
 var_1_20 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 1073741823);
 var_1_24 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32767);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 254);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -128);
 assume_abort_if_not(var_1_34 <= 127);
 assume_abort_if_not(var_1_34 != 0);
 var_1_39 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 31);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 127);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_2) - (var_1_3))) >= ( ((var_1_5) - ( (((((var_1_6)) < ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))))))) {
 }
 if ( (( ((var_1_3) % (var_1_17))) >= (var_1_2))) {
 } else {
  if (var_1_1) {
  } else {
  }
 }
 if ( ((var_1_3) < (var_1_5))) {
 }
 if ( ((var_1_21) <= (var_1_15))) {
 } else {
  if ( ((var_1_19) > (var_1_17))) {
   if (var_1_1) {
   } else {
   }
  } else {
  }
 }
 if ( (( (( ((64) + (var_1_19))) - (var_1_24))) <= (-128))) {
 } else {
  if ( (( ((var_1_18) / (var_1_17))) <= ( (~ (var_1_6))))) {
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
        var_1_2
       ) - (
        var_1_3
       ))
      ) >= (
                                               ((
        var_1_5
       ) - (
                                                ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
       ))
      ))
     ) ? (
                                         ((
       var_1_1
      ) == (
                                          ((unsigned char) (
                                           ((
                                            ((
                                             ((
           var_1_4
          ) || (
           var_1_8
          ))
         ) && (
          var_1_9
         ))
        ) || (
         var_1_10
        ))
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                        ((
      var_1_11
     ) == (
                                         ((double) (
                                           ((((( ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 )))) )) > (( (( var_1_14 ) - ( (( 5.86478081602821E18 ) - ( var_1_15 )) )) ))) ? (( ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 )))) )) : (( (( var_1_14 ) - ( (( 5.86478081602821E18 ) - ( var_1_15 )) )) ))))
      ))
     ))
    ))
   ) && (
                                         ((
                                              ((
                                               ((
       var_1_3
      ) % (
       var_1_17
      ))
     ) >= (
      var_1_2
     ))
    ) ? (
                                         ((
      var_1_16
     ) == (
                                          ((signed long int) (
                                           ((
                                            ((
         var_1_17
        ) + (
         var_1_18
        ))
       ) + (
                                            ((
         var_1_19
        ) - (
         var_1_20
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_1
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed long int) (
        var_1_17
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((signed long int) (
        var_1_19
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_3
    ) < (
     var_1_5
    ))
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((float) (
      var_1_14
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_21
   ) <= (
    var_1_15
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((double) (
                                          ((((( var_1_13 )) > (( 255.75 ))) ? (( var_1_13 )) : (( 255.75 ))))
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_19
    ) > (
     var_1_17
    ))
   ) ? (
                                         ((
     var_1_1
    ) ? (
                                          ((
      var_1_22
     ) == (
                                           ((double) (
       var_1_15
      ))
     ))
    ) : (
                                          ((
      var_1_22
     ) == (
                                           ((double) (
       var_1_14
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_22
    ) == (
                                          ((double) (
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
     64
    ) + (
     var_1_19
    ))
   ) - (
    var_1_24
   ))
  ) <= (
   -128
  ))
 ) ? (
                                       ((
   var_1_23
  ) == (
                                        ((double) (
                                         ((((( var_1_14 )) < (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) ))) ? (( var_1_14 )) : (( ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))) ))))
   ))
  ))
 ) : (
                                       ((
                                              ((
                                               ((
     var_1_18
    ) / (
     var_1_17
    ))
   ) <= (
                                               (~ (
     var_1_6
    ))
   ))
  ) ? (
                                        ((
    var_1_23
   ) == (
                                         ((double) (
     var_1_13
    ))
   ))
  ) : (
                                        ((
    var_1_23
   ) == (
                                         ((double) (
     0.725
    ))
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
