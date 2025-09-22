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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch139Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 128;
unsigned char var_1_2 = 1;
float var_1_4 = 5.6;
float var_1_5 = 2.1;
float var_1_6 = 9.625;
unsigned long int var_1_7 = 5;
unsigned long int var_1_8 = 0;
float var_1_9 = 100.5;
double var_1_10 = 16.524;
float var_1_11 = 4.5;
float var_1_12 = 256.5;
float var_1_13 = 256.25;
float var_1_14 = 8.5;
unsigned char var_1_15 = 2;
unsigned char var_1_16 = 16;
signed short int var_1_17 = 1;
signed long int var_1_18 = 10;
unsigned char var_1_19 = 4;
unsigned char var_1_20 = 10;
unsigned short int var_1_21 = 57151;
float var_1_22 = 9.375;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
float var_1_25 = 8.5;
signed long int var_1_26 = 10;
signed char var_1_27 = 16;
signed long int var_1_28 = -10;
float var_1_29 = 15.8;
signed long int var_1_30 = 64;
signed long int var_1_31 = 128;
double var_1_32 = 255.5;
unsigned char var_1_33 = 5;
unsigned char var_1_34 = 50;
unsigned char var_1_35 = 8;
unsigned char var_1_36 = 16;
signed char var_1_37 = 50;
unsigned long int var_1_38 = 16;
unsigned long int var_1_39 = 0;
unsigned char var_1_40 = 128;
double var_1_41 = 999999.7;
unsigned char var_1_42 = 0;
unsigned char last_1_var_1_20 = 10;
void initially(void) {
}
void step(void) {
                              if ( ((var_1_10) <= (var_1_6))) {
                               var_1_9 = (
                                ((
                                 ((
     var_1_11
    ) + (
                                  ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
    ))
   ) - (
    var_1_14
   ))
  );
 } else {
                               var_1_9 = (
                                ((((( var_1_14 )) < (( var_1_13 ))) ? (( var_1_14 )) : (( var_1_13 ))))
  );
 }
                               if ( ((var_1_10) == ( (- ( ((var_1_5) - (var_1_12))))))) {
                                var_1_15 = (
                                 ((((( (( var_1_16 ) + ( 8 )) )) > (( 50 ))) ? (( (( var_1_16 ) + ( 8 )) )) : (( 50 ))))
  );
 } else {
                                var_1_15 = (
   25
  );
 }
                               if ( ((var_1_10) >= ( (( ((var_1_5) + (var_1_4))) + (var_1_13))))) {
                                var_1_17 = (
   var_1_16
  );
 }
 unsigned char stepLocal_0 = var_1_15;
                               if (var_1_2) {
                                var_1_18 = (
   var_1_16
  );
 } else {
                                if ( ((var_1_10) == (var_1_12))) {
                                 if ( ((stepLocal_0) <= ( ((var_1_17) % (var_1_19))))) {
                                  var_1_18 = (
     var_1_19
    );
   } else {
                                  var_1_18 = (
     var_1_16
    );
   }
  }
 }
                              if ( (( ((var_1_9) * ( ((255.8f) / (var_1_4))))) >= ( ((var_1_5) - (var_1_6))))) {
                               var_1_1 = (
                                ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
  );
 } else {
                               if (var_1_2) {
                                var_1_1 = (
    var_1_7
   );
  } else {
                                var_1_1 = (
    var_1_8
   );
  }
 }
                               if ( (( (((((var_1_7)) > (( ((var_1_21) - (last_1_var_1_20))))) ? ((var_1_7)) : (( ((var_1_21) - (last_1_var_1_20))))))) > ( ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))) {
                                var_1_20 = (
                                 ((((( var_1_16 )) < (( ((((( 1 )) > (( 5 ))) ? (( 1 )) : (( 5 )))) ))) ? (( var_1_16 )) : (( ((((( 1 )) > (( 5 ))) ? (( 1 )) : (( 5 )))) ))))
  );
 } else {
                                if (var_1_2) {
                                 var_1_20 = (
    var_1_16
   );
  }
 }
            if ( ((var_1_23) || (var_1_24))) {
             var_1_22 = (
   var_1_25
  );
 }
            if ( (( (( ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))) / (-5))) < (var_1_28))) {
             if ( ((var_1_25) >= ( (((((var_1_22)) < (( (((((var_1_29)) > ((5.75f))) ? ((var_1_29)) : ((5.75f))))))) ? ((var_1_22)) : (( (((((var_1_29)) > ((5.75f))) ? ((var_1_29)) : ((5.75f))))))))))) {
              if ( (( (~ ( ((var_1_28) / (var_1_30))))) >= ( (~ (var_1_27))))) {
               var_1_26 = (
                ((((( var_1_27 )) > (( var_1_31 ))) ? (( var_1_27 )) : (( var_1_31 ))))
    );
   }
  } else {
              var_1_26 = (
    var_1_31
   );
  }
 }
             var_1_32 = (
  128.5
 );
             var_1_33 = (
  var_1_27
 );
             if (var_1_24) {
              if ( ((var_1_28) > (var_1_31))) {
               var_1_34 = (
                ((((( var_1_27 )) < (( var_1_35 ))) ? (( var_1_27 )) : (( var_1_35 ))))
   );
  }
 }
             if ( (( (( ((8) + (var_1_37))) << ( ((var_1_38) - (var_1_39))))) < ( ((((( ((var_1_31) & (var_1_30)))) < ((var_1_35))) ? (( ((var_1_31) & (var_1_30)))) : ((var_1_35))))))) {
              if ( ((255.9) < (var_1_25))) {
               var_1_36 = (
                ((((((((( (( var_1_40 ) - ( var_1_38 )) )) > (( (( var_1_37 ) + ( var_1_27 )) ))) ? (( (( var_1_40 ) - ( var_1_38 )) )) : (( (( var_1_37 ) + ( var_1_27 )) ))))) < 0 ) ? -(((((( (( var_1_40 ) - ( var_1_38 )) )) > (( (( var_1_37 ) + ( var_1_27 )) ))) ? (( (( var_1_40 ) - ( var_1_38 )) )) : (( (( var_1_37 ) + ( var_1_27 )) ))))) : (((((( (( var_1_40 ) - ( var_1_38 )) )) > (( (( var_1_37 ) + ( var_1_27 )) ))) ? (( (( var_1_40 ) - ( var_1_38 )) )) : (( (( var_1_37 ) + ( var_1_27 )) )))))))
   );
  }
 }
             if ( ((var_1_23) && (var_1_42))) {
              if ( (( (~ (var_1_40))) > ( ((var_1_34) - (var_1_33))))) {
               var_1_41 = (
    var_1_25
   );
  }
 } else {
              if ( ((var_1_23) && (var_1_24))) {
               var_1_41 = (
    var_1_25
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= 0.0F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_8 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 4294967294);
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 4611686.018427383000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 255);
 assume_abort_if_not(var_1_19 != 0);
 var_1_21 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_21 >= 32767);
 assume_abort_if_not(var_1_21 <= 65535);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 1);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 127);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 assume_abort_if_not(var_1_30 != 0);
 var_1_31 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_31 >= -2147483647);
 assume_abort_if_not(var_1_31 <= 2147483646);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 63);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 12);
 assume_abort_if_not(var_1_38 <= 24);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 12);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 127);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if ( (( ((var_1_9) * ( ((255.8f) / (var_1_4))))) >= ( ((var_1_5) - (var_1_6))))) {
 } else {
  if (var_1_2) {
  } else {
  }
 }
 if ( ((var_1_10) <= (var_1_6))) {
 } else {
 }
 if ( ((var_1_10) == ( (- ( ((var_1_5) - (var_1_12))))))) {
 } else {
 }
 if ( ((var_1_10) >= ( (( ((var_1_5) + (var_1_4))) + (var_1_13))))) {
 }
 if (var_1_2) {
 } else {
  if ( ((var_1_10) == (var_1_12))) {
   if ( ((var_1_15) <= ( ((var_1_17) % (var_1_19))))) {
   } else {
   }
  }
 }
 if ( (( (((((var_1_7)) > (( ((var_1_21) - (last_1_var_1_20))))) ? ((var_1_7)) : (( ((var_1_21) - (last_1_var_1_20))))))) > ( ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))))) {
 } else {
  if (var_1_2) {
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
        var_1_9
       ) * (
                                               ((
         255.8f
        ) / (
         var_1_4
        ))
       ))
      ) >= (
                                               ((
        var_1_5
       ) - (
        var_1_6
       ))
      ))
     ) ? (
                                         ((
       var_1_1
      ) == (
                                          ((unsigned long int) (
                                           ((((( var_1_7 )) > (( var_1_8 ))) ? (( var_1_7 )) : (( var_1_8 ))))
       ))
      ))
     ) : (
                                         ((
       var_1_2
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
         var_1_7
        ))
       ))
      ) : (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
         var_1_8
        ))
       ))
      ))
     ))
    ) && (
                                        ((
                                              ((
       var_1_10
      ) <= (
       var_1_6
      ))
     ) ? (
                                         ((
       var_1_9
      ) == (
                                          ((float) (
                                            ((
                                             ((
          var_1_11
         ) + (
                                              ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
         ))
        ) - (
         var_1_14
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_9
      ) == (
                                           ((float) (
                                            ((((( var_1_14 )) < (( var_1_13 ))) ? (( var_1_14 )) : (( var_1_13 ))))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                               ((
      var_1_10
     ) == (
                                                (- (
                                                 ((
        var_1_5
       ) - (
        var_1_12
       ))
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned char) (
                                            ((((( (( var_1_16 ) + ( 8 )) )) > (( 50 ))) ? (( (( var_1_16 ) + ( 8 )) )) : (( 50 ))))
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned char) (
       25
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_10
    ) >= (
                                                ((
                                                 ((
       var_1_5
      ) + (
       var_1_4
      ))
     ) + (
      var_1_13
     ))
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((signed short int) (
      var_1_16
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_2
  ) ? (
                                        ((
    var_1_18
   ) == (
                                         ((signed long int) (
     var_1_16
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_10
    ) == (
     var_1_12
    ))
   ) ? (
                                         ((
                                                ((
      var_1_15
     ) <= (
                                                 ((
       var_1_17
      ) % (
       var_1_19
      ))
     ))
    ) ? (
                                          ((
      var_1_18
     ) == (
                                           ((signed long int) (
       var_1_19
      ))
     ))
    ) : (
                                          ((
      var_1_18
     ) == (
                                           ((signed long int) (
       var_1_16
      ))
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
                                              ((((( var_1_7 )) > (( (( var_1_21 ) - ( last_1_var_1_20 )) ))) ? (( var_1_7 )) : (( (( var_1_21 ) - ( last_1_var_1_20 )) ))))
  ) > (
                                              ((((var_1_1) < 0 ) ? -(var_1_1) : (var_1_1)))
  ))
 ) ? (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned char) (
                                         ((((( var_1_16 )) < (( ((((( 1 )) > (( 5 ))) ? (( 1 )) : (( 5 )))) ))) ? (( var_1_16 )) : (( ((((( 1 )) > (( 5 ))) ? (( 1 )) : (( 5 )))) ))))
   ))
  ))
 ) : (
                                       ((
   var_1_2
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned char) (
     var_1_16
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
