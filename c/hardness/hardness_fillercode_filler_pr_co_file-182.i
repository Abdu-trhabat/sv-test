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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch182Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = -0.5;
unsigned short int var_1_3 = 8;
float var_1_5 = 16.625;
float var_1_6 = 24.25;
float var_1_7 = 199.5;
unsigned char var_1_9 = 1;
float var_1_10 = 8.1;
float var_1_11 = 25.375;
float var_1_12 = 0.55;
float var_1_13 = 24.75;
unsigned short int var_1_14 = 57387;
unsigned short int var_1_15 = 64;
signed short int var_1_16 = 256;
float var_1_17 = 1.2;
signed short int var_1_18 = 30236;
signed short int var_1_19 = 0;
unsigned long int var_1_20 = 1;
unsigned short int var_1_21 = 2;
unsigned short int var_1_22 = 54553;
unsigned short int var_1_23 = 8;
signed short int var_1_24 = 32;
signed short int var_1_25 = 32;
signed short int var_1_26 = -256;
unsigned long int var_1_27 = 4;
float var_1_28 = 25.6;
unsigned long int var_1_29 = 100;
float var_1_30 = 64.375;
unsigned long int var_1_31 = 0;
unsigned long int var_1_32 = 64;
signed char var_1_33 = -4;
signed char var_1_34 = 0;
signed char var_1_35 = 0;
signed char var_1_36 = 64;
signed char var_1_37 = 1;
signed char var_1_38 = -32;
unsigned char var_1_39 = 128;
signed long int var_1_40 = 32;
unsigned short int var_1_41 = 256;
unsigned short int var_1_42 = 4;
float var_1_43 = 32.5;
unsigned char var_1_44 = 1;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
unsigned char var_1_47 = 0;
unsigned char var_1_48 = 1;
void initially(void) {
}
void step(void) {
                               if ( (( ((var_1_12) - (var_1_11))) >= ( ((var_1_10) / (var_1_17))))) {
                                var_1_16 = (
                                 ((
                                  ((
     var_1_18
    ) - (
     1
    ))
   ) - (
    var_1_19
   ))
  );
 }
                 var_1_27 = (
  2u
 );
 unsigned short int stepLocal_1 = var_1_21;
                               if ( ((var_1_17) >= (var_1_12))) {
                                if ( ((stepLocal_1) != ( (( (((((var_1_14)) > ((var_1_22))) ? ((var_1_14)) : ((var_1_22))))) - ( ((5) + (var_1_23))))))) {
                                 var_1_20 = (
                                  ((((( var_1_22 )) < (( var_1_3 ))) ? (( var_1_22 )) : (( var_1_3 ))))
   );
  } else {
                                 var_1_20 = (
    var_1_21
   );
  }
 }
                               if ( ((var_1_10) < (var_1_12))) {
                                var_1_24 = (
                                 ((
    var_1_23
   ) + (
    var_1_25
   ))
  );
 } else {
                                var_1_24 = (
                                 ((((( var_1_18 )) > (( -2 ))) ? (( var_1_18 )) : (( -2 ))))
  );
 }
                  if ( ((var_1_20) == ( ((((var_1_20) < 0 ) ? -(var_1_20) : (var_1_20)))))) {
                   var_1_28 = (
   var_1_30
  );
 }
                   if (var_1_45) {
                    if ( ((var_1_24) >= (var_1_20))) {
                     var_1_44 = (
    var_1_46
   );
  }
 }
 unsigned long int stepLocal_0 = (( ((var_1_20) * (16))) / (var_1_3));
                              if ( ((stepLocal_0) <= (var_1_20))) {
                               var_1_1 = (
                                ((((( var_1_5 )) < (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
  );
 }
                               if ( (( ((var_1_14) - (var_1_15))) != (var_1_20))) {
                                var_1_13 = (
   0.8f
  );
 }
                   if ( ((var_1_32) >= (var_1_20))) {
                   var_1_33 = (
                    ((((( (( ((((( var_1_34 )) > (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) ) - ( (( var_1_36 ) - ( var_1_37 )) )) )) < (( var_1_38 ))) ? (( (( ((((( var_1_34 )) > (( var_1_35 ))) ? (( var_1_34 )) : (( var_1_35 )))) ) - ( (( var_1_36 ) - ( var_1_37 )) )) )) : (( var_1_38 ))))
  );
 } else {
                   var_1_33 = (
                    ((
    var_1_34
   ) - (
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
   ))
  );
 }
                               if ( (( (((((var_1_1)) > ((var_1_17))) ? ((var_1_1)) : ((var_1_17))))) >= ( ((var_1_10) + ( ((var_1_13) / (128.9f))))))) {
                                if (var_1_9) {
                                  var_1_26 = (
    var_1_25
   );
  } else {
                                  var_1_26 = (
    var_1_18
   );
  }
 } else {
                                 var_1_26 = (
   var_1_19
  );
 }
                   if ( ((var_1_26) >= ( ((8) % (var_1_40))))) {
                    var_1_43 = (
                     ((((( 100.25f )) < (( var_1_30 ))) ? (( 100.25f )) : (( var_1_30 ))))
  );
 }
                   var_1_47 = (
  var_1_48
 );
                              if ( ((var_1_1) >= (var_1_13))) {
                               if (var_1_9) {
                                var_1_7 = (
                                 ((
     var_1_10
    ) + (
                                  ((
      var_1_11
     ) - (
      var_1_12
     ))
    ))
   );
  } else {
                                if ( ((var_1_3) >= (var_1_20))) {
                                 var_1_7 = (
     var_1_5
    );
   } else {
                                 var_1_7 = (
     var_1_6
    );
   }
  }
 }
                  if ( ((var_1_29) > (var_1_27))) {
                   if ( ((var_1_7) < ( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) {
                    if ( ((var_1_27) != (var_1_29))) {
                     var_1_31 = (
     var_1_32
    );
   }
  }
 }
                   if ( (( ((var_1_37) - (var_1_36))) <= ( ((var_1_35) / (var_1_40))))) {
                    var_1_39 = (
                     ((((( var_1_36 )) < (( 32 ))) ? (( var_1_36 )) : (( 32 ))))
  );
 }
                   if ( (( ((var_1_37) & ( ((var_1_20) ^ (var_1_32))))) < (var_1_20))) {
                    var_1_41 = (
                     ((((( ((((((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))) < 0 ) ? -(((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))) : (((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))))) )) < (( (( var_1_26 ) + ( var_1_42 )) ))) ? (( ((((((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))) < 0 ) ? -(((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))) : (((((( var_1_37 )) > (( var_1_36 ))) ? (( var_1_37 )) : (( var_1_36 ))))))) )) : (( (( var_1_26 ) + ( var_1_42 )) ))))
  );
 } else {
                    var_1_41 = (
                     ((((( var_1_36 )) < (( var_1_42 ))) ? (( var_1_36 )) : (( var_1_42 ))))
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 assume_abort_if_not(var_1_3 != 0);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -461168.6018427383000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 4611686.018427383000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 32767);
 assume_abort_if_not(var_1_14 <= 65535);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 32767);
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 assume_abort_if_not(var_1_17 != 0.0F);
 var_1_18 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_18 >= 16382);
 assume_abort_if_not(var_1_18 <= 32766);
 var_1_19 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 32766);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 65535);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 32767);
 assume_abort_if_not(var_1_22 <= 65535);
 var_1_23 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 16383);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -16383);
 assume_abort_if_not(var_1_25 <= 16383);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -1);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 126);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= 63);
 assume_abort_if_not(var_1_36 <= 126);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -127);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_40 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_40 >= -2147483648);
 assume_abort_if_not(var_1_40 <= 2147483647);
 assume_abort_if_not(var_1_40 != 0);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 32767);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 1);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_48 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_48 >= 1);
 assume_abort_if_not(var_1_48 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (( ((var_1_20) * (16))) / (var_1_3))) <= (var_1_20))) {
 }
 if ( ((var_1_1) >= (var_1_13))) {
  if (var_1_9) {
  } else {
   if ( ((var_1_3) >= (var_1_20))) {
   } else {
   }
  }
 }
 if ( (( ((var_1_14) - (var_1_15))) != (var_1_20))) {
 }
 if ( (( ((var_1_12) - (var_1_11))) >= ( ((var_1_10) / (var_1_17))))) {
 }
 if ( ((var_1_17) >= (var_1_12))) {
  if ( ((var_1_21) != ( (( (((((var_1_14)) > ((var_1_22))) ? ((var_1_14)) : ((var_1_22))))) - ( ((5) + (var_1_23))))))) {
  } else {
  }
 }
 if ( ((var_1_10) < (var_1_12))) {
 } else {
 }
 if ( (( (((((var_1_1)) > ((var_1_17))) ? ((var_1_1)) : ((var_1_17))))) >= ( ((var_1_10) + ( ((var_1_13) / (128.9f))))))) {
  if (var_1_9) {
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
                                                ((
                                                 ((
          var_1_20
         ) * (
          16
         ))
        ) / (
         var_1_3
        ))
       ) <= (
        var_1_20
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
                                             ((((( var_1_5 )) < (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                          ((
                                                ((
        var_1_1
       ) >= (
        var_1_13
       ))
      ) ? (
                                           ((
        var_1_9
       ) ? (
                                            ((
         var_1_7
        ) == (
                                             ((float) (
                                              ((
           var_1_10
          ) + (
                                               ((
            var_1_11
           ) - (
            var_1_12
           ))
          ))
         ))
        ))
       ) : (
                                            ((
                                                  ((
          var_1_3
         ) >= (
          var_1_20
         ))
        ) ? (
                                             ((
          var_1_7
         ) == (
                                              ((float) (
           var_1_5
          ))
         ))
        ) : (
                                             ((
          var_1_7
         ) == (
                                              ((float) (
           var_1_6
          ))
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
                                                ((
        var_1_14
       ) - (
        var_1_15
       ))
      ) != (
       var_1_20
      ))
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((float) (
        0.8f
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
       var_1_12
      ) - (
       var_1_11
      ))
     ) >= (
                                                 ((
       var_1_10
      ) / (
       var_1_17
      ))
     ))
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((signed short int) (
                                            ((
                                             ((
         var_1_18
        ) - (
         1
        ))
       ) - (
        var_1_19
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
    ) >= (
     var_1_12
    ))
   ) ? (
                                         ((
                                                ((
      var_1_21
     ) != (
                                                 ((
                                                  ((((( var_1_14 )) > (( var_1_22 ))) ? (( var_1_14 )) : (( var_1_22 ))))
      ) - (
                                                  ((
        5
       ) + (
        var_1_23
       ))
      ))
     ))
    ) ? (
                                          ((
      var_1_20
     ) == (
                                           ((unsigned long int) (
                                            ((((( var_1_22 )) < (( var_1_3 ))) ? (( var_1_22 )) : (( var_1_3 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_20
     ) == (
                                           ((unsigned long int) (
       var_1_21
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
    var_1_10
   ) < (
    var_1_12
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((signed short int) (
                                          ((
      var_1_23
     ) + (
      var_1_25
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_24
   ) == (
                                         ((signed short int) (
                                          ((((( var_1_18 )) > (( -2 ))) ? (( var_1_18 )) : (( -2 ))))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((((( var_1_1 )) > (( var_1_17 ))) ? (( var_1_1 )) : (( var_1_17 ))))
  ) >= (
                                              ((
    var_1_10
   ) + (
                                               ((
     var_1_13
    ) / (
     128.9f
    ))
   ))
  ))
 ) ? (
                                       ((
   var_1_9
  ) ? (
                                        ((
    var_1_26
   ) == (
                                         ((signed short int) (
     var_1_25
    ))
   ))
  ) : (
                                        ((
    var_1_26
   ) == (
                                         ((signed short int) (
     var_1_18
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_26
  ) == (
                                        ((signed short int) (
    var_1_19
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
