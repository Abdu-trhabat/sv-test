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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch197Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 32;
unsigned char var_1_4 = 200;
unsigned char var_1_5 = 32;
signed short int var_1_6 = -32;
unsigned char var_1_7 = 1;
float var_1_8 = 5.5;
float var_1_9 = 8.6;
unsigned char var_1_10 = 0;
float var_1_11 = 63.5;
float var_1_12 = 1.6;
float var_1_13 = 15.75;
double var_1_14 = 7.375;
double var_1_15 = 5.2;
double var_1_16 = 10.5;
float var_1_17 = 256.75;
signed char var_1_18 = 5;
unsigned char var_1_19 = 4;
signed char var_1_20 = 4;
signed char var_1_21 = -16;
double var_1_22 = 25.8;
unsigned long int var_1_23 = 0;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 5;
unsigned char var_1_26 = 0;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 0;
double var_1_30 = 7.5;
unsigned char var_1_31 = 4;
double var_1_32 = 100.8;
signed long int var_1_33 = -5;
unsigned long int var_1_34 = 32;
unsigned long int var_1_35 = 4;
signed long int var_1_36 = -16;
double var_1_37 = 32.11;
signed char var_1_38 = 10;
signed char var_1_39 = -50;
signed char var_1_42 = 1;
signed char var_1_43 = -5;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 1;
float last_1_var_1_9 = 8.6;
float last_1_var_1_17 = 256.75;
double last_1_var_1_22 = 25.8;
void initially(void) {
}
void step(void) {
                                         if ( ((last_1_var_1_17) != (last_1_var_1_22))) {
                                          var_1_1 = (
                                           ((
                                            ((
     var_1_4
    ) - (
     var_1_5
    ))
   ) - (
    10
   ))
  );
 } else {
                                          var_1_1 = (
   var_1_5
  );
 }
                                         if ( ((last_1_var_1_22) > ( ((last_1_var_1_9) / (var_1_8))))) {
                                          if ( (! ( ((last_1_var_1_22) >= (last_1_var_1_9))))) {
                                           var_1_6 = (
    var_1_4
   );
  } else {
                                           var_1_6 = (
    -2
   );
  }
 }
 signed long int stepLocal_0 = 4;
                                if ( (( ((var_1_1) / (var_1_19))) <= (stepLocal_0))) {
                                 var_1_18 = (
                                  ((
    var_1_5
   ) + (
                                   ((((( (( var_1_19 ) - ( var_1_20 )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( var_1_20 )) )) : (( var_1_21 ))))
   ))
  );
 } else {
                                 var_1_18 = (
                                  ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
  );
 }
                                var_1_22 = (
  var_1_13
 );
                                var_1_23 = (
  var_1_20
 );
                                if ( ((var_1_7) && (var_1_10))) {
                                 if ( (( (( (((((var_1_4)) > ((var_1_1))) ? ((var_1_4)) : ((var_1_1))))) + (var_1_5))) != (var_1_23))) {
                                  var_1_17 = (
    100.85f
   );
  } else {
                                  var_1_17 = (
    var_1_13
   );
  }
 } else {
                                 var_1_17 = (
   var_1_13
  );
 }
                               if ( ((var_1_7) || (var_1_10))) {
                                if ( ((var_1_6) < ( (((((var_1_5)) < ((var_1_6))) ? ((var_1_5)) : ((var_1_6))))))) {
                                 if ( ((var_1_22) < ( ((var_1_11) - (var_1_12))))) {
                                  var_1_9 = (
     var_1_13
    );
   } else {
                                   var_1_9 = (
     32.89f
    );
   }
  } else {
                                  var_1_9 = (
    var_1_13
   );
  }
 }
                                if ( ((var_1_17) < ( ((var_1_9) + (var_1_11))))) {
                                 var_1_14 = (
                                  ((
    var_1_15
   ) - (
    var_1_16
   ))
  );
 }
                  var_1_24 = (
  var_1_25
 );
                   if ( (( (- (64.25f))) >= (var_1_22))) {
                    if (var_1_28) {
                     var_1_26 = (
    var_1_29
   );
  }
 }
                   if (var_1_29) {
                    if ( ((var_1_25) > ( (((((var_1_1)) < (( (~ (var_1_23))))) ? ((var_1_1)) : (( (~ (var_1_23))))))))) {
                     var_1_30 = (
    var_1_32
   );
  }
 }
                   if ( (( (( ((var_1_31) >= (var_1_24))) || (var_1_29))) || (var_1_28))) {
                    var_1_33 = (
                     ((((( var_1_24 )) > (( var_1_25 ))) ? (( var_1_24 )) : (( var_1_25 ))))
  );
 } else {
                    var_1_33 = (
   var_1_24
  );
 }
                   if ( ((var_1_6) <= (10))) {
                    var_1_34 = (
                     ((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) > (( ((((( ((((( var_1_23 )) < (( var_1_6 ))) ? (( var_1_23 )) : (( var_1_6 )))) )) > (( var_1_35 ))) ? (( ((((( var_1_23 )) < (( var_1_6 ))) ? (( var_1_23 )) : (( var_1_6 )))) )) : (( var_1_35 )))) ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( ((((( ((((( var_1_23 )) < (( var_1_6 ))) ? (( var_1_23 )) : (( var_1_6 )))) )) > (( var_1_35 ))) ? (( ((((( var_1_23 )) < (( var_1_6 ))) ? (( var_1_23 )) : (( var_1_6 )))) )) : (( var_1_35 )))) ))))
  );
 }
                   if ( (( (( ((var_1_22) / (var_1_37))) * ( ((var_1_32) * (15.8))))) <= (10.95))) {
                    if ( ((var_1_25) >= (var_1_35))) {
                     var_1_36 = (
                      ((((( var_1_23 )) > (( var_1_25 ))) ? (( var_1_23 )) : (( var_1_25 ))))
   );
  }
 }
                   if ( ((var_1_37) > (var_1_17))) {
                    var_1_38 = (
   var_1_39
  );
 } else {
                    if ( ((var_1_29) || (var_1_26))) {
                     if ( (( ((var_1_17) * (var_1_32))) <= (var_1_37))) {
                      var_1_38 = (
                       ((((((((( var_1_42 )) < (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 ))))) < 0 ) ? -(((((( var_1_42 )) < (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 ))))) : (((((( var_1_42 )) < (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))))))
    );
   }
  }
 }
                   if ( ((var_1_43) <= (var_1_39))) {
                    var_1_44 = (
                     ((
    var_1_29
   ) || (
    var_1_45
   ))
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 190);
 assume_abort_if_not(var_1_4 <= 254);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854776000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 assume_abort_if_not(var_1_8 != 0.0F);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854776000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854776000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854766000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 1);
 assume_abort_if_not(var_1_19 <= 7);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -63);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 1);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 255);
 var_1_32 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_32 >= -922337.2036854766000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -127);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -126);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -126);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 1);
 assume_abort_if_not(var_1_45 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 if ( ((last_1_var_1_17) != (last_1_var_1_22))) {
 } else {
 }
 if ( ((last_1_var_1_22) > ( ((last_1_var_1_9) / (var_1_8))))) {
  if ( (! ( ((last_1_var_1_22) >= (last_1_var_1_9))))) {
  } else {
  }
 }
 if ( ((var_1_7) || (var_1_10))) {
  if ( ((var_1_6) < ( (((((var_1_5)) < ((var_1_6))) ? ((var_1_5)) : ((var_1_6))))))) {
   if ( ((var_1_22) < ( ((var_1_11) - (var_1_12))))) {
   } else {
   }
  } else {
  }
 }
 if ( ((var_1_17) < ( ((var_1_9) + (var_1_11))))) {
 }
 if ( ((var_1_7) && (var_1_10))) {
  if ( (( (( (((((var_1_4)) > ((var_1_1))) ? ((var_1_4)) : ((var_1_1))))) + (var_1_5))) != (var_1_23))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_1) / (var_1_19))) <= (4))) {
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
                                                          ((
         last_1_var_1_17
        ) != (
         last_1_var_1_22
        ))
       ) ? (
                                                       ((
         var_1_1
        ) == (
                                                        ((unsigned char) (
                                                         ((
                                                          ((
            var_1_4
           ) - (
            var_1_5
           ))
          ) - (
           10
          ))
         ))
        ))
       ) : (
                                                       ((
         var_1_1
        ) == (
                                                        ((unsigned char) (
          var_1_5
         ))
        ))
       ))
      ) && (
                                                      ((
                                                            ((
         last_1_var_1_22
        ) > (
                                                             ((
          last_1_var_1_9
         ) / (
          var_1_8
         ))
        ))
       ) ? (
                                                       ((
                                                             (! (
                                                              ((
           last_1_var_1_22
          ) >= (
           last_1_var_1_9
          ))
         ))
        ) ? (
                                                        ((
          var_1_6
         ) == (
                                                         ((signed short int) (
           var_1_4
          ))
         ))
        ) : (
                                                        ((
          var_1_6
         ) == (
                                                         ((signed short int) (
           -2
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
        var_1_7
       ) || (
        var_1_10
       ))
      ) ? (
                                            ((
                                                 ((
         var_1_6
        ) < (
                                                  ((((( var_1_5 )) < (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
        ))
       ) ? (
                                             ((
                                                    ((
          var_1_22
         ) < (
                                                     ((
           var_1_11
          ) - (
           var_1_12
          ))
         ))
        ) ? (
                                              ((
          var_1_9
         ) == (
                                               ((float) (
           var_1_13
          ))
         ))
        ) : (
                                              ((
          var_1_9
         ) == (
                                               ((float) (
           32.89f
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_9
        ) == (
                                              ((float) (
          var_1_13
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
       var_1_17
      ) < (
                                                  ((
        var_1_9
       ) + (
        var_1_11
       ))
      ))
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((double) (
                                             ((
         var_1_15
        ) - (
         var_1_16
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
      var_1_7
     ) && (
      var_1_10
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
                                                   ((((( var_1_4 )) > (( var_1_1 ))) ? (( var_1_4 )) : (( var_1_1 ))))
       ) + (
        var_1_5
       ))
      ) != (
       var_1_23
      ))
     ) ? (
                                           ((
       var_1_17
      ) == (
                                            ((float) (
        100.85f
       ))
      ))
     ) : (
                                           ((
       var_1_17
      ) == (
                                            ((float) (
        var_1_13
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_17
     ) == (
                                           ((float) (
       var_1_13
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
      var_1_1
     ) / (
      var_1_19
     ))
    ) <= (
     4
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((signed char) (
                                           ((
       var_1_5
      ) + (
                                            ((((( (( var_1_19 ) - ( var_1_20 )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( var_1_20 )) )) : (( var_1_21 ))))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((signed char) (
                                           ((((var_1_21) < 0 ) ? -(var_1_21) : (var_1_21)))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_22
  ) == (
                                        ((double) (
    var_1_13
   ))
  ))
 ))
) && (
                                      ((
  var_1_23
 ) == (
                                       ((unsigned long int) (
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
