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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch175Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 256;
unsigned short int var_1_2 = 64859;
unsigned short int var_1_3 = 10;
unsigned short int var_1_4 = 50;
unsigned char var_1_5 = 0;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
unsigned char var_1_8 = 1;
unsigned char var_1_13 = 1;
float var_1_15 = 256.9;
float var_1_17 = 64.375;
float var_1_18 = 16.6;
float var_1_19 = 2.75;
float var_1_20 = -0.7;
float var_1_21 = 255.8;
signed short int var_1_22 = 0;
unsigned char var_1_23 = 5;
signed short int var_1_24 = -128;
signed short int var_1_25 = 10000;
signed short int var_1_26 = 25;
signed short int var_1_27 = 1;
signed long int var_1_28 = -500;
signed short int var_1_29 = -16;
signed long int var_1_30 = -5;
signed long int var_1_31 = -256;
signed short int var_1_32 = 0;
signed short int var_1_33 = -2;
unsigned char var_1_34 = 1;
unsigned char var_1_37 = 1;
signed short int var_1_38 = 32;
unsigned long int var_1_39 = 25;
unsigned long int var_1_40 = 3139419749;
unsigned long int var_1_41 = 8;
signed long int var_1_42 = -256;
signed long int var_1_43 = 4;
float var_1_44 = 4.25;
float var_1_45 = 16.5;
float var_1_46 = 0.35;
signed char var_1_47 = 16;
float var_1_49 = 1.875;
signed char var_1_50 = 100;
void initially(void) {
}
void step(void) {
                  if ( ((256) <= ( ((var_1_30) & (var_1_31))))) {
                   var_1_29 = (
                    ((((((((( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) < (( var_1_33 ))) ? (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) : (( var_1_33 ))))) < 0 ) ? -(((((( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) < (( var_1_33 ))) ? (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) : (( var_1_33 ))))) : (((((( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) < (( var_1_33 ))) ? (( ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))) )) : (( var_1_33 )))))))
  );
 }
                  if ( ((var_1_8) || (var_1_5))) {
                   if ( ((var_1_28) < (var_1_32))) {
                    var_1_34 = (
    var_1_37
   );
  }
 }
                   if ( (( ((var_1_28) ^ (var_1_32))) >= ( (((((var_1_28)) > ((var_1_1))) ? ((var_1_28)) : ((var_1_1))))))) {
                    if (var_1_13) {
                    if ( ((var_1_1) < (var_1_28))) {
                     var_1_38 = (
     var_1_32
    );
   } else {
                     var_1_38 = (
     -2
    );
   }
  }
 } else {
                    var_1_38 = (
   var_1_32
  );
 }
                   if ( ((2) <= (var_1_33))) {
                    var_1_39 = (
                     ((
    var_1_40
   ) - (
    var_1_41
   ))
  );
 } else {
                    if ( (( (( ((var_1_28) ^ (var_1_32))) / ( (((((var_1_42)) < ((var_1_43))) ? ((var_1_42)) : ((var_1_43))))))) != (var_1_28))) {
                     var_1_39 = (
                      ((((( ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) )) < (( var_1_41 ))) ? (( ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))) )) : (( var_1_41 ))))
   );
  } else {
                     var_1_39 = (
    var_1_40
   );
  }
 }
                   if ( ((var_1_28) > (var_1_39))) {
                    var_1_44 = (
                     ((
    var_1_45
   ) - (
    var_1_46
   ))
  );
 } else {
                    var_1_44 = (
   var_1_46
  );
 }
                   if (var_1_5) {
                    if ( ((var_1_41) <= (var_1_43))) {
                     if ( (( ((((((var_1_20) / (var_1_49))) < 0 ) ? -(((var_1_20) / (var_1_49))) : (((var_1_20) / (var_1_49)))))) <= (var_1_45))) {
                      var_1_47 = (
                       ((((( var_1_50 )) > (( 5 ))) ? (( var_1_50 )) : (( 5 ))))
    );
   }
  }
 } else {
                    var_1_47 = (
   var_1_50
  );
 }
 unsigned short int stepLocal_1 = var_1_2;
 signed long int stepLocal_0 = 2;
                              if ( (( (( ((var_1_2) - (var_1_3))) - (var_1_4))) > (stepLocal_0))) {
                               if ( ((stepLocal_1) < (var_1_3))) {
                                var_1_1 = (
                                 ((
     32
    ) + (
     var_1_3
    ))
   );
  }
 }
                              var_1_5 = (
                               (! (
                                ((
    var_1_6
   ) && (
    var_1_7
   ))
  ))
 );
                               if ( (( ((var_1_2) & (var_1_3))) > (var_1_4))) {
                                if ( ((var_1_1) > (var_1_3))) {
                                 var_1_15 = (
                                  ((
     var_1_17
    ) - (
                                   ((
      var_1_18
     ) + (
      var_1_19
     ))
    ))
   );
  }
 } else {
                                var_1_15 = (
                                 ((
    var_1_19
   ) + (
    var_1_18
   ))
  );
 }
                               var_1_20 = (
                                ((
   var_1_18
  ) + (
                                 ((((( (( var_1_19 ) - ( 5.9f )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( 5.9f )) )) : (( var_1_21 ))))
  ))
 );
                               if ( (( (( ((var_1_3) >> (var_1_23))) + (var_1_1))) < ( (((((var_1_4)) < ((var_1_2))) ? ((var_1_4)) : ((var_1_2))))))) {
                                var_1_22 = (
                                 ((
                                  ((((( var_1_23 )) < (( (( var_1_1 ) + ( var_1_24 )) ))) ? (( var_1_23 )) : (( (( var_1_1 ) + ( var_1_24 )) ))))
   ) + (
                                  ((
                                   ((
      var_1_25
     ) - (
      var_1_26
     ))
    ) - (
     var_1_27
    ))
   ))
  );
 } else {
                                if ( ((var_1_1) <= (var_1_26))) {
                                 var_1_22 = (
    128
   );
  }
 }
                               var_1_28 = (
  var_1_2
 );
                              if ( (( ((var_1_20) * ( ((var_1_15) + (var_1_20))))) > (var_1_20))) {
                               var_1_8 = (
   var_1_7
  );
 }
                               var_1_13 = (
                                ((
                                 ((
                                  ((
     var_1_2
    ) * (
     var_1_4
    ))
   ) > (
    var_1_28
   ))
  ) && (
                                 (! (
    var_1_6
   ))
  ))
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 49151);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 16384);
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 32767);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 1);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 1);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= 0.0F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854766000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 1);
 assume_abort_if_not(var_1_23 <= 15);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -8191);
 assume_abort_if_not(var_1_24 <= 8191);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= 8191);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 8191);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 16383);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483648);
 assume_abort_if_not(var_1_31 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -32766);
 assume_abort_if_not(var_1_32 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -32766);
 assume_abort_if_not(var_1_33 <= 32766);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 1);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -2147483648);
 assume_abort_if_not(var_1_42 <= 2147483647);
 assume_abort_if_not(var_1_42 != 0);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= -2147483648);
 assume_abort_if_not(var_1_43 <= 2147483647);
 assume_abort_if_not(var_1_43 != 0);
 var_1_45 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 9223372.036854766000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -922337.2036854776000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 assume_abort_if_not(var_1_49 != 0.0F);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= -127);
 assume_abort_if_not(var_1_50 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (( ((var_1_2) - (var_1_3))) - (var_1_4))) > (2))) {
  if ( ((var_1_2) < (var_1_3))) {
  }
 }
 if ( (( ((var_1_20) * ( ((var_1_15) + (var_1_20))))) > (var_1_20))) {
 }
 if ( (( ((var_1_2) & (var_1_3))) > (var_1_4))) {
  if ( ((var_1_1) > (var_1_3))) {
  }
 } else {
 }
 if ( (( (( ((var_1_3) >> (var_1_23))) + (var_1_1))) < ( (((((var_1_4)) < ((var_1_2))) ? ((var_1_4)) : ((var_1_2))))))) {
 } else {
  if ( ((var_1_1) <= (var_1_26))) {
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
                                                ((
                                                 ((
           var_1_2
          ) - (
           var_1_3
          ))
         ) - (
          var_1_4
         ))
        ) > (
         2
        ))
       ) ? (
                                           ((
                                                 ((
          var_1_2
         ) < (
          var_1_3
         ))
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((unsigned short int) (
                                              ((
            32
           ) + (
            var_1_3
           ))
          ))
         ))
        ) : (
         1
        ))
       ) : (
        1
       ))
      ) && (
                                          ((
        var_1_5
       ) == (
                                           ((unsigned char) (
                                            (! (
                                             ((
           var_1_6
          ) && (
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
         var_1_20
        ) * (
                                                 ((
          var_1_15
         ) + (
          var_1_20
         ))
        ))
       ) > (
        var_1_20
       ))
      ) ? (
                                          ((
        var_1_8
       ) == (
                                           ((unsigned char) (
         var_1_7
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                         ((
      var_1_13
     ) == (
                                          ((unsigned char) (
                                           ((
                                            ((
                                             ((
          var_1_2
         ) * (
          var_1_4
         ))
        ) > (
         var_1_28
        ))
       ) && (
                                             (! (
         var_1_6
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_2
      ) & (
       var_1_3
      ))
     ) > (
      var_1_4
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_1
      ) > (
       var_1_3
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((float) (
                                             ((
         var_1_17
        ) - (
                                              ((
          var_1_18
         ) + (
          var_1_19
         ))
        ))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((float) (
                                            ((
        var_1_19
       ) + (
        var_1_18
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_20
   ) == (
                                         ((float) (
                                          ((
      var_1_18
     ) + (
                                           ((((( (( var_1_19 ) - ( 5.9f )) )) > (( var_1_21 ))) ? (( (( var_1_19 ) - ( 5.9f )) )) : (( var_1_21 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
                                                ((
      var_1_3
     ) >> (
      var_1_23
     ))
    ) + (
     var_1_1
    ))
   ) < (
                                               ((((( var_1_4 )) < (( var_1_2 ))) ? (( var_1_4 )) : (( var_1_2 ))))
   ))
  ) ? (
                                        ((
    var_1_22
   ) == (
                                         ((signed short int) (
                                          ((
                                           ((((( var_1_23 )) < (( (( var_1_1 ) + ( var_1_24 )) ))) ? (( var_1_23 )) : (( (( var_1_1 ) + ( var_1_24 )) ))))
     ) + (
                                           ((
                                            ((
        var_1_25
       ) - (
        var_1_26
       ))
      ) - (
       var_1_27
      ))
     ))
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_1
    ) <= (
     var_1_26
    ))
   ) ? (
                                         ((
     var_1_22
    ) == (
                                          ((signed short int) (
      128
     ))
    ))
   ) : (
    1
   ))
  ))
 ))
) && (
                                      ((
  var_1_28
 ) == (
                                       ((signed long int) (
   var_1_2
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
