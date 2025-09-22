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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch170Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 255.2;
float var_1_3 = 9.375;
unsigned char var_1_4 = 1;
signed long int var_1_5 = 5;
unsigned char var_1_6 = 0;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed long int var_1_10 = -25;
signed short int var_1_11 = -4;
signed short int var_1_12 = 8;
float var_1_13 = 128.2;
float var_1_16 = 4.5;
float var_1_17 = 9999999.25;
signed long int var_1_18 = -64;
signed char var_1_19 = -2;
signed char var_1_20 = 64;
float var_1_21 = 256.5;
unsigned short int var_1_22 = 0;
signed short int var_1_23 = -16;
signed short int var_1_24 = -16;
unsigned short int var_1_25 = 256;
unsigned short int var_1_26 = 2;
double var_1_27 = 99999.28;
signed char var_1_28 = 4;
unsigned short int var_1_29 = 1;
signed char var_1_30 = 1;
signed char var_1_31 = 2;
signed char var_1_32 = 10;
float var_1_33 = 127.9;
float var_1_34 = 5.5;
signed char var_1_35 = -1;
unsigned char var_1_36 = 1;
signed long int var_1_37 = -64;
float var_1_38 = 99999999.5;
double var_1_39 = 31.5;
double var_1_40 = 256.4;
double var_1_41 = 64.5;
double var_1_42 = 999999999999.75;
float var_1_43 = 8.5;
unsigned char var_1_44 = 0;
signed long int var_1_45 = -1;
unsigned char last_1_var_1_4 = 1;
signed long int last_1_var_1_10 = -25;
float last_1_var_1_13 = 128.2;
void initially(void) {
}
void step(void) {
                                          if ( ((-5) > (last_1_var_1_10))) {
                                           if ( ((last_1_var_1_10) > (10))) {
                                            var_1_4 = (
                                             ((
                                              ((
      last_1_var_1_4
     ) && (
      var_1_6
     ))
    ) || (
     var_1_7
    ))
   );
  } else {
                                            var_1_4 = (
                                             ((
     var_1_7
    ) && (
                                              ((
      var_1_8
     ) || (
      var_1_6
     ))
    ))
   );
  }
 } else {
                                           var_1_4 = (
   var_1_9
  );
 }
 signed long int stepLocal_0 = -256;
                               if ( (( ((var_1_5) + ( ((var_1_11) + (var_1_12))))) >= (stepLocal_0))) {
                                if (var_1_4) {
                                 var_1_10 = (
    var_1_12
   );
  }
 }
                              if (var_1_4) {
                               var_1_1 = (
   var_1_3
  );
 }
                                if ( ((var_1_10) > ( ((var_1_10) / ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))))) {
                                 var_1_17 = (
   var_1_16
  );
 }
                                var_1_21 = (
  var_1_3
 );
                                if ( ((var_1_10) == ( ((var_1_5) + (var_1_11))))) {
                                 if (var_1_7) {
                                  if ( ((var_1_3) == ( (((((var_1_1)) < (( ((last_1_var_1_13) * (var_1_21))))) ? ((var_1_1)) : (( ((last_1_var_1_13) * (var_1_21))))))))) {
                                   var_1_13 = (
                                    ((((( (( var_1_16 ) + ( 15.8f )) )) > (( var_1_3 ))) ? (( (( var_1_16 ) + ( 15.8f )) )) : (( var_1_3 ))))
    );
   } else {
                                   var_1_13 = (
                                    ((((( 99999.1f )) < (( var_1_16 ))) ? (( 99999.1f )) : (( var_1_16 ))))
    );
   }
  } else {
                                  var_1_13 = (
    var_1_3
   );
  }
 } else {
                                 var_1_13 = (
   var_1_3
  );
 }
                                if ( ((var_1_17) < (var_1_3))) {
                                 if ( ((var_1_13) < ( (( ((64.1f) * (var_1_16))) / (256.95f))))) {
                                  if (var_1_9) {
                                   var_1_19 = (
     var_1_20
    );
   } else {
                                   var_1_19 = (
     -1
    );
   }
  }
 } else {
                                 var_1_19 = (
   var_1_20
  );
 }
            if ( ((var_1_23) < (var_1_24))) {
             var_1_22 = (
              ((((((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) > (( var_1_26 ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( var_1_26 ))))) < 0 ) ? -(((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) > (( var_1_26 ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( var_1_26 ))))) : (((((( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) > (( var_1_26 ))) ? (( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25))) )) : (( var_1_26 )))))))
  );
 }
            var_1_27 = (
  0.5800000000000001
 );
             if ( ((var_1_22) > ( ((var_1_25) % (var_1_29))))) {
              var_1_28 = (
   var_1_30
  );
 } else {
              var_1_28 = (
               ((((( var_1_30 )) < (( (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ) - ( var_1_32 )) ))) ? (( var_1_30 )) : (( (( ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31))) ) - ( var_1_32 )) ))))
  );
 }
             var_1_33 = (
  var_1_34
 );
             if (var_1_36) {
              var_1_35 = (
               ((((((((-64) < 0 ) ? -(-64) : (-64)))) < 0 ) ? -(((((-64) < 0 ) ? -(-64) : (-64)))) : (((((-64) < 0 ) ? -(-64) : (-64))))))
  );
 }
             if ( ((var_1_34) >= ( ((var_1_38) - (1.5f))))) {
              var_1_37 = (
               ((((( var_1_26 )) < (( var_1_32 ))) ? (( var_1_26 )) : (( var_1_32 ))))
  );
 }
             if ( (! (var_1_36))) {
              var_1_39 = (
               ((
                ((
     var_1_40
    ) + (
                 ((((( var_1_41 )) > (( var_1_42 ))) ? (( var_1_41 )) : (( var_1_42 ))))
    ))
   ) + (
                ((((2.25) < 0 ) ? -(2.25) : (2.25)))
   ))
  );
 }
             if ( (( ((var_1_37) % (var_1_29))) < (var_1_25))) {
              if ( ((99.5) >= ( (((((var_1_40)) > ((var_1_38))) ? ((var_1_40)) : ((var_1_38))))))) {
               if ( ((var_1_36) || (var_1_44))) {
                var_1_43 = (
     var_1_42
    );
   } else {
                var_1_43 = (
     var_1_40
    );
   }
  } else {
               var_1_43 = (
    var_1_34
   );
  }
 }
             if ( ((-16) < (var_1_32))) {
              if ( (! ( ((var_1_24) < (1))))) {
               var_1_45 = (
    var_1_26
   );
  } else {
               var_1_45 = (
    var_1_23
   );
  }
 } else {
              var_1_45 = (
   var_1_22
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -2147483648);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 0);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 0);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -32768);
 assume_abort_if_not(var_1_11 <= 32767);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -32768);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -461168.6018427383000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 4611686.018427383000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= -2147483647);
 assume_abort_if_not(var_1_18 <= 2147483647);
 assume_abort_if_not(var_1_18 != 0);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_23 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_23 >= -32768);
 assume_abort_if_not(var_1_23 <= 32767);
 var_1_24 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_24 >= -32768);
 assume_abort_if_not(var_1_24 <= 32767);
 var_1_25 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 65534);
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65535);
 assume_abort_if_not(var_1_29 != 0);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -127);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= -126);
 assume_abort_if_not(var_1_31 <= 126);
 var_1_32 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 126);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 1);
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -230584.3009213691400e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 2305843.009213691400e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -230584.3009213691400e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= -230584.3009213691400e+13F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 2305843.009213691400e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 1);
}
void updateLastVariables(void) {
 last_1_var_1_4 = var_1_4;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_13 = var_1_13;
}
int property(void) {
 if (var_1_4) {
 }
 if ( ((-5) > (last_1_var_1_10))) {
  if ( ((last_1_var_1_10) > (10))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_5) + ( ((var_1_11) + (var_1_12))))) >= (-256))) {
  if (var_1_4) {
  }
 }
 if ( ((var_1_10) == ( ((var_1_5) + (var_1_11))))) {
  if (var_1_7) {
   if ( ((var_1_3) == ( (((((var_1_1)) < (( ((last_1_var_1_13) * (var_1_21))))) ? ((var_1_1)) : (( ((last_1_var_1_13) * (var_1_21))))))))) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_10) > ( ((var_1_10) / ( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))))))) {
 }
 if ( ((var_1_17) < (var_1_3))) {
  if ( ((var_1_13) < ( (( ((64.1f) * (var_1_16))) / (256.95f))))) {
   if (var_1_9) {
   } else {
   }
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
       var_1_4
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((float) (
         var_1_3
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                                      ((
                                                           ((
        -5
       ) > (
        last_1_var_1_10
       ))
      ) ? (
                                                       ((
                                                             ((
         last_1_var_1_10
        ) > (
         10
        ))
       ) ? (
                                                        ((
         var_1_4
        ) == (
                                                         ((unsigned char) (
                                                          ((
                                                           ((
            last_1_var_1_4
           ) && (
            var_1_6
           ))
          ) || (
           var_1_7
          ))
         ))
        ))
       ) : (
                                                        ((
         var_1_4
        ) == (
                                                         ((unsigned char) (
                                                          ((
           var_1_7
          ) && (
                                                           ((
            var_1_8
           ) || (
            var_1_6
           ))
          ))
         ))
        ))
       ))
      ) : (
                                                       ((
        var_1_4
       ) == (
                                                        ((unsigned char) (
         var_1_9
        ))
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
                                                ((
        var_1_5
       ) + (
                                                 ((
         var_1_11
        ) + (
         var_1_12
        ))
       ))
      ) >= (
       -256
      ))
     ) ? (
                                          ((
       var_1_4
      ) ? (
                                           ((
        var_1_10
       ) == (
                                            ((signed long int) (
         var_1_12
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
      var_1_10
     ) == (
                                                 ((
       var_1_5
      ) + (
       var_1_11
      ))
     ))
    ) ? (
                                          ((
      var_1_7
     ) ? (
                                           ((
                                                  ((
        var_1_3
       ) == (
                                                   ((((( var_1_1 )) < (( (( last_1_var_1_13 ) * ( var_1_21 )) ))) ? (( var_1_1 )) : (( (( last_1_var_1_13 ) * ( var_1_21 )) ))))
       ))
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((float) (
                                              ((((( (( var_1_16 ) + ( 15.8f )) )) > (( var_1_3 ))) ? (( (( var_1_16 ) + ( 15.8f )) )) : (( var_1_3 ))))
        ))
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((float) (
                                              ((((( 99999.1f )) < (( var_1_16 ))) ? (( 99999.1f )) : (( var_1_16 ))))
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_13
      ) == (
                                            ((float) (
        var_1_3
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_13
     ) == (
                                           ((float) (
       var_1_3
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_10
    ) > (
                                                ((
      var_1_10
     ) / (
                                                 ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))
     ))
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((float) (
      var_1_16
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
    var_1_3
   ))
  ) ? (
                                        ((
                                               ((
     var_1_13
    ) < (
                                                ((
                                                 ((
       64.1f
      ) * (
       var_1_16
      ))
     ) / (
      256.95f
     ))
    ))
   ) ? (
                                         ((
     var_1_9
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((signed char) (
       var_1_20
      ))
     ))
    ) : (
                                          ((
      var_1_19
     ) == (
                                           ((signed char) (
       -1
      ))
     ))
    ))
   ) : (
    1
   ))
  ) : (
                                        ((
    var_1_19
   ) == (
                                         ((signed char) (
     var_1_20
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_21
 ) == (
                                       ((float) (
   var_1_3
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
