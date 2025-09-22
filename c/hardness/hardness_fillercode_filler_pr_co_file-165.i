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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch165Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 5;
double var_1_3 = 128.625;
double var_1_4 = 1.4;
double var_1_5 = 2.4;
unsigned long int var_1_6 = 1;
unsigned long int var_1_7 = 64;
signed short int var_1_8 = 16;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 128;
signed short int var_1_11 = -64;
signed short int var_1_12 = 2;
signed short int var_1_13 = 8;
unsigned char var_1_14 = 0;
unsigned short int var_1_15 = 44473;
unsigned char var_1_16 = 0;
unsigned char var_1_17 = 0;
unsigned char var_1_18 = 0;
unsigned short int var_1_19 = 1;
signed char var_1_20 = -128;
unsigned long int var_1_22 = 2551399261;
signed char var_1_23 = -32;
float var_1_24 = 1.4;
double var_1_25 = 15.942;
double var_1_26 = 500.5;
unsigned short int var_1_27 = 0;
unsigned short int var_1_28 = 100;
unsigned short int var_1_29 = 2;
unsigned long int var_1_30 = 1;
unsigned long int var_1_32 = 2462681622;
unsigned short int var_1_33 = 64;
unsigned short int var_1_35 = 0;
unsigned short int var_1_36 = 128;
signed char var_1_37 = 0;
signed char var_1_38 = 4;
signed char var_1_39 = 32;
signed char var_1_40 = 8;
signed char var_1_41 = 64;
float var_1_42 = 0.0;
float var_1_43 = 1.6;
signed char var_1_44 = -16;
signed short int var_1_45 = -2;
signed long int var_1_46 = -128;
signed char var_1_47 = -1;
void initially(void) {
}
void step(void) {
                              if ( ((var_1_3) <= (var_1_4))) {
                               if ( ((var_1_4) <= ( (((((var_1_3)) < ((var_1_5))) ? ((var_1_3)) : ((var_1_5))))))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) + (
                                  ((((( var_1_7 )) < (( 1u ))) ? (( var_1_7 )) : (( 1u ))))
    ))
   );
  } else {
                                var_1_1 = (
    0u
   );
  }
 } else {
                               var_1_1 = (
   var_1_6
  );
 }
                              if ( (( ((var_1_6) / (var_1_9))) <= (1u))) {
                               var_1_8 = (
                                ((
    var_1_9
   ) + (
    var_1_10
   ))
  );
 } else {
                               var_1_8 = (
                                ((((( var_1_10 )) > (( (( var_1_9 ) + ( var_1_11 )) ))) ? (( var_1_10 )) : (( (( var_1_9 ) + ( var_1_11 )) ))))
  );
 }
                  if (var_1_14) {
                   var_1_30 = (
                    ((
    var_1_32
   ) - (
    128u
   ))
  );
 } else {
                   var_1_30 = (
   var_1_19
  );
 }
                               if ( ((var_1_3) <= ( ((var_1_4) + (var_1_5))))) {
                                var_1_12 = (
                                 ((
                                  ((
     18598
    ) - (
     var_1_13
    ))
   ) - (
    var_1_9
   ))
  );
 }
                  if ( ((var_1_24) >= (var_1_25))) {
                   var_1_27 = (
                    ((((( ((((( var_1_28 )) < (( 0 ))) ? (( var_1_28 )) : (( 0 )))) )) < (( var_1_29 ))) ? (( ((((( var_1_28 )) < (( 0 ))) ? (( var_1_28 )) : (( 0 )))) )) : (( var_1_29 ))))
  );
 }
                               if ( (( (( ((var_1_15) - (var_1_9))) * (var_1_6))) >= (var_1_1))) {
                                if ( ((var_1_9) < ( ((8) + (var_1_8))))) {
                                 var_1_14 = (
                                  (! (
                                   ((
      var_1_16
     ) || (
                                    (! (
       var_1_17
      ))
     ))
    ))
   );
  } else {
                                 var_1_14 = (
                                  ((
     var_1_17
    ) && (
     var_1_18
    ))
   );
  }
 } else {
                                var_1_14 = (
   var_1_16
  );
 }
                  if ( (( ((var_1_25) - (9.75))) <= ( (- (var_1_26))))) {
                   var_1_24 = (
   3.4f
  );
 }
 unsigned long int stepLocal_0 = var_1_6;
                               if ( ((stepLocal_0) < ( ((var_1_15) | (var_1_1))))) {
                                var_1_19 = (
   var_1_13
  );
 }
                  if ( (! (var_1_14))) {
                   var_1_33 = (
                    ((
    var_1_35
   ) + (
    var_1_36
   ))
  );
 }
                   if ( (( (( ((var_1_35) / (var_1_39))) * ( (~ (var_1_29))))) <= ( (( ((128) / (var_1_46))) | (var_1_1))))) {
                    if ( (( (( (((((var_1_43)) < ((var_1_42))) ? ((var_1_43)) : ((var_1_42))))) * ( (((((var_1_26)) < ((var_1_25))) ? ((var_1_26)) : ((var_1_25))))))) < (var_1_24))) {
                     var_1_45 = (
                      ((
                       ((
                        ((((-25) < 0 ) ? -(-25) : (-25)))
     ) - (
      var_1_41
     ))
    ) + (
     var_1_12
    ))
   );
  }
 }
                   var_1_47 = (
  var_1_41
 );
                               if (var_1_18) {
                                if ( ((9.25) >= (var_1_3))) {
                                 if ( (( ((var_1_6) + ( ((var_1_13) / (4u))))) >= ( ((var_1_22) - (var_1_15))))) {
                                  var_1_20 = (
     var_1_23
    );
   }
  }
 } else {
                                var_1_20 = (
   var_1_23
  );
 }
                   if (var_1_14) {
                   var_1_37 = (
                    ((
                     ((
     var_1_38
    ) + (
                      ((
      var_1_39
     ) - (
      var_1_40
     ))
    ))
   ) - (
    var_1_41
   ))
  );
 } else {
                    if ( (( ((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) > ( (( ((var_1_42) - (var_1_43))) - (256.95f))))) {
                     if ( ((var_1_35) >= (var_1_39))) {
                      var_1_37 = (
                       ((((( var_1_39 )) > (( var_1_44 ))) ? (( var_1_39 )) : (( var_1_44 ))))
    );
   }
  } else {
                     var_1_37 = (
    var_1_39
   );
  }
 }
}
void updateVariables(void) {
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 255);
 assume_abort_if_not(var_1_9 != 0);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -16383);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= -16383);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_15 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_15 >= 32767);
 assume_abort_if_not(var_1_15 <= 65535);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_17 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_17 >= 1);
 assume_abort_if_not(var_1_17 <= 1);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 1);
 assume_abort_if_not(var_1_18 <= 1);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= -127);
 assume_abort_if_not(var_1_23 <= 126);
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= 0.0F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_26 >= -922337.2036854776000e+13F && var_1_26 <= -1.0e-20F) || (var_1_26 <= 9223372.036854776000e+12F && var_1_26 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 65534);
 var_1_29 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 65534);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 2147483647);
 assume_abort_if_not(var_1_32 <= 4294967294);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 32767);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 32767);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= 31);
 assume_abort_if_not(var_1_39 <= 63);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 31);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_42 >= 4611686.018427388000e+12F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 9223372.036854776000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_43 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_43 >= 0.0F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 4611686.018427388000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -127);
 assume_abort_if_not(var_1_44 <= 126);
 var_1_46 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_46 >= -2147483648);
 assume_abort_if_not(var_1_46 <= 2147483647);
 assume_abort_if_not(var_1_46 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_3) <= (var_1_4))) {
  if ( ((var_1_4) <= ( (((((var_1_3)) < ((var_1_5))) ? ((var_1_3)) : ((var_1_5))))))) {
  } else {
  }
 } else {
 }
 if ( (( ((var_1_6) / (var_1_9))) <= (1u))) {
 } else {
 }
 if ( ((var_1_3) <= ( ((var_1_4) + (var_1_5))))) {
 }
 if ( (( (( ((var_1_15) - (var_1_9))) * (var_1_6))) >= (var_1_1))) {
  if ( ((var_1_9) < ( ((8) + (var_1_8))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_6) < ( ((var_1_15) | (var_1_1))))) {
 }
 if (var_1_18) {
  if ( ((9.25) >= (var_1_3))) {
   if ( (( ((var_1_6) + ( ((var_1_13) / (4u))))) >= ( ((var_1_22) - (var_1_15))))) {
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
       var_1_3
      ) <= (
       var_1_4
      ))
     ) ? (
                                         ((
                                               ((
        var_1_4
       ) <= (
                                                ((((( var_1_3 )) < (( var_1_5 ))) ? (( var_1_3 )) : (( var_1_5 ))))
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
                                            ((
          var_1_6
         ) + (
                                             ((((( var_1_7 )) < (( 1u ))) ? (( var_1_7 )) : (( 1u ))))
         ))
        ))
       ))
      ) : (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned long int) (
         0u
        ))
       ))
      ))
     ) : (
                                         ((
       var_1_1
      ) == (
                                          ((unsigned long int) (
        var_1_6
       ))
      ))
     ))
    ) && (
                                        ((
                                              ((
                                               ((
        var_1_6
       ) / (
        var_1_9
       ))
      ) <= (
       1u
      ))
     ) ? (
                                         ((
       var_1_8
      ) == (
                                          ((signed short int) (
                                            ((
         var_1_9
        ) + (
         var_1_10
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_8
      ) == (
                                           ((signed short int) (
                                            ((((( var_1_10 )) > (( (( var_1_9 ) + ( var_1_11 )) ))) ? (( var_1_10 )) : (( (( var_1_9 ) + ( var_1_11 )) ))))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                               ((
      var_1_3
     ) <= (
                                                ((
       var_1_4
      ) + (
       var_1_5
      ))
     ))
    ) ? (
                                          ((
      var_1_12
     ) == (
                                           ((signed short int) (
                                            ((
                                             ((
         18598
        ) - (
         var_1_13
        ))
       ) - (
        var_1_9
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
                                                 ((
       var_1_15
      ) - (
       var_1_9
      ))
     ) * (
      var_1_6
     ))
    ) >= (
     var_1_1
    ))
   ) ? (
                                         ((
                                                ((
      var_1_9
     ) < (
                                                 ((
       8
      ) + (
       var_1_8
      ))
     ))
    ) ? (
                                          ((
      var_1_14
     ) == (
                                           ((unsigned char) (
                                            (! (
                                             ((
         var_1_16
        ) || (
                                              (! (
          var_1_17
         ))
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_14
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_17
       ) && (
        var_1_18
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_14
    ) == (
                                          ((unsigned char) (
      var_1_16
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_6
   ) < (
                                               ((
     var_1_15
    ) | (
     var_1_1
    ))
   ))
  ) ? (
                                        ((
    var_1_19
   ) == (
                                         ((unsigned short int) (
     var_1_13
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_18
 ) ? (
                                       ((
                                              ((
    9.25
   ) >= (
    var_1_3
   ))
  ) ? (
                                        ((
                                               ((
                                                ((
      var_1_6
     ) + (
                                                 ((
       var_1_13
      ) / (
       4u
      ))
     ))
    ) >= (
                                                ((
      var_1_22
     ) - (
      var_1_15
     ))
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((signed char) (
      var_1_23
     ))
    ))
   ) : (
    1
   ))
  ) : (
   1
  ))
 ) : (
                                       ((
   var_1_20
  ) == (
                                        ((signed char) (
    var_1_23
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
