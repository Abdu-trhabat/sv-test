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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch181Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -16;
signed long int var_1_3 = 5;
signed long int var_1_4 = 5;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 0;
signed char var_1_8 = 10;
signed short int var_1_9 = 100;
signed short int var_1_10 = 256;
signed short int var_1_11 = 100;
signed char var_1_12 = -32;
signed char var_1_13 = 8;
unsigned short int var_1_14 = 32;
unsigned char var_1_15 = 0;
signed long int var_1_16 = -64;
signed long int var_1_17 = 4;
float var_1_19 = 128.5;
unsigned char var_1_21 = 0;
signed long int var_1_22 = -1;
float var_1_24 = 4.3;
float var_1_25 = 0.0;
float var_1_26 = 0.0;
float var_1_27 = 128.625;
float var_1_28 = 0.5;
signed long int var_1_29 = 10;
unsigned char var_1_31 = 4;
unsigned char var_1_35 = 8;
signed short int var_1_36 = -1;
signed short int var_1_38 = -16;
signed short int var_1_39 = 100;
unsigned long int var_1_40 = 10;
double var_1_41 = 32.8;
unsigned char var_1_42 = 32;
double var_1_43 = 16.6;
double var_1_44 = 10000.8;
double var_1_45 = 1.4;
double var_1_46 = 25.25;
unsigned char var_1_47 = 1;
signed char var_1_48 = -64;
float var_1_50 = 3.5;
unsigned char var_1_51 = 16;
unsigned char var_1_53 = 1;
signed long int var_1_55 = 256;
signed long int last_1_var_1_1 = -16;
unsigned char last_1_var_1_15 = 0;
signed long int last_1_var_1_22 = -1;
float last_1_var_1_24 = 4.3;
void initially(void) {
}
void step(void) {
 signed long int stepLocal_0 = var_1_4;
                                          if (last_1_var_1_15) {
                                           var_1_1 = (
                                            ((
    var_1_3
   ) - (
                                             ((
     var_1_4
    ) + (
     5
    ))
   ))
  );
 } else {
                                           if ( ((stepLocal_0) > ( ((var_1_3) * (last_1_var_1_22))))) {
                                            var_1_1 = (
    var_1_3
   );
  }
 }
 signed long int stepLocal_3 = ((var_1_4) - (last_1_var_1_1));
 signed long int stepLocal_2 = ((last_1_var_1_1) >> (10));
                                           if ( ((stepLocal_2) < ( ((last_1_var_1_22) / ( ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))) {
                                            if ( (( (( ((var_1_9) / (var_1_16))) % (var_1_17))) <= (stepLocal_3))) {
                                             if ( (( ((last_1_var_1_24) / (var_1_19))) != (last_1_var_1_24))) {
                                              var_1_15 = (
     var_1_21
    );
   } else {
                                              var_1_15 = (
     var_1_7
    );
   }
  } else {
                                             var_1_15 = (
    var_1_21
   );
  }
 } else {
                                            var_1_15 = (
   var_1_21
  );
 }
                                if (var_1_15) {
                                var_1_14 = (
                                 ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 ))))
  );
 }
                               var_1_6 = (
  var_1_7
 );
                                var_1_24 = (
                                 ((
                                  ((
                                   ((
     var_1_25
    ) + (
     var_1_26
    ))
   ) - (
    var_1_27
   ))
  ) - (
   var_1_28
  ))
 );
 signed long int stepLocal_4 = ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)));
                                if ( (! ( (! ( ((var_1_6) || (var_1_7))))))) {
                                 if ( (( (((((var_1_17)) < ((var_1_1))) ? ((var_1_17)) : ((var_1_1))))) <= (stepLocal_4))) {
                                  var_1_22 = (
    var_1_14
   );
  } else {
                                  var_1_22 = (
    var_1_11
   );
  }
 } else {
                                 var_1_22 = (
   var_1_13
  );
 }
 signed long int stepLocal_1 = var_1_22;
                               if ( (( ((var_1_9) - ( (((((var_1_10)) < ((var_1_11))) ? ((var_1_10)) : ((var_1_11))))))) >= (stepLocal_1))) {
                                var_1_8 = (
                                 ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
  );
 }
                   var_1_29 = (
  var_1_4
 );
                   if ( (( ((var_1_25) * (var_1_28))) > (var_1_27))) {
                    var_1_31 = (
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
  );
 }
                   if (var_1_7) {
                    var_1_36 = (
   var_1_10
  );
 } else {
                    var_1_36 = (
                     ((((( ((((((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))) < 0 ) ? -(((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))) : (((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))))) )) < (( ((((( var_1_38 )) < (( var_1_39 ))) ? (( var_1_38 )) : (( var_1_39 )))) ))) ? (( ((((((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))) < 0 ) ? -(((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))) : (((((( var_1_35 )) < (( var_1_10 ))) ? (( var_1_35 )) : (( var_1_10 ))))))) )) : (( ((((( var_1_38 )) < (( var_1_39 ))) ? (( var_1_38 )) : (( var_1_39 )))) ))))
  );
 }
                   var_1_40 = (
  var_1_35
 );
                   if ( ((var_1_35) > ( (((((var_1_17)) > (( ((var_1_40) / (var_1_17))))) ? ((var_1_17)) : (( ((var_1_40) / (var_1_17))))))))) {
                    if (var_1_7) {
                     var_1_41 = (
                      ((((( (( var_1_43 ) + ( var_1_44 )) )) < (( var_1_45 ))) ? (( (( var_1_43 ) + ( var_1_44 )) )) : (( var_1_45 ))))
   );
  }
 } else {
                    var_1_41 = (
                     ((((( (( var_1_46 ) - ( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) )) )) < (( var_1_45 ))) ? (( (( var_1_46 ) - ( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))) )) )) : (( var_1_45 ))))
  );
 }
                   if ( (( (( (- (var_1_14))) ^ ( (((((var_1_38)) < ((var_1_35))) ? ((var_1_38)) : ((var_1_35))))))) > (var_1_4))) {
                    if ( (( (( ((25) >> (2u))) % ( ((((var_1_48) < 0 ) ? -(var_1_48) : (var_1_48)))))) < (var_1_4))) {
                     var_1_47 = (
                      (! (
                       (! (
                        (! (
       var_1_7
      ))
     ))
    ))
   );
  }
 }
                   if (var_1_7) {
                    if ( ((var_1_11) <= ( ((5) % ( (((((var_1_42)) > ((var_1_51))) ? ((var_1_42)) : ((var_1_51))))))))) {
                     var_1_50 = (
                      ((((((((( var_1_28 )) < (( var_1_43 ))) ? (( var_1_28 )) : (( var_1_43 ))))) < 0 ) ? -(((((( var_1_28 )) < (( var_1_43 ))) ? (( var_1_28 )) : (( var_1_43 ))))) : (((((( var_1_28 )) < (( var_1_43 ))) ? (( var_1_28 )) : (( var_1_43 )))))))
   );
  }
 }
                   var_1_53 = (
  var_1_21
 );
                   var_1_55 = (
  var_1_39
 );
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -1);
 assume_abort_if_not(var_1_3 <= 2147483646);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= -1);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -127);
 assume_abort_if_not(var_1_12 <= 126);
 var_1_13 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_13 >= -127);
 assume_abort_if_not(var_1_13 <= 126);
 var_1_16 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_16 >= -2147483647);
 assume_abort_if_not(var_1_16 <= 2147483647);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= -2147483648);
 assume_abort_if_not(var_1_17 <= 2147483647);
 assume_abort_if_not(var_1_17 != 0);
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= -922337.2036854776000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 assume_abort_if_not(var_1_19 != 0.0F);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 1);
 assume_abort_if_not(var_1_21 <= 1);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= 2305843.009213691400e+12F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 2305843.009213691400e+12F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 4611686.018427383000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 4611686.018427383000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854766000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= -32767);
 assume_abort_if_not(var_1_38 <= 32766);
 var_1_39 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_39 >= -32767);
 assume_abort_if_not(var_1_39 <= 32766);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 255);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -461168.6018427383000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427383000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -127);
 assume_abort_if_not(var_1_48 <= 127);
 assume_abort_if_not(var_1_48 != 0);
 var_1_51 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_51 >= 0);
 assume_abort_if_not(var_1_51 <= 255);
 assume_abort_if_not(var_1_51 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_22 = var_1_22;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if (last_1_var_1_15) {
 } else {
  if ( ((var_1_4) > ( ((var_1_3) * (last_1_var_1_22))))) {
  }
 }
 if ( (( ((var_1_9) - ( (((((var_1_10)) < ((var_1_11))) ? ((var_1_10)) : ((var_1_11))))))) >= (var_1_22))) {
 }
 if (var_1_15) {
 }
 if ( (( ((last_1_var_1_1) >> (10))) < ( ((last_1_var_1_22) / ( ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))))))) {
  if ( (( (( ((var_1_9) / (var_1_16))) % (var_1_17))) <= ( ((var_1_4) - (last_1_var_1_1))))) {
   if ( (( ((last_1_var_1_24) / (var_1_19))) != (last_1_var_1_24))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( (! ( (! ( ((var_1_6) || (var_1_7))))))) {
  if ( (( (((((var_1_17)) < ((var_1_1))) ? ((var_1_17)) : ((var_1_1))))) <= ( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) {
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
       last_1_var_1_15
      ) ? (
                                                       ((
        var_1_1
       ) == (
                                                        ((signed long int) (
                                                         ((
          var_1_3
         ) - (
                                                          ((
           var_1_4
          ) + (
           5
          ))
         ))
        ))
       ))
      ) : (
                                                       ((
                                                             ((
         var_1_4
        ) > (
                                                              ((
          var_1_3
         ) * (
          last_1_var_1_22
         ))
        ))
       ) ? (
                                                        ((
         var_1_1
        ) == (
                                                         ((signed long int) (
          var_1_3
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                          ((
       var_1_6
      ) == (
                                           ((unsigned char) (
        var_1_7
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
                                                ((
        var_1_9
       ) - (
                                                 ((((( var_1_10 )) < (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 ))))
       ))
      ) >= (
       var_1_22
      ))
     ) ? (
                                          ((
       var_1_8
      ) == (
                                           ((signed char) (
                                            ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_15
    ) ? (
                                         ((
      var_1_14
     ) == (
                                          ((unsigned short int) (
                                           ((((( var_1_10 )) > (( var_1_11 ))) ? (( var_1_10 )) : (( var_1_11 ))))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                                    ((
                                                          ((
                                                           ((
      last_1_var_1_1
     ) >> (
      10
     ))
    ) < (
                                                           ((
      last_1_var_1_22
     ) / (
                                                            ((((var_1_16) < 0 ) ? -(var_1_16) : (var_1_16)))
     ))
    ))
   ) ? (
                                                    ((
                                                           ((
                                                            ((
                                                             ((
        var_1_9
       ) / (
        var_1_16
       ))
      ) % (
       var_1_17
      ))
     ) <= (
                                                            ((
       var_1_4
      ) - (
       last_1_var_1_1
      ))
     ))
    ) ? (
                                                     ((
                                                            ((
                                                             ((
        last_1_var_1_24
       ) / (
        var_1_19
       ))
      ) != (
       last_1_var_1_24
      ))
     ) ? (
                                                      ((
       var_1_15
      ) == (
                                                       ((unsigned char) (
        var_1_21
       ))
      ))
     ) : (
                                                      ((
       var_1_15
      ) == (
                                                       ((unsigned char) (
        var_1_7
       ))
      ))
     ))
    ) : (
                                                     ((
      var_1_15
     ) == (
                                                      ((unsigned char) (
       var_1_21
      ))
     ))
    ))
   ) : (
                                                    ((
     var_1_15
    ) == (
                                                     ((unsigned char) (
      var_1_21
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              (! (
                                               (! (
                                                ((
      var_1_6
     ) || (
      var_1_7
     ))
    ))
   ))
  ) ? (
                                        ((
                                               ((
                                                ((((( var_1_17 )) < (( var_1_1 ))) ? (( var_1_17 )) : (( var_1_1 ))))
    ) <= (
                                                ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
    ))
   ) ? (
                                         ((
     var_1_22
    ) == (
                                          ((signed long int) (
      var_1_14
     ))
    ))
   ) : (
                                         ((
     var_1_22
    ) == (
                                          ((signed long int) (
      var_1_11
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_22
   ) == (
                                         ((signed long int) (
     var_1_13
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((float) (
                                        ((
                                         ((
                                          ((
      var_1_25
     ) + (
      var_1_26
     ))
    ) - (
     var_1_27
    ))
   ) - (
    var_1_28
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
