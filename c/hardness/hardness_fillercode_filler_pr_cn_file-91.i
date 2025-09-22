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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch91Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -64;
signed short int var_1_5 = 8;
signed short int var_1_6 = 8;
signed short int var_1_7 = 5;
signed short int var_1_8 = 0;
signed char var_1_9 = 5;
unsigned char var_1_10 = 0;
signed char var_1_11 = 16;
signed long int var_1_12 = -10;
double var_1_13 = 100000000.8;
double var_1_14 = 1.625;
double var_1_15 = 5.2;
signed long int var_1_16 = 0;
unsigned long int var_1_17 = 8;
unsigned long int var_1_18 = 3376752988;
double var_1_19 = 1000.925;
double var_1_20 = 15.6;
double var_1_21 = 15.5;
double var_1_22 = 3.5;
signed short int var_1_23 = -32;
signed short int var_1_24 = -100;
signed long int var_1_25 = 10;
signed short int var_1_26 = -50;
unsigned char var_1_27 = 1;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 0;
unsigned char var_1_33 = 0;
float var_1_34 = 0.375;
float var_1_35 = 8.25;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
unsigned char var_1_38 = 0;
float var_1_39 = 10.5;
float var_1_40 = 8.8;
signed short int var_1_41 = -1;
signed short int var_1_42 = -10;
signed short int var_1_43 = 8;
float var_1_44 = 50.5;
unsigned char var_1_45 = 64;
signed char var_1_46 = 2;
signed char var_1_47 = 16;
unsigned short int var_1_48 = 2;
double var_1_49 = 1.5;
double var_1_50 = 999999.7;
double var_1_51 = 15.5;
unsigned long int var_1_52 = 64;
double var_1_53 = 499.25;
double var_1_54 = 256.5;
float var_1_55 = 9.25;
signed short int var_1_56 = -1;
signed long int last_1_var_1_12 = -10;
void initially(void) {
}
void step(void) {
                                var_1_16 = (
                                 ((((( var_1_6 )) > (( (( var_1_8 ) - ( 8 )) ))) ? (( var_1_6 )) : (( (( var_1_8 ) - ( 8 )) ))))
 );
            if ( (( (! ( ((var_1_29) || (var_1_30))))) && (var_1_28))) {
             var_1_27 = (
              ((
    var_1_31
   ) && (
               ((
                ((
      var_1_29
     ) || (
      var_1_32
     ))
    ) && (
                ((
      var_1_30
     ) || (
      var_1_33
     ))
    ))
   ))
  );
 } else {
             if ( (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) < (var_1_35))) {
              var_1_27 = (
               ((
     var_1_36
    ) || (
                ((
      var_1_37
     ) || (
      var_1_38
     ))
    ))
   );
  } else {
              var_1_27 = (
    var_1_31
   );
  }
 }
                                var_1_17 = (
                                 ((
   var_1_18
  ) - (
   var_1_7
  ))
 );
            var_1_39 = (
  var_1_40
 );
                                var_1_24 = (
  var_1_7
 );
             if ( (( ((var_1_53) - (var_1_54))) >= ( (( (- (var_1_51))) * ( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))))) {
              var_1_52 = (
               ((((8u) < 0 ) ? -(8u) : (8u)))
  );
 }
                                var_1_25 = (
  var_1_6
 );
                                var_1_26 = (
  var_1_5
 );
 signed short int stepLocal_1 = var_1_5;
 signed long int stepLocal_0 = ((var_1_6) << (var_1_11));
                                if (var_1_10) {
                               var_1_9 = (
   var_1_11
  );
 } else {
                                 if ( ((var_1_7) <= (stepLocal_0))) {
                                 if ( ((var_1_25) < (stepLocal_1))) {
                                  var_1_9 = (
     var_1_11
    );
   }
  } else {
                                  var_1_9 = (
    var_1_11
   );
  }
 }
 signed char stepLocal_2 = var_1_9;
                                if ( (( (((((var_1_13)) > (( ((var_1_14) + (var_1_15))))) ? ((var_1_13)) : (( ((var_1_14) + (var_1_15))))))) <= (31.5))) {
                                 if ( ((var_1_8) != (stepLocal_2))) {
                                  var_1_12 = (
    last_1_var_1_12
   );
  } else {
                                  var_1_12 = (
    var_1_7
   );
  }
 } else {
                                 var_1_12 = (
   var_1_11
  );
 }
             if ( ((var_1_39) >= (var_1_44))) {
              var_1_56 = (
               ((((( (( var_1_47 ) - ( 256 )) )) < (( var_1_45 ))) ? (( (( var_1_47 ) - ( 256 )) )) : (( var_1_45 ))))
  );
 }
                                var_1_23 = (
  var_1_12
 );
                              if ( ((var_1_24) == (var_1_23))) {
                               if ( ((var_1_23) <= ( (((((var_1_24)) > ((var_1_9))) ? ((var_1_24)) : ((var_1_9))))))) {
                                var_1_1 = (
                                 ((
     var_1_23
    ) + (
                                  ((((( (( var_1_5 ) - ( var_1_6 )) )) < (( (( var_1_7 ) - ( var_1_8 )) ))) ? (( (( var_1_5 ) - ( var_1_6 )) )) : (( (( var_1_7 ) - ( var_1_8 )) ))))
    ))
   );
  } else {
                                var_1_1 = (
                                 ((((( (( var_1_8 ) - ( var_1_6 )) )) < (( (( (( var_1_7 ) - ( var_1_5 )) ) + ( -256 )) ))) ? (( (( var_1_8 ) - ( var_1_6 )) )) : (( (( (( var_1_7 ) - ( var_1_5 )) ) + ( -256 )) ))))
   );
  }
 }
             if (var_1_30) {
              var_1_55 = (
               ((((var_1_51) < 0 ) ? -(var_1_51) : (var_1_51)))
  );
 }
 signed short int stepLocal_3 = var_1_1;
                                if ( ((var_1_9) < (stepLocal_3))) {
                                 var_1_19 = (
                                  ((
                                   ((
     var_1_20
    ) + (
     128.8
    ))
   ) + (
    var_1_21
   ))
  );
 } else {
                                 if ( ((var_1_21) <= (var_1_22))) {
                                  var_1_19 = (
    var_1_20
   );
  }
 }
            if ( ((var_1_33) && (var_1_32))) {
             var_1_41 = (
              ((((( var_1_42 )) < (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 ))))
  );
 }
             var_1_44 = (
  var_1_40
 );
             if ( (( (( ((((-100) < 0 ) ? -(-100) : (-100)))) - ( (((((var_1_46)) > ((var_1_47))) ? ((var_1_46)) : ((var_1_47))))))) >= (var_1_42))) {
              var_1_45 = (
               ((((var_1_47) < 0 ) ? -(var_1_47) : (var_1_47)))
  );
 }
             if (var_1_37) {
              var_1_48 = (
               ((
    var_1_46
   ) + (
    var_1_47
   ))
  );
 }
             var_1_49 = (
              ((
   var_1_50
  ) + (
   var_1_51
  ))
 );
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 16383);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -127);
 assume_abort_if_not(var_1_11 <= 126);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 2147483647);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -230584.3009213691400e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 2305843.009213691400e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -461168.6018427383000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 4611686.018427383000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 1);
 assume_abort_if_not(var_1_33 <= 1);
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854776000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854776000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 0);
 var_1_40 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_42 >= -32767);
 assume_abort_if_not(var_1_42 <= 32766);
 var_1_43 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_43 >= -32767);
 assume_abort_if_not(var_1_43 <= 32766);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_50 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_51 >= -461168.6018427383000e+13F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_53 >= 0.0F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 9223372.036854776000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_54 >= 0.0F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 9223372.036854776000e+12F && var_1_54 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_12 = var_1_12;
}
int property(void) {
 if ( ((var_1_24) == (var_1_23))) {
  if ( ((var_1_23) <= ( (((((var_1_24)) > ((var_1_9))) ? ((var_1_24)) : ((var_1_9))))))) {
  } else {
  }
 }
 if (var_1_10) {
 } else {
  if ( ((var_1_7) <= ( ((var_1_6) << (var_1_11))))) {
   if ( ((var_1_25) < (var_1_5))) {
   }
  } else {
  }
 }
 if ( (( (((((var_1_13)) > (( ((var_1_14) + (var_1_15))))) ? ((var_1_13)) : (( ((var_1_14) + (var_1_15))))))) <= (31.5))) {
  if ( ((var_1_8) != (var_1_9))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_9) < (var_1_1))) {
 } else {
  if ( ((var_1_21) <= (var_1_22))) {
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
           var_1_24
          ) == (
           var_1_23
          ))
         ) ? (
                                              ((
                                                    ((
            var_1_23
           ) <= (
                                                     ((((( var_1_24 )) > (( var_1_9 ))) ? (( var_1_24 )) : (( var_1_9 ))))
           ))
          ) ? (
                                               ((
            var_1_1
           ) == (
                                                ((signed short int) (
                                                 ((
              var_1_23
             ) + (
                                                  ((((( (( var_1_5 ) - ( var_1_6 )) )) < (( (( var_1_7 ) - ( var_1_8 )) ))) ? (( (( var_1_5 ) - ( var_1_6 )) )) : (( (( var_1_7 ) - ( var_1_8 )) ))))
             ))
            ))
           ))
          ) : (
                                               ((
            var_1_1
           ) == (
                                                ((signed short int) (
                                                 ((((( (( var_1_8 ) - ( var_1_6 )) )) < (( (( (( var_1_7 ) - ( var_1_5 )) ) + ( -256 )) ))) ? (( (( var_1_8 ) - ( var_1_6 )) )) : (( (( (( var_1_7 ) - ( var_1_5 )) ) + ( -256 )) ))))
            ))
           ))
          ))
         ) : (
          1
         ))
        ) && (
                                              ((
          var_1_10
         ) ? (
                                              ((
           var_1_9
          ) == (
                                               ((signed char) (
            var_1_11
           ))
          ))
         ) : (
                                               ((
                                                    ((
            var_1_7
           ) <= (
                                                     ((
             var_1_6
            ) << (
             var_1_11
            ))
           ))
          ) ? (
                                               ((
                                                     ((
             var_1_25
            ) < (
             var_1_5
            ))
           ) ? (
                                                ((
             var_1_9
            ) == (
                                                 ((signed char) (
              var_1_11
             ))
            ))
           ) : (
            1
           ))
          ) : (
                                                ((
            var_1_9
           ) == (
                                                 ((signed char) (
             var_1_11
            ))
           ))
          ))
         ))
        ))
       ) && (
                                             ((
                                                    ((
                                                     ((((( var_1_13 )) > (( (( var_1_14 ) + ( var_1_15 )) ))) ? (( var_1_13 )) : (( (( var_1_14 ) + ( var_1_15 )) ))))
         ) <= (
          31.5
         ))
        ) ? (
                                              ((
                                                     ((
           var_1_8
          ) != (
           var_1_9
          ))
         ) ? (
                                               ((
           var_1_12
          ) == (
                                                ((signed long int) (
            last_1_var_1_12
           ))
          ))
         ) : (
                                               ((
           var_1_12
          ) == (
                                                ((signed long int) (
            var_1_7
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_12
         ) == (
                                               ((signed long int) (
           var_1_11
          ))
         ))
        ))
       ))
      ) && (
                                            ((
        var_1_16
       ) == (
                                             ((signed long int) (
                                              ((((( var_1_6 )) > (( (( var_1_8 ) - ( 8 )) ))) ? (( var_1_6 )) : (( (( var_1_8 ) - ( 8 )) ))))
        ))
       ))
      ))
     ) && (
                                           ((
       var_1_17
      ) == (
                                            ((unsigned long int) (
                                             ((
         var_1_18
        ) - (
         var_1_7
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_9
      ) < (
       var_1_1
      ))
     ) ? (
                                           ((
       var_1_19
      ) == (
                                            ((double) (
                                             ((
                                              ((
          var_1_20
         ) + (
          128.8
         ))
        ) + (
         var_1_21
        ))
       ))
      ))
     ) : (
                                           ((
                                                  ((
        var_1_21
       ) <= (
        var_1_22
       ))
      ) ? (
                                            ((
        var_1_19
       ) == (
                                             ((double) (
         var_1_20
        ))
       ))
      ) : (
       1
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_23
    ) == (
                                          ((signed short int) (
      var_1_12
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_24
   ) == (
                                         ((signed short int) (
     var_1_7
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_25
  ) == (
                                        ((signed long int) (
    var_1_6
   ))
  ))
 ))
) && (
                                      ((
  var_1_26
 ) == (
                                       ((signed short int) (
   var_1_5
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
