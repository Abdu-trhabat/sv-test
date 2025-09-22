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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch30Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned char var_1_1 = 1;
signed short int var_1_2 = -256;
unsigned char var_1_4 = 0;
double var_1_5 = 127.5;
double var_1_7 = 10000000000000.125;
double var_1_8 = 1.25;
double var_1_10 = 25.7;
signed long int var_1_11 = -2;
signed long int var_1_13 = 5;
signed long int var_1_14 = 128;
signed long int var_1_15 = 1000;
double var_1_16 = 1000000000000000.2;
signed short int var_1_17 = -64;
double var_1_18 = 256.75;
double var_1_19 = 100.4;
double var_1_20 = 4.5;
double var_1_21 = -0.5;
signed long int var_1_22 = 10;
signed char var_1_23 = -8;
double var_1_24 = 9.75;
signed char var_1_26 = 8;
signed char var_1_27 = -1;
signed short int var_1_28 = -1;
float var_1_29 = 25.7;
signed char var_1_30 = 100;
signed char var_1_31 = 16;
float var_1_32 = 9.449;
float var_1_33 = 8.2;
float var_1_34 = 32.6;
float var_1_35 = 4.9;
double var_1_36 = 8.325;
unsigned char var_1_37 = 32;
unsigned long int var_1_38 = 8;
unsigned char var_1_39 = 32;
unsigned char last_1_var_1_1 = 1;
double last_1_var_1_5 = 127.5;
signed long int last_1_var_1_15 = 1000;
double last_1_var_1_16 = 1000000000000000.2;
void initially(void) {
}
void step(void) {
                                            if (last_1_var_1_1) {
                                             if ( (( (((((last_1_var_1_5)) > ((49.75))) ? ((last_1_var_1_5)) : ((49.75))))) > (last_1_var_1_16))) {
                                              var_1_11 = (
                                               ((((( last_1_var_1_15 )) < (( ((((( (( var_1_13 ) - ( 5 )) )) > (( var_1_14 ))) ? (( (( var_1_13 ) - ( 5 )) )) : (( var_1_14 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( (( var_1_13 ) - ( 5 )) )) > (( var_1_14 ))) ? (( (( var_1_13 ) - ( 5 )) )) : (( var_1_14 )))) ))))
   );
  }
 } else {
                                             var_1_11 = (
   last_1_var_1_15
  );
 }
                   if ( ((var_1_15) != (var_1_11))) {
                    if ( ((var_1_8) < ( ((var_1_19) / (var_1_24))))) {
                     var_1_23 = (
                      ((((4) < 0 ) ? -(4) : (4)))
   );
  } else {
                     var_1_23 = (
    64
   );
  }
 } else {
                    if (var_1_1) {
                     var_1_23 = (
    var_1_26
   );
  } else {
                     var_1_23 = (
    var_1_27
   );
  }
 }
                   if ( ((var_1_31) < (var_1_11))) {
                    var_1_36 = (
                     ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
  );
 } else {
                    var_1_36 = (
                     ((((( var_1_32 )) > (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 ))))
  );
 }
                   var_1_38 = (
  var_1_11
 );
 signed long int stepLocal_0 = last_1_var_1_15;
                                          if ( (( ((last_1_var_1_15) / ( ((((-16) < 0 ) ? -(-16) : (-16)))))) >= (stepLocal_0))) {
                                           var_1_1 = (
   var_1_4
  );
 }
                   if ( (( (( ((((var_1_18) < 0 ) ? -(var_1_18) : (var_1_18)))) - (var_1_19))) == ( ((var_1_20) * (var_1_21))))) {
                    var_1_17 = (
   -4
  );
 }
                   if ( (( (( (((((var_1_30)) > ((var_1_31))) ? ((var_1_30)) : ((var_1_31))))) << (var_1_11))) <= (var_1_27))) {
                    var_1_29 = (
                     ((
                      ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 ))))
   ) - (
                      ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
   ))
  );
 } else {
                    if ( ((var_1_30) >= (var_1_26))) {
                     if ( ((var_1_15) > ( (( ((5) ^ (var_1_31))) ^ (var_1_26))))) {
                      if ( ((var_1_30) > ( ((((((((-10) < 0 ) ? -(-10) : (-10)))) < 0 ) ? -(((((-10) < 0 ) ? -(-10) : (-10)))) : (((((-10) < 0 ) ? -(-10) : (-10))))))))) {
                       var_1_29 = (
      31.1f
     );
    }
   } else {
                      var_1_29 = (
                       ((((( var_1_33 )) > (( (( 63.5f ) + ( var_1_35 )) ))) ? (( var_1_33 )) : (( (( 63.5f ) + ( var_1_35 )) ))))
    );
   }
  }
 }
                   var_1_37 = (
  var_1_30
 );
                   var_1_39 = (
  var_1_30
 );
                                if ( (( (- (var_1_11))) > ( ((var_1_11) & (var_1_13))))) {
                                 if ( ((var_1_11) <= (128))) {
                                  if (var_1_1) {
                                   var_1_15 = (
     var_1_14
    );
   } else {
                                   var_1_15 = (
     var_1_13
    );
   }
  } else {
                                  var_1_15 = (
    var_1_13
   );
  }
 } else {
                                 var_1_15 = (
   var_1_13
  );
 }
                   var_1_22 = (
  var_1_15
 );
 signed long int stepLocal_2 = var_1_15;
 unsigned char stepLocal_1 = ((var_1_11) < (var_1_15));
                               if (var_1_1) {
                                if ( ((var_1_11) >= (stepLocal_2))) {
                                 if ( ((var_1_1) || (stepLocal_1))) {
                                  var_1_5 = (
     var_1_7
    );
   }
  } else {
                                 var_1_5 = (
    var_1_7
   );
  }
 }
 signed long int stepLocal_3 = (( ((var_1_2) * (var_1_11))) * (32));
                                if ( ((var_1_14) >= (stepLocal_3))) {
                                 if (var_1_1) {
                                  var_1_16 = (
    var_1_10
   );
  } else {
                                  var_1_16 = (
    var_1_7
   );
  }
 } else {
                                 var_1_16 = (
   var_1_10
  );
 }
                   var_1_28 = (
  var_1_26
 );
                                if ( ((10.55f) < (var_1_16))) {
                                 if ( ((var_1_16) > ( ((var_1_7) * (var_1_5))))) {
                                  var_1_8 = (
                                   ((((( var_1_7 )) > (( var_1_10 ))) ? (( var_1_7 )) : (( var_1_10 ))))
   );
  }
 } else {
                                 if ( ((var_1_16) > (var_1_7))) {
                                  var_1_8 = (
    var_1_10
   );
  } else {
                                  var_1_8 = (
    var_1_7
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 1);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= -2147483647);
 assume_abort_if_not(var_1_14 <= 2147483646);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854776000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= -922337.2036854776000e+13F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_21 >= -922337.2036854776000e+13F && var_1_21 <= -1.0e-20F) || (var_1_21 <= 9223372.036854776000e+12F && var_1_21 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 assume_abort_if_not(var_1_24 != 0.0F);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -127);
 assume_abort_if_not(var_1_26 <= 126);
 var_1_27 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_27 >= -127);
 assume_abort_if_not(var_1_27 <= 126);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 127);
 var_1_31 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 127);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= 0.0F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854766000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= 0.0F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_35 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_35 >= -461168.6018427383000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 4611686.018427383000e+12F && var_1_35 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_5 = var_1_5;
 last_1_var_1_15 = var_1_15;
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 if ( (( ((last_1_var_1_15) / ( ((((-16) < 0 ) ? -(-16) : (-16)))))) >= (last_1_var_1_15))) {
 }
 if (var_1_1) {
  if ( ((var_1_11) >= (var_1_15))) {
   if ( ((var_1_1) || ( ((var_1_11) < (var_1_15))))) {
   }
  } else {
  }
 }
 if ( ((10.55f) < (var_1_16))) {
  if ( ((var_1_16) > ( ((var_1_7) * (var_1_5))))) {
  }
 } else {
  if ( ((var_1_16) > (var_1_7))) {
  } else {
  }
 }
 if (last_1_var_1_1) {
  if ( (( (((((last_1_var_1_5)) > ((49.75))) ? ((last_1_var_1_5)) : ((49.75))))) > (last_1_var_1_16))) {
  }
 } else {
 }
 if ( (( (- (var_1_11))) > ( ((var_1_11) & (var_1_13))))) {
  if ( ((var_1_11) <= (128))) {
   if (var_1_1) {
   } else {
   }
  } else {
  }
 } else {
 }
 if ( ((var_1_14) >= ( (( ((var_1_2) * (var_1_11))) * (32))))) {
  if (var_1_1) {
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
        last_1_var_1_15
       ) / (
                                                           ((((-16) < 0 ) ? -(-16) : (-16)))
       ))
      ) >= (
       last_1_var_1_15
      ))
     ) ? (
                                                     ((
       var_1_1
      ) == (
                                                      ((unsigned char) (
        var_1_4
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                         ((
      var_1_1
     ) ? (
                                          ((
                                                ((
        var_1_11
       ) >= (
        var_1_15
       ))
      ) ? (
                                           ((
                                                 ((
         var_1_1
        ) || (
                                                  ((
          var_1_11
         ) < (
          var_1_15
         ))
        ))
       ) ? (
                                            ((
         var_1_5
        ) == (
                                             ((double) (
          var_1_7
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                           ((
        var_1_5
       ) == (
                                            ((double) (
         var_1_7
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
      10.55f
     ) < (
      var_1_16
     ))
    ) ? (
                                          ((
                                               ((
       var_1_16
      ) > (
                                                ((
        var_1_7
       ) * (
        var_1_5
       ))
      ))
     ) ? (
                                           ((
       var_1_8
      ) == (
                                            ((double) (
                                             ((((( var_1_7 )) > (( var_1_10 ))) ? (( var_1_7 )) : (( var_1_10 ))))
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                          ((
                                                 ((
       var_1_16
      ) > (
       var_1_7
      ))
     ) ? (
                                           ((
       var_1_8
      ) == (
                                            ((double) (
        var_1_10
       ))
      ))
     ) : (
                                           ((
       var_1_8
      ) == (
                                            ((double) (
        var_1_7
       ))
      ))
     ))
    ))
   ))
  ) && (
                                                    ((
    last_1_var_1_1
   ) ? (
                                                     ((
                                                            ((
                                                             ((((( last_1_var_1_5 )) > (( 49.75 ))) ? (( last_1_var_1_5 )) : (( 49.75 ))))
     ) > (
      last_1_var_1_16
     ))
    ) ? (
                                                      ((
      var_1_11
     ) == (
                                                       ((signed long int) (
                                                        ((((( last_1_var_1_15 )) < (( ((((( (( var_1_13 ) - ( 5 )) )) > (( var_1_14 ))) ? (( (( var_1_13 ) - ( 5 )) )) : (( var_1_14 )))) ))) ? (( last_1_var_1_15 )) : (( ((((( (( var_1_13 ) - ( 5 )) )) > (( var_1_14 ))) ? (( (( var_1_13 ) - ( 5 )) )) : (( var_1_14 )))) ))))
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                                     ((
     var_1_11
    ) == (
                                                      ((signed long int) (
      last_1_var_1_15
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               (- (
     var_1_11
    ))
   ) > (
                                               ((
     var_1_11
    ) & (
     var_1_13
    ))
   ))
  ) ? (
                                        ((
                                               ((
     var_1_11
    ) <= (
     128
    ))
   ) ? (
                                         ((
     var_1_1
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((signed long int) (
       var_1_14
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((signed long int) (
       var_1_13
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((signed long int) (
      var_1_13
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_15
   ) == (
                                         ((signed long int) (
     var_1_13
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_14
  ) >= (
                                              ((
                                               ((
     var_1_2
    ) * (
     var_1_11
    ))
   ) * (
    32
   ))
  ))
 ) ? (
                                       ((
   var_1_1
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((double) (
     var_1_10
    ))
   ))
  ) : (
                                        ((
    var_1_16
   ) == (
                                         ((double) (
     var_1_7
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_16
  ) == (
                                        ((double) (
    var_1_10
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
