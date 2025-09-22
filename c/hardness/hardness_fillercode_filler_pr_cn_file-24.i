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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch24Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 15.8;
signed long int var_1_2 = -10;
signed long int var_1_3 = 5;
double var_1_4 = 10.5;
double var_1_5 = 1.55;
unsigned char var_1_6 = 1;
unsigned char var_1_7 = 1;
signed char var_1_8 = -10;
signed long int var_1_9 = -2;
signed char var_1_10 = -16;
signed char var_1_11 = -4;
signed char var_1_12 = -16;
double var_1_13 = 128.55;
double var_1_14 = 2.3;
double var_1_15 = 4.8;
unsigned long int var_1_16 = 0;
signed long int var_1_17 = 5;
signed long int var_1_18 = 256;
unsigned long int var_1_19 = 50;
unsigned long int var_1_20 = 1;
signed short int var_1_21 = -50;
signed char var_1_22 = 4;
unsigned long int var_1_23 = 3326262720;
unsigned long int var_1_24 = 16;
unsigned char var_1_25 = 1;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
signed long int var_1_28 = -5;
unsigned char var_1_29 = 0;
unsigned char var_1_30 = 0;
unsigned char var_1_31 = 0;
unsigned char var_1_32 = 1;
unsigned long int var_1_33 = 200;
unsigned long int var_1_34 = 100;
unsigned long int var_1_35 = 32;
unsigned long int var_1_36 = 50;
unsigned char var_1_37 = 32;
signed char var_1_38 = 5;
double var_1_39 = 15.5;
double var_1_40 = 99.375;
signed long int var_1_41 = -10;
signed long int var_1_42 = -256;
signed long int var_1_43 = 128;
unsigned long int var_1_44 = 10000;
unsigned long int var_1_45 = 4251471014;
signed short int var_1_46 = 64;
unsigned char var_1_47 = 1;
unsigned short int var_1_48 = 64;
float var_1_49 = 49.4;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = var_1_6;
 signed long int stepLocal_0 = var_1_2;
                              if ( ((stepLocal_0) >= (var_1_3))) {
                               var_1_1 = (
                                ((
    var_1_4
   ) - (
                                 ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
   ))
  );
 } else {
                               if ( ((stepLocal_1) || (var_1_7))) {
                                var_1_1 = (
    128.75
   );
  }
 }
             if ( (( ((var_1_38) & (-10))) < (var_1_33))) {
              if ( (( (~ ( (((((var_1_33)) < ((var_1_28))) ? ((var_1_33)) : ((var_1_28))))))) > (var_1_34))) {
               if ( (( (((((var_1_33)) < (( ((var_1_35) * (var_1_38))))) ? ((var_1_33)) : (( ((var_1_35) * (var_1_38))))))) < ( ((var_1_28) ^ (var_1_34))))) {
                if (var_1_30) {
                 var_1_37 = (
      var_1_38
     );
    }
   }
  }
 }
                                var_1_25 = (
  var_1_26
 );
            if ( ((var_1_34) > ( ((((( ((16u) | (var_1_28)))) > ((var_1_35))) ? (( ((16u) | (var_1_28)))) : ((var_1_35))))))) {
             if (var_1_29) {
              var_1_33 = (
    var_1_36
   );
  }
 }
             var_1_39 = (
  var_1_40
 );
             var_1_48 = (
  var_1_37
 );
                              if ( ((var_1_3) <= ( (((((var_1_2)) < ((var_1_9))) ? ((var_1_2)) : ((var_1_9))))))) {
                               if (var_1_25) {
                                var_1_8 = (
                                 ((
     -16
    ) + (
                                  ((((( var_1_10 )) < (( (( var_1_11 ) + ( var_1_12 )) ))) ? (( var_1_10 )) : (( (( var_1_11 ) + ( var_1_12 )) ))))
    ))
   );
  }
 } else {
                               var_1_8 = (
   var_1_12
  );
 }
             if ( (! (var_1_30))) {
              var_1_41 = (
   var_1_38
  );
 } else {
              var_1_41 = (
               ((
    var_1_38
   ) + (
                ((((( var_1_37 )) > (( (( var_1_42 ) + ( var_1_43 )) ))) ? (( var_1_37 )) : (( (( var_1_42 ) + ( var_1_43 )) ))))
   ))
  );
 }
                               if ( ((var_1_2) >= ( (( ((1329162249) - (var_1_17))) - (var_1_18))))) {
                                 var_1_16 = (
                                  ((
                                   ((((( ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) )) < (( var_1_19 ))) ? (( ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) )) : (( var_1_19 ))))
   ) + (
    var_1_20
   ))
  );
 } else {
                                 if (var_1_25) {
                                  var_1_16 = (
    var_1_18
   );
  } else {
                                  var_1_16 = (
    var_1_19
   );
  }
 }
             if ( (( ((var_1_38) / (var_1_47))) > ( ((var_1_41) / (16))))) {
              var_1_46 = (
   var_1_38
  );
 } else {
              if ( (( ((((((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) < 0 ) ? -(((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))) : (((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40))))))) != ( ((((var_1_39) < 0 ) ? -(var_1_39) : (var_1_39)))))) {
               var_1_46 = (
    var_1_38
   );
  }
 }
                                if ( (( (((((var_1_16)) < ((var_1_18))) ? ((var_1_16)) : ((var_1_18))))) <= ( ((var_1_16) + (var_1_20))))) {
                                 if ( ((var_1_19) >= ( ((var_1_23) - ( (((((var_1_24)) > ((var_1_22))) ? ((var_1_24)) : ((var_1_22))))))))) {
                                  var_1_21 = (
                                   ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
   );
  } else {
                                  var_1_21 = (
    64
   );
  }
 }
             var_1_44 = (
              ((
               ((
    var_1_45
   ) - (
    var_1_37
   ))
  ) - (
   var_1_38
  ))
 );
             var_1_49 = (
  var_1_40
 );
                               if ( ((128u) >= (var_1_16))) {
                                if ( (! (var_1_25))) {
                                 var_1_13 = (
                                  ((
                                   ((
      var_1_14
     ) - (
      var_1_15
     ))
    ) + (
     0.25
    ))
   );
  } else {
                                 var_1_13 = (
    var_1_14
   );
  }
 } else {
                                if (var_1_25) {
                                 var_1_13 = (
    var_1_5
   );
  }
 }
            if ( ((32) >= (var_1_28))) {
             var_1_27 = (
              ((
               ((
     var_1_29
    ) || (
                ((
      var_1_30
     ) && (
      var_1_31
     ))
    ))
   ) && (
    var_1_32
   ))
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= 0.0F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 1);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_9 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_9 >= -2147483648);
 assume_abort_if_not(var_1_9 <= 2147483647);
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -63);
 assume_abort_if_not(var_1_10 <= 63);
 var_1_11 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_11 >= -31);
 assume_abort_if_not(var_1_11 <= 32);
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= -31);
 assume_abort_if_not(var_1_12 <= 31);
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= 0.0F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 4611686.018427383000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 4611686.018427383000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 1073741824);
 var_1_18 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 2147483647);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 2147483647);
 assume_abort_if_not(var_1_23 <= 4294967295);
 var_1_24 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_28 >= -2147483648);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 1);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_31 >= 1);
 assume_abort_if_not(var_1_31 <= 1);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 4294967295);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 4294967295);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 127);
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854766000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854766000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -536870911);
 assume_abort_if_not(var_1_42 <= 536870912);
 var_1_43 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_43 >= -536870911);
 assume_abort_if_not(var_1_43 <= 536870911);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 3221225470);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 255);
 assume_abort_if_not(var_1_47 != 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) >= (var_1_3))) {
 } else {
  if ( ((var_1_6) || (var_1_7))) {
  }
 }
 if ( ((var_1_3) <= ( (((((var_1_2)) < ((var_1_9))) ? ((var_1_2)) : ((var_1_9))))))) {
  if (var_1_25) {
  }
 } else {
 }
 if ( ((128u) >= (var_1_16))) {
  if ( (! (var_1_25))) {
  } else {
  }
 } else {
  if (var_1_25) {
  }
 }
 if ( ((var_1_2) >= ( (( ((1329162249) - (var_1_17))) - (var_1_18))))) {
 } else {
  if (var_1_25) {
  } else {
  }
 }
 if ( (( (((((var_1_16)) < ((var_1_18))) ? ((var_1_16)) : ((var_1_18))))) <= ( ((var_1_16) + (var_1_20))))) {
  if ( ((var_1_19) >= ( ((var_1_23) - ( (((((var_1_24)) > ((var_1_22))) ? ((var_1_24)) : ((var_1_22))))))))) {
  } else {
  }
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
                                             ((
       var_1_2
      ) >= (
       var_1_3
      ))
     ) ? (
                                          ((
       var_1_1
      ) == (
                                           ((double) (
                                            ((
         var_1_4
        ) - (
                                             ((((var_1_5) < 0 ) ? -(var_1_5) : (var_1_5)))
        ))
       ))
      ))
     ) : (
                                          ((
                                                ((
        var_1_6
       ) || (
        var_1_7
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((double) (
         128.75
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_3
      ) <= (
                                                ((((( var_1_2 )) < (( var_1_9 ))) ? (( var_1_2 )) : (( var_1_9 ))))
      ))
     ) ? (
                                          ((
       var_1_25
      ) ? (
                                           ((
        var_1_8
       ) == (
                                            ((signed char) (
                                             ((
          -16
         ) + (
                                              ((((( var_1_10 )) < (( (( var_1_11 ) + ( var_1_12 )) ))) ? (( var_1_10 )) : (( (( var_1_11 ) + ( var_1_12 )) ))))
         ))
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                          ((
       var_1_8
      ) == (
                                           ((signed char) (
        var_1_12
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                              ((
      128u
     ) >= (
      var_1_16
     ))
    ) ? (
                                          ((
                                               (! (
       var_1_25
      ))
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((double) (
                                             ((
                                              ((
          var_1_14
         ) - (
          var_1_15
         ))
        ) + (
         0.25
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_13
      ) == (
                                            ((double) (
        var_1_14
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_25
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((double) (
        var_1_5
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
     var_1_2
    ) >= (
                                                ((
                                                 ((
       1329162249
      ) - (
       var_1_17
      ))
     ) - (
      var_1_18
     ))
    ))
   ) ? (
                                         ((
     var_1_16
    ) == (
                                          ((unsigned long int) (
                                           ((
                                            ((((( ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) )) < (( var_1_19 ))) ? (( ((((( var_1_17 )) > (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) )) : (( var_1_19 ))))
      ) + (
       var_1_20
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_25
    ) ? (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned long int) (
       var_1_18
      ))
     ))
    ) : (
                                          ((
      var_1_16
     ) == (
                                           ((unsigned long int) (
       var_1_19
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((((( var_1_16 )) < (( var_1_18 ))) ? (( var_1_16 )) : (( var_1_18 ))))
   ) <= (
                                               ((
     var_1_16
    ) + (
     var_1_20
    ))
   ))
  ) ? (
                                        ((
                                               ((
     var_1_19
    ) >= (
                                                ((
      var_1_23
     ) - (
                                                 ((((( var_1_24 )) > (( var_1_22 ))) ? (( var_1_24 )) : (( var_1_22 ))))
     ))
    ))
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((signed short int) (
                                           ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
     ))
    ))
   ) : (
                                         ((
     var_1_21
    ) == (
                                          ((signed short int) (
      64
     ))
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((unsigned char) (
   var_1_26
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
