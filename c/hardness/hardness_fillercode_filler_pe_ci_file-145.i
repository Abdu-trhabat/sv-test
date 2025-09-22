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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch145Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 50;
unsigned char var_1_2 = 0;
signed short int var_1_5 = 256;
signed short int var_1_6 = 2;
signed short int var_1_7 = 64;
signed short int var_1_8 = -50;
signed short int var_1_9 = 2;
signed long int var_1_10 = -16;
unsigned char var_1_11 = 1;
signed long int var_1_12 = 5;
unsigned short int var_1_13 = 32;
float var_1_14 = 10000000000.7;
float var_1_15 = 999.4;
unsigned char var_1_16 = 1;
unsigned char var_1_17 = 64;
unsigned char var_1_18 = 0;
unsigned long int var_1_19 = 8;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 128;
unsigned long int var_1_23 = 2;
unsigned long int var_1_24 = 4138893358;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned long int var_1_28 = 256;
signed long int var_1_29 = 32;
signed long int var_1_30 = 1;
signed long int var_1_31 = 32;
unsigned long int var_1_33 = 8;
float var_1_34 = 999999999.5;
signed long int var_1_37 = -64;
float var_1_38 = 256.875;
signed long int var_1_39 = -256;
unsigned long int var_1_40 = 64;
signed long int var_1_42 = -200;
float var_1_43 = -0.8;
signed long int var_1_44 = 5;
float var_1_46 = 32.6;
float var_1_47 = 1.0E+15;
float var_1_48 = 100000000000.6;
signed long int var_1_49 = -1;
unsigned long int var_1_50 = 1;
signed long int last_1_var_1_10 = -16;
unsigned char last_1_var_1_21 = 100;
unsigned long int last_1_var_1_23 = 2;
void initially(void) {
}
void step(void) {
                                            if ( ((last_1_var_1_23) >= ( ((last_1_var_1_21) + ( ((var_1_17) - (last_1_var_1_10))))))) {
                                             if ( ((var_1_5) >= (var_1_18))) {
                                              if ( ((var_1_14) == (var_1_15))) {
                                               var_1_25 = (
     0
    );
   } else {
                                               var_1_25 = (
     var_1_26
    );
   }
  } else {
                                              var_1_25 = (
    var_1_26
   );
  }
 } else {
                                             var_1_25 = (
   var_1_27
  );
 }
                                if ( (! (var_1_25))) {
                                 var_1_21 = (
                                  ((
    var_1_22
   ) - (
    var_1_20
   ))
  );
 } else {
                                 var_1_21 = (
   var_1_17
  );
 }
 signed short int stepLocal_1 = var_1_9;
                                if ( (( ((var_1_14) + (var_1_15))) > (10.5f))) {
                                 if ( ((stepLocal_1) >= (var_1_8))) {
                                  var_1_13 = (
                                   ((
     37936
    ) - (
     var_1_7
    ))
   );
  }
 } else {
                                 var_1_13 = (
   50
  );
 }
                                var_1_16 = (
                                 ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
 );
                                if ( (( ((((( ((var_1_18) >> (var_1_20)))) < ((var_1_5))) ? (( ((var_1_18) >> (var_1_20)))) : ((var_1_5))))) < (var_1_17))) {
                                 var_1_19 = (
   var_1_18
  );
 }
                                var_1_23 = (
                                 ((
   var_1_24
  ) - (
   var_1_7
  ))
 );
                               if (var_1_25) {
                                if ( ((var_1_23) == (var_1_16))) {
                                 var_1_1 = (
                                  ((
                                   ((
                                    ((
       var_1_5
      ) + (
       var_1_6
      ))
     ) + (
      var_1_7
     ))
    ) - (
                                   ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) < 0 ) ? -(((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))
    ))
   );
  } else {
                                 var_1_1 = (
                                  ((
     var_1_9
    ) - (
     var_1_6
    ))
   );
  }
 }
 unsigned char stepLocal_0 = var_1_11;
                               if ( ((var_1_2) || (stepLocal_0))) {
                                var_1_10 = (
                                 ((((( (( var_1_6 ) + ( var_1_1 )) )) > (( (( var_1_9 ) + ( (( var_1_5 ) - ( var_1_12 )) )) ))) ? (( (( var_1_6 ) + ( var_1_1 )) )) : (( (( var_1_9 ) + ( (( var_1_5 ) - ( var_1_12 )) )) ))))
  );
 } else {
                                var_1_10 = (
                                 ((
    var_1_8
   ) + (
    var_1_7
   ))
  );
 }
                   if ( (( (((((var_1_29)) < ((var_1_30))) ? ((var_1_29)) : ((var_1_30))))) <= (var_1_31))) {
                   var_1_28 = (
                    ((
    var_1_24
   ) - (
                     ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))
   ))
  );
 } else {
                    var_1_28 = (
   var_1_24
  );
 }
                   if (var_1_2) {
                    if ( ((var_1_24) >= (var_1_33))) {
                     if ( ((var_1_11) && ( ((-128) > ( (~ (var_1_12))))))) {
                      if ( ((var_1_37) <= ( ((var_1_24) ^ (var_1_12))))) {
                       var_1_34 = (
      var_1_38
     );
    }
   }
  }
 } else {
                    var_1_34 = (
   var_1_38
  );
 }
                   if ( (( ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) <= ( ((var_1_24) - (var_1_40))))) {
                    var_1_39 = (
                     ((((( ((((( var_1_12 )) < (( -16 ))) ? (( var_1_12 )) : (( -16 )))) )) < (( var_1_12 ))) ? (( ((((( var_1_12 )) < (( -16 ))) ? (( var_1_12 )) : (( -16 )))) )) : (( var_1_12 ))))
  );
 } else {
                    if (var_1_11) {
                     if (var_1_26) {
                      if ( (( ((var_1_38) / (var_1_43))) >= (var_1_14))) {
                       var_1_39 = (
      var_1_12
     );
    } else {
                       var_1_39 = (
                        ((
                         ((((((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) < 0 ) ? -(((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))) : (((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12))))))
      ) + (
       var_1_12
      ))
     );
    }
   }
  } else {
                     var_1_39 = (
    var_1_12
   );
  }
 }
                   var_1_46 = (
  var_1_38
 );
                   if (var_1_25) {
                    if ( (( ((-64) / (var_1_37))) < (var_1_23))) {
                     var_1_47 = (
                      ((((( var_1_38 )) < (( var_1_48 ))) ? (( var_1_38 )) : (( var_1_48 ))))
   );
  }
 }
                   if ( (( ((var_1_40) >> (var_1_50))) == (var_1_23))) {
                    if ( ((var_1_42) < (var_1_44))) {
                     if (var_1_25) {
                      var_1_49 = (
     -8
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 8192);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8191);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= -32766);
 assume_abort_if_not(var_1_8 <= 32766);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32766);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 254);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 1);
 assume_abort_if_not(var_1_20 <= 7);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 127);
 assume_abort_if_not(var_1_22 <= 254);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 2147483647);
 assume_abort_if_not(var_1_24 <= 4294967294);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483648);
 assume_abort_if_not(var_1_37 <= 2147483647);
 assume_abort_if_not(var_1_37 != 0);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -922337.2036854766000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -2147483647);
 assume_abort_if_not(var_1_42 <= 2147483646);
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= -922337.2036854776000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854776000e+12F && var_1_43 >= 1.0e-20F ));
 assume_abort_if_not(var_1_43 != 0.0F);
 var_1_44 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_44 >= -1073741823);
 assume_abort_if_not(var_1_44 <= 1073741823);
 var_1_48 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_48 >= -922337.2036854766000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_50 >= 1);
 assume_abort_if_not(var_1_50 <= 31);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_21 = var_1_21;
 last_1_var_1_23 = var_1_23;
}
int property(void) {
 if (var_1_25) {
  if ( ((var_1_23) == (var_1_16))) {
  } else {
  }
 }
 if ( ((var_1_2) || (var_1_11))) {
 } else {
 }
 if ( (( ((var_1_14) + (var_1_15))) > (10.5f))) {
  if ( ((var_1_9) >= (var_1_8))) {
  }
 } else {
 }
 if ( (( ((((( ((var_1_18) >> (var_1_20)))) < ((var_1_5))) ? (( ((var_1_18) >> (var_1_20)))) : ((var_1_5))))) < (var_1_17))) {
 }
 if ( (! (var_1_25))) {
 } else {
 }
 if ( ((last_1_var_1_23) >= ( ((last_1_var_1_21) + ( ((var_1_17) - (last_1_var_1_10))))))) {
  if ( ((var_1_5) >= (var_1_18))) {
   if ( ((var_1_14) == (var_1_15))) {
   } else {
   }
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
                                           ((
        var_1_25
       ) ? (
                                            ((
                                                 ((
          var_1_23
         ) == (
          var_1_16
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
                                               ((
                                                ((
                                                 ((
              var_1_5
             ) + (
              var_1_6
             ))
            ) + (
             var_1_7
            ))
           ) - (
                                                ((((((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) < 0 ) ? -(((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8)))) : (((((var_1_8) < 0 ) ? -(var_1_8) : (var_1_8))))))
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed short int) (
                                               ((
            var_1_9
           ) - (
            var_1_6
           ))
          ))
         ))
        ))
       ) : (
        1
       ))
      ) && (
                                           ((
                                                 ((
         var_1_2
        ) || (
         var_1_11
        ))
       ) ? (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
                                              ((((( (( var_1_6 ) + ( var_1_1 )) )) > (( (( var_1_9 ) + ( (( var_1_5 ) - ( var_1_12 )) )) ))) ? (( (( var_1_6 ) + ( var_1_1 )) )) : (( (( var_1_9 ) + ( (( var_1_5 ) - ( var_1_12 )) )) ))))
         ))
        ))
       ) : (
                                            ((
         var_1_10
        ) == (
                                             ((signed long int) (
                                              ((
           var_1_8
          ) + (
           var_1_7
          ))
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
                                                 ((
         var_1_14
        ) + (
         var_1_15
        ))
       ) > (
        10.5f
       ))
      ) ? (
                                            ((
                                                 ((
         var_1_9
        ) >= (
         var_1_8
        ))
       ) ? (
                                             ((
         var_1_13
        ) == (
                                              ((unsigned short int) (
                                               ((
           37936
          ) - (
           var_1_7
          ))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned short int) (
         50
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned char) (
                                            ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((((( (( var_1_18 ) >> ( var_1_20 )) )) < (( var_1_5 ))) ? (( (( var_1_18 ) >> ( var_1_20 )) )) : (( var_1_5 ))))
     ) < (
      var_1_17
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((unsigned long int) (
       var_1_18
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               (! (
     var_1_25
    ))
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_22
      ) - (
       var_1_20
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_21
    ) == (
                                          ((unsigned char) (
      var_1_17
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned long int) (
                                         ((
     var_1_24
    ) - (
     var_1_7
    ))
   ))
  ))
 ))
) && (
                                                  ((
                                                         ((
   last_1_var_1_23
  ) >= (
                                                          ((
    last_1_var_1_21
   ) + (
                                                           ((
     var_1_17
    ) - (
     last_1_var_1_10
    ))
   ))
  ))
 ) ? (
                                                   ((
                                                          ((
    var_1_5
   ) >= (
    var_1_18
   ))
  ) ? (
                                                    ((
                                                           ((
     var_1_14
    ) == (
     var_1_15
    ))
   ) ? (
                                                     ((
     var_1_25
    ) == (
                                                      ((unsigned char) (
      0
     ))
    ))
   ) : (
                                                     ((
     var_1_25
    ) == (
                                                      ((unsigned char) (
      var_1_26
     ))
    ))
   ))
  ) : (
                                                    ((
    var_1_25
   ) == (
                                                     ((unsigned char) (
     var_1_26
    ))
   ))
  ))
 ) : (
                                                   ((
   var_1_25
  ) == (
                                                    ((unsigned char) (
    var_1_27
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
