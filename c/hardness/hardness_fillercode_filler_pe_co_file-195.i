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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch195Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = -1;
float var_1_3 = 25.6;
unsigned char var_1_4 = 0;
float var_1_6 = 7.8;
float var_1_7 = 4.2;
double var_1_8 = 3.95;
double var_1_9 = 50.4;
float var_1_10 = 32.5;
float var_1_11 = 3.8;
float var_1_12 = 32.4;
unsigned short int var_1_13 = 2;
signed short int var_1_14 = 100;
unsigned short int var_1_15 = 100;
signed char var_1_16 = -50;
signed char var_1_17 = 50;
signed char var_1_18 = -8;
signed char var_1_19 = -64;
float var_1_22 = 5.1;
unsigned short int var_1_23 = 1;
unsigned long int var_1_24 = 16;
signed short int var_1_25 = -10;
signed short int var_1_26 = 32;
signed short int var_1_27 = 5;
signed long int var_1_28 = -8;
signed long int var_1_29 = 5;
signed short int var_1_30 = -500;
signed short int var_1_31 = 8;
signed short int var_1_32 = -50;
signed short int var_1_33 = -64;
signed short int var_1_34 = -2;
signed short int var_1_35 = 25;
unsigned char var_1_36 = 128;
double var_1_37 = 2.8;
double var_1_38 = 5.75;
unsigned char var_1_39 = 128;
unsigned char var_1_40 = 1;
unsigned char var_1_41 = 8;
unsigned char var_1_42 = 25;
double var_1_43 = 32.625;
unsigned char var_1_44 = 0;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 128;
signed char var_1_47 = 4;
signed char var_1_48 = 5;
signed long int var_1_49 = -128;
signed char last_1_var_1_16 = -50;
unsigned long int last_1_var_1_24 = 16;
void initially(void) {
}
void step(void) {
                                          if ( (( ((last_1_var_1_16) ^ ( ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
                                            var_1_13 = (
   var_1_15
  );
 }
                                var_1_24 = (
  var_1_13
 );
 unsigned long int stepLocal_0 = ((var_1_24) * (1));
                              if ( ((128) >= (stepLocal_0))) {
                               var_1_1 = (
   4
  );
 }
 unsigned long int stepLocal_1 = ((var_1_24) | (var_1_13));
                              if (var_1_4) {
                               if ( ((stepLocal_1) <= (var_1_24))) {
                                var_1_3 = (
                                 ((
                                  ((
      10000.6f
     ) - (
      var_1_6
     ))
    ) + (
     var_1_7
    ))
   );
  } else {
                                var_1_3 = (
    var_1_6
   );
  }
 } else {
                               if ( (( (( ((var_1_6) - (var_1_8))) / ( (((((var_1_9)) > ((3.5))) ? ((var_1_9)) : ((3.5))))))) == (var_1_7))) {
                                var_1_3 = (
    var_1_7
   );
  }
 }
                               if ( (( ((var_1_3) / (var_1_9))) >= (var_1_6))) {
                                if (var_1_4) {
                                 var_1_10 = (
                                  ((
     var_1_6
    ) - (
     var_1_11
    ))
   );
  } else {
                                 var_1_10 = (
                                  ((
                                   ((
      var_1_6
     ) + (
      var_1_12
     ))
    ) - (
     var_1_11
    ))
   );
  }
 } else {
                                var_1_10 = (
   var_1_11
  );
 }
                                if ( ((var_1_6) < (0.375f))) {
                                 var_1_16 = (
                                  ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
  );
 }
                                if (var_1_4) {
                                 var_1_22 = (
                                  ((((( var_1_7 )) < (( var_1_6 ))) ? (( var_1_7 )) : (( var_1_6 ))))
  );
 }
                                var_1_23 = (
  var_1_15
 );
 unsigned char stepLocal_2 = var_1_4;
                                if ( (( (( (((((var_1_23)) < ((var_1_14))) ? ((var_1_23)) : ((var_1_14))))) >= ( ((var_1_24) * (var_1_18))))) && (stepLocal_2))) {
                                 if (var_1_4) {
                                  var_1_19 = (
    var_1_18
   );
  } else {
                                  var_1_19 = (
    var_1_17
   );
  }
 }
                   if ( (( ((var_1_26) - (var_1_27))) > ( (((((var_1_28)) < ((var_1_29))) ? ((var_1_28)) : ((var_1_29))))))) {
                    if ( (( ((0) ^ ( ((var_1_28) ^ (var_1_27))))) <= (var_1_26))) {
                     if ( ((var_1_29) == (var_1_26))) {
                      if ( ((var_1_28) > (-10))) {
                       var_1_25 = (
                        ((((( var_1_30 )) < (( var_1_31 ))) ? (( var_1_30 )) : (( var_1_31 ))))
     );
    } else {
                       var_1_25 = (
                        ((
       var_1_32
      ) + (
                         ((
        var_1_33
       ) + (
        var_1_34
       ))
      ))
     );
    }
   } else {
                      var_1_25 = (
                       ((
      var_1_35
     ) - (
                        ((((((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) < 0 ) ? -(((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))) : (((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32))))))
     ))
    );
   }
  }
 } else {
                    var_1_25 = (
                     ((((((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) < 0 ) ? -(((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))) : (((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35))))))
  );
 }
                   if ( (( ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) <= (var_1_38))) {
                    var_1_36 = (
                     ((((( var_1_39 )) > (( var_1_40 ))) ? (( var_1_39 )) : (( var_1_40 ))))
  );
 } else {
                    var_1_36 = (
                     ((
    var_1_41
   ) + (
                      ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
   ))
  );
 }
                   var_1_43 = (
  0.65
 );
                   var_1_44 = (
  var_1_45
 );
                   var_1_46 = (
  var_1_40
 );
                   if ( ((var_1_42) <= ( ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < 0 ) ? -(((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))))) {
                    if ( (( ((((var_1_43) < 0 ) ? -(var_1_43) : (var_1_43)))) >= (var_1_38))) {
                     var_1_47 = (
    var_1_48
   );
  } else {
                     if ( (( ((var_1_26) * (var_1_27))) >= ( ((var_1_33) / (var_1_49))))) {
                      if ( ((var_1_44) && (var_1_45))) {
                       var_1_47 = (
      var_1_48
     );
    }
   }
  }
 } else {
                    var_1_47 = (
   var_1_48
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_6 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_6 >= 0.0F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854776000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854776000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854776000e+12F && var_1_9 >= 1.0e-20F ));
 assume_abort_if_not(var_1_9 != 0.0F);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= 0.0F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= -32768);
 assume_abort_if_not(var_1_14 <= 32767);
 assume_abort_if_not(var_1_14 != 0);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -127);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= -1);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_29 >= -2147483648);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_31 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_31 >= -32767);
 assume_abort_if_not(var_1_31 <= 32766);
 var_1_32 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_32 >= -16383);
 assume_abort_if_not(var_1_32 <= 16383);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -8191);
 assume_abort_if_not(var_1_33 <= 8192);
 var_1_34 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_34 >= -8191);
 assume_abort_if_not(var_1_34 <= 8191);
 var_1_35 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_35 >= -1);
 assume_abort_if_not(var_1_35 <= 32766);
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 254);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 254);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 127);
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 127);
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_48 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_48 >= -127);
 assume_abort_if_not(var_1_48 <= 126);
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= -2147483648);
 assume_abort_if_not(var_1_49 <= 2147483647);
 assume_abort_if_not(var_1_49 != 0);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
 last_1_var_1_24 = var_1_24;
}
int property(void) {
 if ( ((128) >= ( ((var_1_24) * (1))))) {
 }
 if (var_1_4) {
  if ( (( ((var_1_24) | (var_1_13))) <= (var_1_24))) {
  } else {
  }
 } else {
  if ( (( (( ((var_1_6) - (var_1_8))) / ( (((((var_1_9)) > ((3.5))) ? ((var_1_9)) : ((3.5))))))) == (var_1_7))) {
  }
 }
 if ( (( ((var_1_3) / (var_1_9))) >= (var_1_6))) {
  if (var_1_4) {
  } else {
  }
 } else {
 }
 if ( (( ((last_1_var_1_16) ^ ( ((last_1_var_1_24) / (var_1_14))))) <= (last_1_var_1_24))) {
 }
 if ( ((var_1_6) < (0.375f))) {
 }
 if ( (( (( (((((var_1_23)) < ((var_1_14))) ? ((var_1_23)) : ((var_1_14))))) >= ( ((var_1_24) * (var_1_18))))) && (var_1_4))) {
  if (var_1_4) {
  } else {
  }
 }
 if (var_1_4) {
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
          128
         ) >= (
                                                  ((
           var_1_24
          ) * (
           1
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed char) (
           4
          ))
         ))
        ) : (
         1
        ))
       ) && (
                                            ((
         var_1_4
        ) ? (
                                             ((
                                                   ((
                                                    ((
            var_1_24
           ) | (
            var_1_13
           ))
          ) <= (
           var_1_24
          ))
         ) ? (
                                              ((
           var_1_3
          ) == (
                                               ((float) (
                                                ((
                                                 ((
              10000.6f
             ) - (
              var_1_6
             ))
            ) + (
             var_1_7
            ))
           ))
          ))
         ) : (
                                              ((
           var_1_3
          ) == (
                                               ((float) (
            var_1_6
           ))
          ))
         ))
        ) : (
                                             ((
                                                   ((
                                                    ((
                                                     ((
             var_1_6
            ) - (
             var_1_8
            ))
           ) / (
                                                     ((((( var_1_9 )) > (( 3.5 ))) ? (( var_1_9 )) : (( 3.5 ))))
           ))
          ) == (
           var_1_7
          ))
         ) ? (
                                              ((
           var_1_3
          ) == (
                                               ((float) (
            var_1_7
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
                                                    ((
          var_1_3
         ) / (
          var_1_9
         ))
        ) >= (
         var_1_6
        ))
       ) ? (
                                             ((
         var_1_4
        ) ? (
                                              ((
          var_1_10
         ) == (
                                               ((float) (
                                                ((
            var_1_6
           ) - (
            var_1_11
           ))
          ))
         ))
        ) : (
                                              ((
          var_1_10
         ) == (
                                               ((float) (
                                                ((
                                                 ((
             var_1_6
            ) + (
             var_1_12
            ))
           ) - (
            var_1_11
           ))
          ))
         ))
        ))
       ) : (
                                             ((
         var_1_10
        ) == (
                                              ((float) (
          var_1_11
         ))
        ))
       ))
      ))
     ) && (
                                                      ((
                                                             ((
                                                              ((
         last_1_var_1_16
        ) ^ (
                                                               ((
          last_1_var_1_24
         ) / (
          var_1_14
         ))
        ))
       ) <= (
        last_1_var_1_24
       ))
      ) ? (
                                                       ((
        var_1_13
       ) == (
                                                        ((unsigned short int) (
         var_1_15
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_6
      ) < (
       0.375f
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed char) (
                                             ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
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
                                                  ((((( var_1_23 )) < (( var_1_14 ))) ? (( var_1_23 )) : (( var_1_14 ))))
      ) >= (
                                                  ((
        var_1_24
       ) * (
        var_1_18
       ))
      ))
     ) && (
      var_1_4
     ))
    ) ? (
                                          ((
      var_1_4
     ) ? (
                                           ((
       var_1_19
      ) == (
                                            ((signed char) (
        var_1_18
       ))
      ))
     ) : (
                                           ((
       var_1_19
      ) == (
                                            ((signed char) (
        var_1_17
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
    var_1_4
   ) ? (
                                         ((
     var_1_22
    ) == (
                                          ((float) (
                                           ((((( var_1_7 )) < (( var_1_6 ))) ? (( var_1_7 )) : (( var_1_6 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned short int) (
    var_1_15
   ))
  ))
 ))
) && (
                                      ((
  var_1_24
 ) == (
                                       ((unsigned long int) (
   var_1_13
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
