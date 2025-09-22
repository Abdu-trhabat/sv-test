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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch49Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 10;
unsigned long int var_1_3 = 3171453299;
unsigned long int var_1_4 = 2038274679;
unsigned long int var_1_5 = 1375699353;
unsigned long int var_1_6 = 10;
unsigned long int var_1_7 = 16;
unsigned short int var_1_8 = 16;
unsigned short int var_1_9 = 128;
unsigned short int var_1_10 = 1;
unsigned short int var_1_11 = 100;
unsigned char var_1_12 = 1;
unsigned long int var_1_13 = 2;
unsigned char var_1_14 = 1;
double var_1_15 = 64.45;
float var_1_16 = 31.15;
float var_1_17 = 16.4;
double var_1_18 = 100.625;
double var_1_19 = 128.1;
unsigned char var_1_20 = 1;
unsigned char var_1_21 = 100;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 16;
unsigned char var_1_25 = 10;
float var_1_26 = 1000000000000000.4;
unsigned short int var_1_27 = 32;
unsigned char var_1_28 = 5;
unsigned char var_1_29 = 8;
unsigned short int var_1_30 = 4;
signed long int var_1_32 = -1;
signed char var_1_33 = -4;
signed char var_1_34 = 0;
double var_1_35 = 99.4;
double var_1_36 = 3.5;
double var_1_37 = 49.375;
double var_1_38 = 256.5;
double var_1_40 = 2.784;
double var_1_41 = 256.2;
double var_1_42 = 127.25;
signed short int var_1_43 = -256;
double var_1_44 = 128.75;
unsigned long int last_1_var_1_1 = 10;
unsigned char last_1_var_1_12 = 1;
unsigned char last_1_var_1_22 = 0;
void initially(void) {
}
void step(void) {
                                         if ( (! (last_1_var_1_22))) {
                                          if ( (( ((var_1_7) * ( (((((var_1_5)) < ((last_1_var_1_1))) ? ((var_1_5)) : ((last_1_var_1_1))))))) >= (var_1_4))) {
                                           var_1_12 = (
    var_1_14
   );
  }
 } else {
                                          var_1_12 = (
   0
  );
 }
                   var_1_44 = (
  var_1_40
 );
                                    if (last_1_var_1_12) {
                                     var_1_1 = (
                                      ((
                                       ((((( var_1_3 )) > (( (( var_1_4 ) + ( var_1_5 )) ))) ? (( var_1_3 )) : (( (( var_1_4 ) + ( var_1_5 )) ))))
   ) - (
                                       ((
                                        ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
    ) + (
     256u
    ))
   ))
  );
 }
                   var_1_43 = (
  var_1_20
 );
                               if ( (( ((-2) / (var_1_13))) >= ( ((var_1_11) & (var_1_4))))) {
                                 if ( ((var_1_3) >= ( ((var_1_21) + (var_1_6))))) {
                                  if ( (( (~ (var_1_10))) > (var_1_1))) {
                                   if (var_1_12) {
                                    var_1_22 = (
      var_1_23
     );
    } else {
                                    var_1_22 = (
      var_1_14
     );
    }
   } else {
                                   var_1_22 = (
     var_1_14
    );
   }
  } else {
                                  var_1_22 = (
    var_1_14
   );
  }
 } else {
                                 var_1_22 = (
   var_1_14
  );
 }
                  if ( (( ((var_1_25) % ( (((((var_1_28)) < ((var_1_29))) ? ((var_1_28)) : ((var_1_29))))))) < (var_1_1))) {
                   var_1_27 = (
                    ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))
  );
 } else {
                   var_1_27 = (
   var_1_28
  );
 }
                              var_1_8 = (
                               ((((( 25 )) > (( (( ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 )))) ) + ( (( 100 ) + ( var_1_11 )) )) ))) ? (( 25 )) : (( (( ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 )))) ) + ( (( 100 ) + ( var_1_11 )) )) ))))
 );
                   if (var_1_22) {
                    var_1_33 = (
                     ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
  );
 } else {
                    if ( (( (((((var_1_26)) > ((var_1_35))) ? ((var_1_26)) : ((var_1_35))))) > (var_1_36))) {
                     var_1_33 = (
                      ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
   );
  }
 }
                               if ( (( ((((( (- (9.5f)))) > (( (- (var_1_16))))) ? (( (- (9.5f)))) : (( (- (var_1_16))))))) < (var_1_17))) {
                                var_1_15 = (
                                 ((((( var_1_18 )) < (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
  );
 }
                   if ( ((var_1_28) >= (var_1_25))) {
                    var_1_32 = (
                     ((
    2
   ) - (
                      ((((( var_1_1 )) > (( var_1_28 ))) ? (( var_1_1 )) : (( var_1_28 ))))
   ))
  );
 } else {
                    var_1_32 = (
                     ((((( var_1_25 )) < (( var_1_1 ))) ? (( var_1_25 )) : (( var_1_1 ))))
  );
 }
                   if ( ((var_1_1) <= (var_1_20))) {
                    if ( (( ((var_1_36) + ( ((var_1_35) + (var_1_26))))) < (var_1_38))) {
                     if ( ((var_1_22) || (var_1_12))) {
                      if (var_1_12) {
                       var_1_37 = (
                        ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))
     );
    } else {
                       var_1_37 = (
                        ((
       9999.5
      ) - (
                         ((
                          ((
         9.042755488514645E18
        ) - (
         var_1_41
        ))
       ) - (
        var_1_42
       ))
      ))
     );
    }
   }
  } else {
                     var_1_37 = (
    var_1_41
   );
  }
 }
                               if ( ((var_1_14) && (var_1_12))) {
                                if ( ((var_1_4) > ( ((256u) * (var_1_11))))) {
                                 var_1_20 = (
                                  ((((( var_1_13 )) < (( var_1_21 ))) ? (( var_1_13 )) : (( var_1_21 ))))
   );
  } else {
                                 var_1_20 = (
    var_1_13
   );
  }
 }
                  var_1_24 = (
  var_1_25
 );
                  var_1_26 = (
  64.5f
 );
                   if ( (( ((var_1_15) <= ( (- (128.5f))))) || (var_1_22))) {
                    var_1_30 = (
   var_1_28
  );
 } else {
                    if (var_1_22) {
                     var_1_30 = (
    var_1_28
   );
  } else {
                     var_1_30 = (
    2
   );
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 2147483647);
 assume_abort_if_not(var_1_3 <= 4294967294);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 1073741823);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_5 >= 1073741824);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1073741824);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1073741824);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 32767);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 32767);
 var_1_11 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_13 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 15);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_16 >= -922337.2036854776000e+13F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_17 >= -922337.2036854776000e+13F && var_1_17 <= -1.0e-20F) || (var_1_17 <= 9223372.036854776000e+12F && var_1_17 >= 1.0e-20F ));
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -922337.2036854766000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854766000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -922337.2036854766000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854766000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 254);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 254);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 255);
 assume_abort_if_not(var_1_28 != 0);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 255);
 assume_abort_if_not(var_1_29 != 0);
 var_1_34 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_34 >= -126);
 assume_abort_if_not(var_1_34 <= 126);
 var_1_35 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_35 >= -922337.2036854776000e+13F && var_1_35 <= -1.0e-20F) || (var_1_35 <= 9223372.036854776000e+12F && var_1_35 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= -922337.2036854776000e+13F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854776000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 2305843.009213691400e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_12 = var_1_12;
 last_1_var_1_22 = var_1_22;
}
int property(void) {
 if (last_1_var_1_12) {
 }
 if ( (! (last_1_var_1_22))) {
  if ( (( ((var_1_7) * ( (((((var_1_5)) < ((last_1_var_1_1))) ? ((var_1_5)) : ((last_1_var_1_1))))))) >= (var_1_4))) {
  }
 } else {
 }
 if ( (( ((((( (- (9.5f)))) > (( (- (var_1_16))))) ? (( (- (9.5f)))) : (( (- (var_1_16))))))) < (var_1_17))) {
 }
 if ( ((var_1_14) && (var_1_12))) {
  if ( ((var_1_4) > ( ((256u) * (var_1_11))))) {
  } else {
  }
 }
 if ( (( ((-2) / (var_1_13))) >= ( ((var_1_11) & (var_1_4))))) {
  if ( ((var_1_3) >= ( ((var_1_21) + (var_1_6))))) {
   if ( (( (~ (var_1_10))) > (var_1_1))) {
    if (var_1_12) {
    } else {
    }
   } else {
   }
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
      last_1_var_1_12
     ) ? (
                                                ((
       var_1_1
      ) == (
                                                 ((unsigned long int) (
                                                  ((
                                                   ((((( var_1_3 )) > (( (( var_1_4 ) + ( var_1_5 )) ))) ? (( var_1_3 )) : (( (( var_1_4 ) + ( var_1_5 )) ))))
        ) - (
                                                   ((
                                                    ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
         ) + (
          256u
         ))
        ))
       ))
      ))
     ) : (
      1
     ))
    ) && (
                                         ((
      var_1_8
     ) == (
                                          ((unsigned short int) (
                                           ((((( 25 )) > (( (( ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 )))) ) + ( (( 100 ) + ( var_1_11 )) )) ))) ? (( 25 )) : (( (( ((((( var_1_9 )) < (( var_1_10 ))) ? (( var_1_9 )) : (( var_1_10 )))) ) + ( (( 100 ) + ( var_1_11 )) )) ))))
      ))
     ))
    ))
   ) && (
                                                   ((
                                                         (! (
      last_1_var_1_22
     ))
    ) ? (
                                                    ((
                                                          ((
                                                           ((
        var_1_7
       ) * (
                                                            ((((( var_1_5 )) < (( last_1_var_1_1 ))) ? (( var_1_5 )) : (( last_1_var_1_1 ))))
       ))
      ) >= (
       var_1_4
      ))
     ) ? (
                                                     ((
       var_1_12
      ) == (
                                                      ((unsigned char) (
        var_1_14
       ))
      ))
     ) : (
      1
     ))
    ) : (
                                                    ((
      var_1_12
     ) == (
                                                     ((unsigned char) (
       0
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                               ((((( (- ( 9.5f )) )) > (( (- ( var_1_16 )) ))) ? (( (- ( 9.5f )) )) : (( (- ( var_1_16 )) ))))
    ) < (
     var_1_17
    ))
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((double) (
                                           ((((( var_1_18 )) < (( var_1_19 ))) ? (( var_1_18 )) : (( var_1_19 ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_14
   ) && (
    var_1_12
   ))
  ) ? (
                                        ((
                                               ((
     var_1_4
    ) > (
                                                ((
      256u
     ) * (
      var_1_11
     ))
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((unsigned char) (
                                           ((((( var_1_13 )) < (( var_1_21 ))) ? (( var_1_13 )) : (( var_1_21 ))))
     ))
    ))
   ) : (
                                         ((
     var_1_20
    ) == (
                                          ((unsigned char) (
      var_1_13
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
    -2
   ) / (
    var_1_13
   ))
  ) >= (
                                              ((
    var_1_11
   ) & (
    var_1_4
   ))
  ))
 ) ? (
                                       ((
                                              ((
    var_1_3
   ) >= (
                                               ((
     var_1_21
    ) + (
     var_1_6
    ))
   ))
  ) ? (
                                        ((
                                               ((
                                                (~ (
      var_1_10
     ))
    ) > (
     var_1_1
    ))
   ) ? (
                                         ((
     var_1_12
    ) ? (
                                          ((
      var_1_22
     ) == (
                                           ((unsigned char) (
       var_1_23
      ))
     ))
    ) : (
                                          ((
      var_1_22
     ) == (
                                           ((unsigned char) (
       var_1_14
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_22
    ) == (
                                          ((unsigned char) (
      var_1_14
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_22
   ) == (
                                         ((unsigned char) (
     var_1_14
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_22
  ) == (
                                        ((unsigned char) (
    var_1_14
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
