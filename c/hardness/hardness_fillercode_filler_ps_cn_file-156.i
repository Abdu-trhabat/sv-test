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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch156Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 32.372;
signed char var_1_3 = 100;
unsigned long int var_1_4 = 4;
unsigned long int var_1_5 = 10;
double var_1_6 = 199.6;
unsigned char var_1_7 = 0;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 8;
signed short int var_1_10 = -32;
double var_1_11 = 100000000000.4;
double var_1_12 = 63.5;
double var_1_13 = 8.9;
signed long int var_1_14 = -100;
signed long int var_1_15 = -100;
unsigned char var_1_16 = 32;
double var_1_17 = 3.6;
double var_1_18 = 64.75;
double var_1_19 = -0.6;
double var_1_20 = 10000000000.75;
double var_1_21 = 3.5;
signed short int var_1_22 = 8;
signed char var_1_23 = -128;
float var_1_24 = 99999.5;
float var_1_25 = 49.05;
float var_1_26 = 4.125;
signed char var_1_27 = -8;
signed char var_1_28 = -16;
float var_1_29 = 4.5;
float var_1_30 = 9.6;
unsigned char var_1_31 = 1;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 1;
unsigned char var_1_34 = 0;
unsigned char var_1_35 = 0;
float var_1_36 = 10.7;
float var_1_37 = 128.25;
float var_1_38 = 7.5;
unsigned char var_1_39 = 1;
unsigned char var_1_40 = 64;
unsigned char var_1_41 = 200;
unsigned char var_1_42 = 0;
unsigned char var_1_43 = 100;
unsigned char var_1_44 = 5;
unsigned char var_1_45 = 1;
unsigned short int var_1_46 = 8;
signed short int last_1_var_1_9 = 8;
double last_1_var_1_17 = 3.6;
void initially(void) {
}
void step(void) {
            if ( (( ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < 0 ) ? -(((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))) <= (var_1_25))) {
             if ( ((var_1_25) >= ( (( ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) - (var_1_26))))) {
              var_1_23 = (
               ((((((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 ))))) < 0 ) ? -(((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 ))))) : (((((( var_1_27 )) > (( var_1_28 ))) ? (( var_1_27 )) : (( var_1_28 )))))))
   );
  } else {
              var_1_23 = (
    var_1_27
   );
  }
 } else {
             var_1_23 = (
   var_1_28
  );
 }
            var_1_29 = (
  var_1_30
 );
             var_1_31 = (
  var_1_32
 );
             if (var_1_31) {
              var_1_33 = (
               ((
                ((
                 ((
      var_1_24
     ) < (
      var_1_29
     ))
    ) || (
                 (! (
      var_1_34
     ))
    ))
   ) && (
                ((
     var_1_32
    ) && (
     var_1_35
    ))
   ))
  );
 } else {
              var_1_33 = (
               (! (
    var_1_32
   ))
  );
 }
             if ( ((var_1_23) <= ( (((((var_1_27)) > (( ((var_1_28) | (10))))) ? ((var_1_27)) : (( ((var_1_28) | (10))))))))) {
              var_1_36 = (
               ((
    var_1_37
   ) - (
                ((
     8.443302205028488E18f
    ) - (
                 ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))
    ))
   ))
  );
 }
             if (var_1_35) {
              var_1_39 = (
   var_1_34
  );
 } else {
              var_1_39 = (
               ((
                ((
     var_1_38
    ) >= (
     var_1_26
    ))
   ) && (
    var_1_34
   ))
  );
 }
             if (var_1_34) {
              var_1_40 = (
               ((
                ((
     var_1_41
    ) - (
     var_1_42
    ))
   ) - (
                ((((( (( var_1_43 ) - ( 5 )) )) > (( ((((( var_1_44 )) < (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))) ? (( (( var_1_43 ) - ( 5 )) )) : (( ((((( var_1_44 )) < (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))))
   ))
  );
 }
             if ( ((-50) <= ( ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))))) {
              var_1_46 = (
               ((((( ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) )) > (( 500 ))) ? (( ((((var_1_45) < 0 ) ? -(var_1_45) : (var_1_45))) )) : (( 500 ))))
  );
 } else {
              var_1_46 = (
   var_1_44
  );
 }
                                          if ( ((last_1_var_1_17) == (var_1_13))) {
                                           if ( (( ((var_1_5) & (last_1_var_1_9))) <= (var_1_3))) {
                                            var_1_14 = (
    var_1_15
   );
  }
 }
                              if ( ((var_1_5) > (var_1_4))) {
                               var_1_7 = (
   var_1_8
  );
 }
                               if (var_1_7) {
                                var_1_9 = (
                                 ((((( (( last_1_var_1_9 ) + ( -8 )) )) < (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_10 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_10 )))) ))) ? (( (( last_1_var_1_9 ) + ( -8 )) )) : (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_10 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_10 )))) ))))
  );
 }
                               if ( ((var_1_9) > ( ((-32) | (var_1_9))))) {
                                var_1_11 = (
                                 ((
                                  ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
   ) - (
    128.5
   ))
  );
 } else {
                                var_1_11 = (
   var_1_13
  );
 }
                               if ( ((var_1_5) < (var_1_4))) {
                                var_1_16 = (
   16
  );
 } else {
                                var_1_16 = (
                                 ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) < 0 ) ? -(((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))
  );
 }
                                var_1_22 = (
  var_1_3
 );
 signed long int stepLocal_1 = (( ((var_1_3) - (5))) << (var_1_4));
 unsigned long int stepLocal_0 = var_1_5;
                              if ( ((var_1_9) > (stepLocal_1))) {
                               if ( (( (((((var_1_3)) > ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) != (stepLocal_0))) {
                                var_1_1 = (
    var_1_6
   );
  } else {
                                var_1_1 = (
    9.8
   );
  }
 } else {
                               var_1_1 = (
   var_1_6
  );
 }
                               if ( ((var_1_11) <= ( (((((1.05)) < ((var_1_6))) ? ((1.05)) : ((var_1_6))))))) {
                                 if ( (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) < (10))) {
                                  var_1_17 = (
                                   ((
                                    ((((( var_1_18 )) > (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
    ) + (
                                    ((
      var_1_20
     ) - (
      var_1_21
     ))
    ))
   );
  }
 } else {
                                 var_1_17 = (
   9999.25
  );
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_3 >= 63);
 assume_abort_if_not(var_1_3 <= 127);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 24);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 4294967295);
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 1);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -32767);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_12 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 9223372.036854766000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= 0.0F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 4611686.018427383000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= 0.0F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_26 >= 0.0F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -126);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_28 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_28 >= -126);
 assume_abort_if_not(var_1_28 <= 126);
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 0);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= 0.0F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854766000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_38 >= -461168.6018427383000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 4611686.018427383000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 190);
 assume_abort_if_not(var_1_41 <= 254);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 63);
 var_1_43 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_43 >= 63);
 assume_abort_if_not(var_1_43 <= 127);
 var_1_44 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 127);
}
void updateLastVariables(void) {
 last_1_var_1_9 = var_1_9;
 last_1_var_1_17 = var_1_17;
}
int property(void) {
 if ( ((var_1_9) > ( (( ((var_1_3) - (5))) << (var_1_4))))) {
  if ( (( (((((var_1_3)) > ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))) != (var_1_5))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_5) > (var_1_4))) {
 }
 if (var_1_7) {
 }
 if ( ((var_1_9) > ( ((-32) | (var_1_9))))) {
 } else {
 }
 if ( ((last_1_var_1_17) == (var_1_13))) {
  if ( (( ((var_1_5) & (last_1_var_1_9))) <= (var_1_3))) {
  }
 }
 if ( ((var_1_5) < (var_1_4))) {
 } else {
 }
 if ( ((var_1_11) <= ( (((((1.05)) < ((var_1_6))) ? ((1.05)) : ((var_1_6))))))) {
  if ( (( ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))) < (10))) {
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
         var_1_9
        ) > (
                                                 ((
                                                  ((
           var_1_3
          ) - (
           5
          ))
         ) << (
          var_1_4
         ))
        ))
       ) ? (
                                            ((
                                                  ((
                                                   ((((( var_1_3 )) > (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
         ) != (
          var_1_5
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((double) (
           var_1_6
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((double) (
           9.8
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((double) (
          var_1_6
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_5
        ) > (
         var_1_4
        ))
       ) ? (
                                            ((
         var_1_7
        ) == (
                                             ((unsigned char) (
          var_1_8
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
       var_1_7
      ) ? (
                                            ((
        var_1_9
       ) == (
                                             ((signed short int) (
                                              ((((( (( last_1_var_1_9 ) + ( -8 )) )) < (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_10 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_10 )))) ))) ? (( (( last_1_var_1_9 ) + ( -8 )) )) : (( ((((( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) > (( var_1_10 ))) ? (( ((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))) )) : (( var_1_10 )))) ))))
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_9
      ) > (
                                                  ((
        -32
       ) | (
        var_1_9
       ))
      ))
     ) ? (
                                           ((
       var_1_11
      ) == (
                                            ((double) (
                                             ((
                                              ((((( var_1_12 )) > (( var_1_13 ))) ? (( var_1_12 )) : (( var_1_13 ))))
        ) - (
         128.5
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_11
      ) == (
                                            ((double) (
        var_1_13
       ))
      ))
     ))
    ))
   ) && (
                                                    ((
                                                           ((
      last_1_var_1_17
     ) == (
      var_1_13
     ))
    ) ? (
                                                     ((
                                                            ((
                                                             ((
        var_1_5
       ) & (
        last_1_var_1_9
       ))
      ) <= (
       var_1_3
      ))
     ) ? (
                                                      ((
       var_1_14
      ) == (
                                                       ((signed long int) (
        var_1_15
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
     var_1_5
    ) < (
     var_1_4
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned char) (
      16
     ))
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned char) (
                                           ((((((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) < 0 ) ? -(((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3)))) : (((((var_1_3) < 0 ) ? -(var_1_3) : (var_1_3))))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_11
   ) <= (
                                               ((((( 1.05 )) < (( var_1_6 ))) ? (( 1.05 )) : (( var_1_6 ))))
   ))
  ) ? (
                                        ((
                                               ((
                                                ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
    ) < (
     10
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((double) (
                                           ((
                                            ((((( var_1_18 )) > (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
      ) + (
                                            ((
        var_1_20
       ) - (
        var_1_21
       ))
      ))
     ))
    ))
   ) : (
    1
   ))
  ) : (
                                        ((
    var_1_17
   ) == (
                                         ((double) (
     9999.25
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_22
 ) == (
                                       ((signed short int) (
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
