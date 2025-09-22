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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch185Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 31.25;
unsigned short int var_1_2 = 45232;
unsigned short int var_1_3 = 16;
signed long int var_1_4 = -32;
signed long int var_1_5 = -8;
float var_1_8 = 256.875;
unsigned char var_1_9 = 0;
signed short int var_1_10 = 10;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned short int var_1_16 = 50;
unsigned short int var_1_17 = 4;
signed short int var_1_18 = 128;
float var_1_19 = 64.4;
float var_1_20 = 32.5;
float var_1_21 = 128.3;
float var_1_22 = 24.8;
float var_1_23 = 31.75;
signed short int var_1_24 = -2;
signed short int var_1_25 = 4;
float var_1_26 = 256.8;
float var_1_27 = 999999.6;
float var_1_28 = 3.2;
float var_1_29 = 50.75;
unsigned short int var_1_30 = 50;
unsigned short int var_1_33 = 0;
unsigned long int var_1_34 = 16;
unsigned long int var_1_35 = 4068294875;
unsigned long int var_1_36 = 64;
unsigned long int var_1_37 = 10;
double var_1_38 = 4.6;
double var_1_39 = 32.8;
signed long int var_1_40 = 0;
signed char var_1_41 = 10;
signed char var_1_42 = -1;
signed long int var_1_43 = 64;
float var_1_44 = 100.7;
signed short int var_1_45 = 64;
float var_1_46 = 200.3;
unsigned short int var_1_47 = 0;
unsigned short int var_1_49 = 32;
unsigned long int var_1_50 = 2;
float last_1_var_1_29 = 50.75;
void initially(void) {
}
void step(void) {
 unsigned short int stepLocal_3 = var_1_3;
                                          if ( ((var_1_8) > (last_1_var_1_29))) {
                                           if ( ((var_1_10) >= (stepLocal_3))) {
                                            var_1_13 = (
                                             (! (
     var_1_11
    ))
   );
  }
 } else {
                                           var_1_13 = (
                                            ((
    var_1_14
   ) || (
    var_1_15
   ))
  );
 }
                   var_1_44 = (
                    ((((( ((((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < 0 ) ? -(((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) )) < (( 99.6f ))) ? (( ((((((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) < 0 ) ? -(((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))) : (((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) )) : (( 99.6f ))))
 );
                   if ( ((var_1_8) <= ( ((var_1_38) / (var_1_46))))) {
                    var_1_45 = (
                     ((((( var_1_42 )) < (( -8 ))) ? (( var_1_42 )) : (( -8 ))))
  );
 }
                                if ( ((var_1_10) >= (var_1_3))) {
                                 var_1_29 = (
                                  ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
  );
 } else {
                                 if ( ((var_1_13) || (var_1_14))) {
                                  var_1_29 = (
    64.125f
   );
  }
 }
                  if ( ((var_1_23) > (var_1_8))) {
                   var_1_30 = (
                    ((((( 16 )) > (( var_1_3 ))) ? (( 16 )) : (( var_1_3 ))))
  );
 }
 signed long int stepLocal_2 = ((var_1_3) / (var_1_10));
                              if ( ((stepLocal_2) <= (var_1_4))) {
                               var_1_9 = (
                                ((
                                 ((
                                  ((
      var_1_8
     ) >= (
      var_1_29
     ))
    ) || (
     var_1_11
    ))
   ) && (
    var_1_12
   ))
  );
 }
                               if ( (( (( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))) - (var_1_21))) >= ( ((var_1_22) - (var_1_23))))) {
                                var_1_18 = (
                                 ((((( var_1_24 )) < (( var_1_25 ))) ? (( var_1_24 )) : (( var_1_25 ))))
  );
 }
                   var_1_37 = (
  var_1_3
 );
                   var_1_38 = (
  var_1_39
 );
                   if ( ((var_1_36) >= ( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))))) {
                    if ( ((var_1_12) && ( ((var_1_39) > (var_1_38))))) {
                     var_1_47 = (
                      ((((( var_1_41 )) > (( ((((( var_1_33 )) > (( var_1_49 ))) ? (( var_1_33 )) : (( var_1_49 )))) ))) ? (( var_1_41 )) : (( ((((( var_1_33 )) > (( var_1_49 ))) ? (( var_1_33 )) : (( var_1_49 )))) ))))
   );
  }
 }
                                if (var_1_11) {
                                 var_1_26 = (
                                  ((
    var_1_27
   ) + (
    var_1_28
   ))
  );
 } else {
                                 var_1_26 = (
   var_1_28
  );
 }
                  if ( ((var_1_3) > ( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))))) {
                   var_1_34 = (
                    ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))
  );
 } else {
                   var_1_34 = (
                    ((((( (( (( var_1_35 ) - ( var_1_3 )) ) - ( var_1_3 )) )) < (( (((((( 100u ) + ( var_1_36 ))) < 0 ) ? -((( 100u ) + ( var_1_36 ))) : ((( 100u ) + ( var_1_36 ))))) ))) ? (( (( (( var_1_35 ) - ( var_1_3 )) ) - ( var_1_3 )) )) : (( (((((( 100u ) + ( var_1_36 ))) < 0 ) ? -((( 100u ) + ( var_1_36 ))) : ((( 100u ) + ( var_1_36 ))))) ))))
  );
 }
                   if ( (( ((var_1_35) % ( ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))))) < (var_1_41))) {
                    var_1_40 = (
                     ((((( var_1_43 )) < (( var_1_3 ))) ? (( var_1_43 )) : (( var_1_3 ))))
  );
 }
 signed long int stepLocal_1 = (((((var_1_4)) > ((var_1_5))) ? ((var_1_4)) : ((var_1_5))));
 unsigned char stepLocal_0 = var_1_13;
                              if ( (( ((var_1_2) - (var_1_3))) <= (stepLocal_1))) {
                               if ( ((var_1_9) || (stepLocal_0))) {
                                var_1_1 = (
    var_1_8
   );
  }
 } else {
                               var_1_1 = (
   var_1_8
  );
 }
 signed short int stepLocal_4 = var_1_10;
                               if ( ((var_1_8) < (var_1_26))) {
                                if ( ((stepLocal_4) == ( (( ((var_1_4) * (var_1_5))) + ( ((var_1_3) >> (2))))))) {
                                 var_1_16 = (
    var_1_3
   );
  } else {
                                 var_1_16 = (
    var_1_17
   );
  }
 } else {
                                var_1_16 = (
   var_1_17
  );
 }
                   if ( (( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))) == (128))) {
                    if ( ((var_1_34) <= ( ((var_1_35) - (var_1_4))))) {
                     var_1_50 = (
                      ((
                       ((
      2054545849u
     ) - (
      var_1_3
     ))
    ) + (
     25u
    ))
   );
  } else {
                     var_1_50 = (
    8u
   );
  }
 } else {
                    var_1_50 = (
   var_1_36
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 32767);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32768);
 assume_abort_if_not(var_1_10 <= 32767);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 1);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_17 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 65534);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= 0.0F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= 0.0F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32767);
 assume_abort_if_not(var_1_24 <= 32766);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -32767);
 assume_abort_if_not(var_1_25 <= 32766);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -461168.6018427383000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= -461168.6018427383000e+13F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 4611686.018427383000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 65534);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 3221225470);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 127);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= -2147483647);
 assume_abort_if_not(var_1_43 <= 2147483646);
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= -922337.2036854776000e+13F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854776000e+12F && var_1_46 >= 1.0e-20F ));
 assume_abort_if_not(var_1_46 != 0.0F);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 65534);
}
void updateLastVariables(void) {
 last_1_var_1_29 = var_1_29;
}
int property(void) {
 if ( (( ((var_1_2) - (var_1_3))) <= ( (((((var_1_4)) > ((var_1_5))) ? ((var_1_4)) : ((var_1_5))))))) {
  if ( ((var_1_9) || (var_1_13))) {
  }
 } else {
 }
 if ( (( ((var_1_3) / (var_1_10))) <= (var_1_4))) {
 }
 if ( ((var_1_8) > (last_1_var_1_29))) {
  if ( ((var_1_10) >= (var_1_3))) {
  }
 } else {
 }
 if ( ((var_1_8) < (var_1_26))) {
  if ( ((var_1_10) == ( (( ((var_1_4) * (var_1_5))) + ( ((var_1_3) >> (2))))))) {
  } else {
  }
 } else {
 }
 if ( (( (( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))) - (var_1_21))) >= ( ((var_1_22) - (var_1_23))))) {
 }
 if (var_1_11) {
 } else {
 }
 if ( ((var_1_10) >= (var_1_3))) {
 } else {
  if ( ((var_1_13) || (var_1_14))) {
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
         var_1_2
        ) - (
         var_1_3
        ))
       ) <= (
                                                ((((( var_1_4 )) > (( var_1_5 ))) ? (( var_1_4 )) : (( var_1_5 ))))
       ))
      ) ? (
                                           ((
                                                 ((
         var_1_9
        ) || (
         var_1_13
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((float) (
          var_1_8
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
         var_1_8
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
                                                 ((
         var_1_3
        ) / (
         var_1_10
        ))
       ) <= (
        var_1_4
       ))
      ) ? (
                                           ((
        var_1_9
       ) == (
                                            ((unsigned char) (
                                             ((
                                              ((
                                               ((
            var_1_8
           ) >= (
            var_1_29
           ))
          ) || (
           var_1_11
          ))
         ) && (
          var_1_12
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
       var_1_8
      ) > (
       last_1_var_1_29
      ))
     ) ? (
                                                      ((
                                                           ((
        var_1_10
       ) >= (
        var_1_3
       ))
      ) ? (
                                                       ((
        var_1_13
       ) == (
                                                        ((unsigned char) (
                                                         (! (
          var_1_11
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
                                                       ((unsigned char) (
                                                        ((
         var_1_14
        ) || (
         var_1_15
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_8
     ) < (
      var_1_26
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_10
      ) == (
                                                  ((
                                                   ((
         var_1_4
        ) * (
         var_1_5
        ))
       ) + (
                                                   ((
         var_1_3
        ) >> (
         2
        ))
       ))
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned short int) (
        var_1_3
       ))
      ))
     ) : (
                                           ((
       var_1_16
      ) == (
                                            ((unsigned short int) (
        var_1_17
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned short int) (
       var_1_17
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((
                                                 ((((( var_1_19 )) > (( var_1_20 ))) ? (( var_1_19 )) : (( var_1_20 ))))
     ) - (
      var_1_21
     ))
    ) >= (
                                                ((
      var_1_22
     ) - (
      var_1_23
     ))
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((signed short int) (
                                           ((((( var_1_24 )) < (( var_1_25 ))) ? (( var_1_24 )) : (( var_1_25 ))))
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
    var_1_26
   ) == (
                                         ((float) (
                                          ((
      var_1_27
     ) + (
      var_1_28
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_26
   ) == (
                                         ((float) (
     var_1_28
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_10
  ) >= (
   var_1_3
  ))
 ) ? (
                                       ((
   var_1_29
  ) == (
                                        ((float) (
                                         ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
   ))
  ))
 ) : (
                                       ((
                                              ((
    var_1_13
   ) || (
    var_1_14
   ))
  ) ? (
                                        ((
    var_1_29
   ) == (
                                         ((float) (
     64.125f
    ))
   ))
  ) : (
   1
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
