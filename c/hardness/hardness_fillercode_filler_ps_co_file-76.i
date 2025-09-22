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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch76Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 256.5;
unsigned char var_1_2 = 0;
double var_1_3 = 7.5;
double var_1_4 = 256.2;
double var_1_5 = 2.75;
signed long int var_1_6 = -64;
double var_1_7 = 8.05;
float var_1_8 = 5.25;
signed long int var_1_11 = 4;
signed long int var_1_12 = 0;
signed long int var_1_13 = -16;
unsigned short int var_1_14 = 10000;
unsigned short int var_1_15 = 5;
unsigned short int var_1_16 = 5;
unsigned short int var_1_17 = 4;
unsigned char var_1_18 = 100;
unsigned char var_1_19 = 1;
unsigned char var_1_20 = 8;
double var_1_21 = 63.25;
double var_1_22 = 1.5;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed long int var_1_27 = 0;
signed long int var_1_28 = -128;
signed short int var_1_29 = 2;
signed short int var_1_30 = 5;
unsigned char var_1_31 = 1;
signed long int var_1_32 = 32;
signed short int var_1_33 = -10;
signed long int var_1_34 = 0;
signed long int var_1_35 = 64;
signed long int var_1_36 = 1;
unsigned char var_1_37 = 1;
unsigned long int var_1_38 = 16;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
void initially(void) {
}
void step(void) {
                 var_1_21 = (
  var_1_22
 );
                  if ( ((var_1_22) < ( (- (var_1_1))))) {
                   if (var_1_24) {
                    var_1_23 = (
    var_1_25
   );
  } else {
                    var_1_23 = (
                     ((
     var_1_25
    ) || (
                      (! (
      var_1_26
     ))
    ))
   );
  }
 }
                  var_1_27 = (
  var_1_28
 );
                  var_1_29 = (
  var_1_30
 );
                  if ( ((var_1_17) == (var_1_30))) {
                   var_1_31 = (
                    (! (
    var_1_26
   ))
  );
 }
                   if ( ((var_1_30) < ( ((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))))) {
                    if ( ((var_1_25) && ( (( (~ (0u))) > (var_1_11))))) {
                     var_1_32 = (
    var_1_33
   );
  }
 }
                   if ( ((var_1_28) < (var_1_11))) {
                    var_1_34 = (
   var_1_28
  );
 } else {
                    if ( (( (- (var_1_22))) > (var_1_1))) {
                     if ( ((var_1_1) >= (var_1_22))) {
                      var_1_34 = (
                       (((((((((( var_1_35 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_35 ) - ( var_1_36 ))) : ((( var_1_35 ) - ( var_1_36 )))))) < 0 ) ? -((((((( var_1_35 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_35 ) - ( var_1_36 ))) : ((( var_1_35 ) - ( var_1_36 )))))) : ((((((( var_1_35 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_35 ) - ( var_1_36 ))) : ((( var_1_35 ) - ( var_1_36 ))))))))
    );
   } else {
                      var_1_34 = (
     var_1_14
    );
   }
  }
 }
                   var_1_37 = (
                    ((
   var_1_23
  ) && (
   var_1_25
  ))
 );
                   if ( (( (((((var_1_6)) > ((var_1_30))) ? ((var_1_6)) : ((var_1_30))))) <= ( (( ((var_1_28) & (var_1_36))) & (var_1_35))))) {
                    var_1_38 = (
                     ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
  );
 }
                   if ( ((var_1_30) < (var_1_28))) {
                    var_1_39 = (
                     (! (
                      ((
     var_1_26
    ) && (
     var_1_40
    ))
   ))
  );
 }
                              if ( (! (var_1_2))) {
                               var_1_1 = (
                                ((((( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) )) < (( var_1_5 ))) ? (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) )) : (( var_1_5 ))))
  );
 } else {
                               var_1_1 = (
   var_1_4
  );
 }
                              if ( ((var_1_5) > ( ((var_1_3) / (var_1_7))))) {
                               if ( (! (var_1_2))) {
                                var_1_6 = (
    -10
   );
  }
 }
                               if ( ((var_1_5) >= (var_1_1))) {
                                if ( (( ((((1.2) < 0 ) ? -(1.2) : (1.2)))) < (var_1_4))) {
                                 var_1_14 = (
    var_1_15
   );
  } else {
                                 var_1_14 = (
    var_1_16
   );
  }
 }
                               if (var_1_2) {
                                if ( ((var_1_1) == (var_1_5))) {
                                 if ( (( ((128) * ( (((((var_1_14)) < ((var_1_6))) ? ((var_1_14)) : ((var_1_6))))))) > (1))) {
                                  var_1_17 = (
     var_1_16
    );
   }
  } else {
                                 var_1_17 = (
    var_1_15
   );
  }
 } else {
                                var_1_17 = (
   var_1_16
  );
 }
                               if ( ((var_1_4) <= (var_1_1))) {
                                var_1_11 = (
                                 ((
    var_1_14
   ) + (
    -128
   ))
  );
 } else {
                                var_1_11 = (
                                 ((
                                  ((((( -256 )) < (( var_1_14 ))) ? (( -256 )) : (( var_1_14 ))))
   ) + (
                                  ((((( var_1_12 )) < (( ((((( var_1_13 )) > (( 256 ))) ? (( var_1_13 )) : (( 256 )))) ))) ? (( var_1_12 )) : (( ((((( var_1_13 )) > (( 256 ))) ? (( var_1_13 )) : (( 256 )))) ))))
   ))
  );
 }
 unsigned short int stepLocal_1 = var_1_16;
                               if ( (( ((var_1_14) + ( ((var_1_11) | (var_1_6))))) > (stepLocal_1))) {
                                var_1_18 = (
                                 ((
    128
   ) - (
                                  ((
     var_1_19
    ) + (
     var_1_20
    ))
   ))
  );
 }
 signed long int stepLocal_0 = ((var_1_11) * (var_1_17));
                              if ( ((stepLocal_0) >= (var_1_6))) {
                               if (var_1_2) {
                                var_1_8 = (
    var_1_4
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854766000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854766000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 assume_abort_if_not(var_1_7 != 0.0F);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= -1073741823);
 assume_abort_if_not(var_1_12 <= 1073741823);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= -1073741823);
 assume_abort_if_not(var_1_13 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 65534);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 65534);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 64);
 var_1_20 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -922337.2036854766000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854766000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483647);
 assume_abort_if_not(var_1_28 <= 2147483646);
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32766);
 var_1_33 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_33 >= -32767);
 assume_abort_if_not(var_1_33 <= 32767);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483646);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 1);
 assume_abort_if_not(var_1_40 <= 1);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (! (var_1_2))) {
 } else {
 }
 if ( ((var_1_5) > ( ((var_1_3) / (var_1_7))))) {
  if ( (! (var_1_2))) {
  }
 }
 if ( (( ((var_1_11) * (var_1_17))) >= (var_1_6))) {
  if (var_1_2) {
  }
 }
 if ( ((var_1_4) <= (var_1_1))) {
 } else {
 }
 if ( ((var_1_5) >= (var_1_1))) {
  if ( (( ((((1.2) < 0 ) ? -(1.2) : (1.2)))) < (var_1_4))) {
  } else {
  }
 }
 if (var_1_2) {
  if ( ((var_1_1) == (var_1_5))) {
   if ( (( ((128) * ( (((((var_1_14)) < ((var_1_6))) ? ((var_1_14)) : ((var_1_6))))))) > (1))) {
   }
  } else {
  }
 } else {
 }
 if ( (( ((var_1_14) + ( ((var_1_11) | (var_1_6))))) > (var_1_16))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                         ((
                                             (! (
        var_1_2
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((double) (
                                            ((((( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) )) < (( var_1_5 ))) ? (( ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 )))) )) : (( var_1_5 ))))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
         var_1_4
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_5
       ) > (
                                                 ((
         var_1_3
        ) / (
         var_1_7
        ))
       ))
      ) ? (
                                           ((
                                                 (! (
         var_1_2
        ))
       ) ? (
                                            ((
         var_1_6
        ) == (
                                             ((signed long int) (
          -10
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
                                                ((
        var_1_11
       ) * (
        var_1_17
       ))
      ) >= (
       var_1_6
      ))
     ) ? (
                                          ((
       var_1_2
      ) ? (
                                           ((
        var_1_8
       ) == (
                                            ((float) (
         var_1_4
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
      var_1_4
     ) <= (
      var_1_1
     ))
    ) ? (
                                          ((
      var_1_11
     ) == (
                                           ((signed long int) (
                                            ((
        var_1_14
       ) + (
        -128
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_11
     ) == (
                                           ((signed long int) (
                                            ((
                                             ((((( -256 )) < (( var_1_14 ))) ? (( -256 )) : (( var_1_14 ))))
       ) + (
                                             ((((( var_1_12 )) < (( ((((( var_1_13 )) > (( 256 ))) ? (( var_1_13 )) : (( 256 )))) ))) ? (( var_1_12 )) : (( ((((( var_1_13 )) > (( 256 ))) ? (( var_1_13 )) : (( 256 )))) ))))
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_5
    ) >= (
     var_1_1
    ))
   ) ? (
                                         ((
                                                ((
                                                 ((((1.2) < 0 ) ? -(1.2) : (1.2)))
     ) < (
      var_1_4
     ))
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((unsigned short int) (
       var_1_15
      ))
     ))
    ) : (
                                          ((
      var_1_14
     ) == (
                                           ((unsigned short int) (
       var_1_16
      ))
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
                                               ((
     var_1_1
    ) == (
     var_1_5
    ))
   ) ? (
                                         ((
                                                ((
                                                 ((
       128
      ) * (
                                                  ((((( var_1_14 )) < (( var_1_6 ))) ? (( var_1_14 )) : (( var_1_6 ))))
      ))
     ) > (
      1
     ))
    ) ? (
                                          ((
      var_1_17
     ) == (
                                           ((unsigned short int) (
       var_1_16
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned short int) (
      var_1_15
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_17
   ) == (
                                         ((unsigned short int) (
     var_1_16
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_14
   ) + (
                                               ((
     var_1_11
    ) | (
     var_1_6
    ))
   ))
  ) > (
   var_1_16
  ))
 ) ? (
                                       ((
   var_1_18
  ) == (
                                        ((unsigned char) (
                                         ((
     128
    ) - (
                                          ((
      var_1_19
     ) + (
      var_1_20
     ))
    ))
   ))
  ))
 ) : (
  1
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
