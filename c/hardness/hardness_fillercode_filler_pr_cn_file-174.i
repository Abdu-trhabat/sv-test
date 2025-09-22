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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch174Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 4;
signed short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 200;
unsigned char var_1_11 = 0;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 16;
double var_1_14 = 0.5;
unsigned char var_1_15 = 1;
double var_1_16 = 500.75;
double var_1_17 = 1.8;
double var_1_18 = 0.0;
double var_1_19 = 64.8;
unsigned long int var_1_20 = 200;
float var_1_21 = 256.5;
float var_1_22 = 2.875;
unsigned short int var_1_23 = 128;
signed char var_1_24 = -50;
signed char var_1_25 = 4;
signed char var_1_26 = -50;
signed char var_1_27 = 50;
signed char var_1_28 = 1;
signed char var_1_29 = 0;
signed char var_1_30 = 4;
signed short int var_1_31 = 0;
signed short int var_1_32 = 4;
signed char var_1_33 = 32;
signed short int var_1_34 = -16;
unsigned char var_1_35 = 1;
unsigned char var_1_36 = 0;
double var_1_37 = 127.6;
double var_1_38 = 1.44;
signed long int var_1_39 = -64;
signed long int var_1_42 = 4;
unsigned short int var_1_43 = 5;
unsigned char var_1_44 = 2;
unsigned long int last_1_var_1_20 = 200;
unsigned short int last_1_var_1_23 = 128;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = last_1_var_1_23;
                                         if (var_1_8) {
                                          if (var_1_9) {
                                          var_1_7 = (
    var_1_5
   );
  }
 } else {
                                          if ( ((stepLocal_0) == ( ((last_1_var_1_20) & ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))))) {
                                           var_1_7 = (
                                            ((
                                             ((
      var_1_10
     ) - (
      var_1_11
     ))
    ) - (
                                             ((
      var_1_12
     ) + (
      var_1_13
     ))
    ))
   );
  } else {
                                           var_1_7 = (
    var_1_11
   );
  }
 }
             if ( ((var_1_25) != ( ((var_1_26) / (var_1_27))))) {
             var_1_24 = (
              (((((( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) ) - ( var_1_30 ))) < 0 ) ? -((( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) ) - ( var_1_30 ))) : ((( ((((( var_1_28 )) > (( var_1_29 ))) ? (( var_1_28 )) : (( var_1_29 )))) ) - ( var_1_30 )))))
  );
 } else {
              var_1_24 = (
               ((
    var_1_30
   ) - (
    var_1_29
   ))
  );
 }
             var_1_33 = (
  var_1_30
 );
 unsigned char stepLocal_2 = var_1_15;
 signed long int stepLocal_1 = ((var_1_11) / (var_1_10));
                               if ( ((stepLocal_1) == (var_1_6))) {
                                if ( ((stepLocal_2) || (var_1_8))) {
                                 var_1_14 = (
                                  ((
                                   ((((( ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 )))) )) < (( (( var_1_18 ) - ( var_1_19 )) ))) ? (( ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 )))) )) : (( (( var_1_18 ) - ( var_1_19 )) ))))
    ) - (
     49.6
    ))
   );
  }
 } else {
                                var_1_14 = (
                                 ((
    256.5
   ) - (
    var_1_19
   ))
  );
 }
 unsigned char stepLocal_5 = var_1_6;
                               if ( ((stepLocal_5) >= ( ((var_1_4) % (var_1_10))))) {
                                if (var_1_15) {
                                 var_1_21 = (
    var_1_17
   );
  }
 }
             if ( (( (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) % (var_1_32))) > (var_1_29))) {
              var_1_31 = (
               ((((( var_1_29 )) < (( var_1_28 ))) ? (( var_1_29 )) : (( var_1_28 ))))
  );
 }
             if (var_1_35) {
              if ( ((var_1_33) == (var_1_30))) {
               var_1_39 = (
                ((((( ((((( var_1_28 )) > (( (( var_1_34 ) + ( var_1_25 )) ))) ? (( var_1_28 )) : (( (( var_1_34 ) + ( var_1_25 )) )))) )) < (( (( var_1_29 ) - ( (( var_1_30 ) + ( var_1_42 )) )) ))) ? (( ((((( var_1_28 )) > (( (( var_1_34 ) + ( var_1_25 )) ))) ? (( var_1_28 )) : (( (( var_1_34 ) + ( var_1_25 )) )))) )) : (( (( var_1_29 ) - ( (( var_1_30 ) + ( var_1_42 )) )) ))))
   );
  } else {
               if ( (( ((var_1_24) >> (var_1_43))) != (var_1_34))) {
                var_1_39 = (
     var_1_31
    );
   } else {
                var_1_39 = (
     var_1_28
    );
   }
  }
 } else {
              var_1_39 = (
   var_1_26
  );
 }
                                var_1_22 = (
                                 ((
   var_1_16
  ) - (
   var_1_19
  ))
 );
                                if ( ((var_1_16) < ( ((var_1_18) + (var_1_22))))) {
                                 var_1_23 = (
                                  ((
    54981
   ) - (
    var_1_12
   ))
  );
 }
 unsigned char stepLocal_4 = var_1_7;
 signed long int stepLocal_3 = (- (var_1_23));
                               if ( ((var_1_13) < (stepLocal_3))) {
                                if ( ((stepLocal_4) == ( ((var_1_10) - (var_1_13))))) {
                                 var_1_20 = (
    var_1_11
   );
  } else {
                                 var_1_20 = (
    var_1_7
   );
  }
 } else {
                                var_1_20 = (
   var_1_6
  );
 }
             if ( (( (~ ( ((var_1_31) * (var_1_24))))) >= (var_1_42))) {
              if ( ((var_1_24) < (var_1_29))) {
               if ( ((var_1_36) || (var_1_35))) {
                if (var_1_35) {
                 var_1_44 = (
      var_1_29
     );
    } else {
                 var_1_44 = (
      var_1_28
     );
    }
   } else {
                var_1_44 = (
     var_1_29
    );
   }
  }
 } else {
              var_1_44 = (
   var_1_30
  );
 }
                              if ( ((var_1_20) < ( ((var_1_20) / (var_1_4))))) {
                               var_1_1 = (
                                ((
    var_1_5
   ) + (
    var_1_6
   ))
  );
 }
             if ( (! ( ((var_1_35) || (var_1_36))))) {
              if ( (( (((((var_1_37)) < ((3.25))) ? ((var_1_37)) : ((3.25))))) >= (var_1_38))) {
               if ( ((var_1_35) && (var_1_36))) {
                var_1_34 = (
                 ((((( var_1_24 )) < (( var_1_27 ))) ? (( var_1_24 )) : (( var_1_27 ))))
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -32768);
 assume_abort_if_not(var_1_4 <= 32767);
 assume_abort_if_not(var_1_4 != 0);
 var_1_5 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 190);
 assume_abort_if_not(var_1_10 <= 254);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 63);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 64);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 63);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854766000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 4611686.018427383000e+12F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -128);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -128);
 assume_abort_if_not(var_1_27 <= 127);
 assume_abort_if_not(var_1_27 != 0);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_29 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32768);
 assume_abort_if_not(var_1_32 <= 32767);
 assume_abort_if_not(var_1_32 != 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1073741823);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 1);
 assume_abort_if_not(var_1_43 <= 6);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 if ( ((var_1_20) < ( ((var_1_20) / (var_1_4))))) {
 }
 if (var_1_8) {
  if (var_1_9) {
  }
 } else {
  if ( ((last_1_var_1_23) == ( ((last_1_var_1_20) & ( (((((var_1_6)) < ((var_1_5))) ? ((var_1_6)) : ((var_1_5))))))))) {
  } else {
  }
 }
 if ( (( ((var_1_11) / (var_1_10))) == (var_1_6))) {
  if ( ((var_1_15) || (var_1_8))) {
  }
 } else {
 }
 if ( ((var_1_13) < ( (- (var_1_23))))) {
  if ( ((var_1_7) == ( ((var_1_10) - (var_1_13))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_6) >= ( ((var_1_4) % (var_1_10))))) {
  if (var_1_15) {
  }
 }
 if ( ((var_1_16) < ( ((var_1_18) + (var_1_22))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                               ((
        var_1_20
       ) < (
                                                ((
         var_1_20
        ) / (
         var_1_4
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((unsigned char) (
                                             ((
          var_1_5
         ) + (
          var_1_6
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                                     ((
       var_1_8
      ) ? (
                                                      ((
        var_1_9
       ) ? (
                                                       ((
         var_1_7
        ) == (
                                                        ((unsigned char) (
          var_1_5
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                                      ((
                                                            ((
         last_1_var_1_23
        ) == (
                                                             ((
          last_1_var_1_20
         ) & (
                                                              ((((( var_1_6 )) < (( var_1_5 ))) ? (( var_1_6 )) : (( var_1_5 ))))
         ))
        ))
       ) ? (
                                                       ((
         var_1_7
        ) == (
                                                        ((unsigned char) (
                                                         ((
                                                          ((
            var_1_10
           ) - (
            var_1_11
           ))
          ) - (
                                                          ((
            var_1_12
           ) + (
            var_1_13
           ))
          ))
         ))
        ))
       ) : (
                                                       ((
         var_1_7
        ) == (
                                                        ((unsigned char) (
          var_1_11
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
                                                ((
        var_1_11
       ) / (
        var_1_10
       ))
      ) == (
       var_1_6
      ))
     ) ? (
                                           ((
                                                  ((
        var_1_15
       ) || (
        var_1_8
       ))
      ) ? (
                                            ((
        var_1_14
       ) == (
                                             ((double) (
                                              ((
                                               ((((( ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 )))) )) < (( (( var_1_18 ) - ( var_1_19 )) ))) ? (( ((((( var_1_16 )) > (( var_1_17 ))) ? (( var_1_16 )) : (( var_1_17 )))) )) : (( (( var_1_18 ) - ( var_1_19 )) ))))
         ) - (
          49.6
         ))
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((double) (
                                             ((
         256.5
        ) - (
         var_1_19
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_13
     ) < (
                                                 (- (
       var_1_23
      ))
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_7
      ) == (
                                                  ((
        var_1_10
       ) - (
        var_1_13
       ))
      ))
     ) ? (
                                           ((
       var_1_20
      ) == (
                                            ((unsigned long int) (
        var_1_11
       ))
      ))
     ) : (
                                           ((
       var_1_20
      ) == (
                                            ((unsigned long int) (
        var_1_7
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_20
     ) == (
                                           ((unsigned long int) (
       var_1_6
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_6
    ) >= (
                                                ((
      var_1_4
     ) % (
      var_1_10
     ))
    ))
   ) ? (
                                         ((
     var_1_15
    ) ? (
                                          ((
      var_1_21
     ) == (
                                           ((float) (
       var_1_17
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
   var_1_22
  ) == (
                                        ((float) (
                                         ((
     var_1_16
    ) - (
     var_1_19
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_16
  ) < (
                                              ((
    var_1_18
   ) + (
    var_1_22
   ))
  ))
 ) ? (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned short int) (
                                         ((
     54981
    ) - (
     var_1_12
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
