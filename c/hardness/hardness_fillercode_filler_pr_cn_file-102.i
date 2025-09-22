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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch102Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 8.375;
float var_1_2 = 5.5;
float var_1_3 = 99.3;
float var_1_4 = 63.125;
float var_1_5 = 5.5;
signed char var_1_6 = 25;
signed long int var_1_7 = -1;
float var_1_8 = 10.6;
double var_1_9 = 4.8;
double var_1_10 = 10000.75;
double var_1_11 = 5.25;
signed char var_1_12 = 2;
double var_1_13 = 3.8;
signed short int var_1_14 = -2;
unsigned char var_1_15 = 0;
signed char var_1_16 = -2;
signed char var_1_17 = -100;
double var_1_18 = 25.8;
signed char var_1_19 = -128;
signed char var_1_20 = 5;
signed char var_1_21 = 2;
signed char var_1_22 = 10;
unsigned char var_1_23 = 4;
signed long int var_1_25 = -8;
signed long int var_1_26 = -128;
unsigned char var_1_27 = 128;
signed long int var_1_28 = 16;
unsigned long int var_1_29 = 0;
unsigned long int var_1_30 = 32;
unsigned long int var_1_31 = 16;
unsigned long int var_1_32 = 8;
signed long int var_1_33 = 0;
signed long int var_1_34 = 1;
float var_1_35 = 31.8;
signed long int var_1_36 = 1275582839;
signed long int var_1_37 = 10;
signed long int var_1_38 = -128;
float var_1_39 = 100.5;
double var_1_40 = 99.5;
unsigned long int var_1_41 = 4;
unsigned char var_1_42 = 1;
unsigned char var_1_43 = 0;
unsigned long int var_1_44 = 32;
unsigned long int var_1_45 = 4188189377;
unsigned long int var_1_46 = 10;
unsigned short int var_1_47 = 100;
double var_1_48 = 4.25;
unsigned short int var_1_49 = 128;
unsigned short int var_1_50 = 100;
signed short int var_1_51 = 8;
signed short int var_1_52 = 0;
signed short int var_1_53 = 10;
signed short int var_1_54 = -64;
signed long int var_1_55 = 500;
float var_1_56 = 4.875;
void initially(void) {
}
void step(void) {
                             var_1_1 = (
                              ((
                               ((
    var_1_2
   ) - (
    var_1_3
   ))
  ) + (
   var_1_4
  ))
 );
            if ( ((var_1_33) >= ( ((((( ((var_1_38) + (var_1_31)))) > ((var_1_29))) ? (( ((var_1_38) + (var_1_31)))) : ((var_1_29))))))) {
             var_1_35 = (
   var_1_39
  );
 }
 signed long int stepLocal_0 = ((var_1_6) * (-64));
                              if ( ((stepLocal_0) == (var_1_7))) {
                               var_1_5 = (
                                ((
                                 ((
     var_1_3
    ) - (
                                  ((((( var_1_2 )) > (( var_1_8 ))) ? (( var_1_2 )) : (( var_1_8 ))))
    ))
   ) + (
    var_1_4
   ))
  );
 } else {
                               var_1_5 = (
                                ((((( var_1_8 )) > (( var_1_2 ))) ? (( var_1_8 )) : (( var_1_2 ))))
  );
 }
                              var_1_9 = (
                               ((((( var_1_10 )) < (( var_1_4 ))) ? (( var_1_10 )) : (( var_1_4 ))))
 );
             if (var_1_42) {
              var_1_51 = (
               ((((( ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) )) < (( (( var_1_53 ) + ( ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) )) ))) ? (( ((((var_1_52) < 0 ) ? -(var_1_52) : (var_1_52))) )) : (( (( var_1_53 ) + ( ((((var_1_54) < 0 ) ? -(var_1_54) : (var_1_54))) )) ))))
  );
 } else {
              var_1_51 = (
               ((((( var_1_54 )) < (( var_1_53 ))) ? (( var_1_54 )) : (( var_1_53 ))))
  );
 }
 signed long int stepLocal_1 = ((var_1_6) - (var_1_12));
                              if ( ((var_1_10) >= (var_1_2))) {
                               if ( ((stepLocal_1) <= (var_1_7))) {
                                var_1_11 = (
    var_1_13
   );
  }
 }
            if ( (( ((((( ((var_1_29) / (var_1_30)))) > ((var_1_31))) ? (( ((var_1_29) / (var_1_30)))) : ((var_1_31))))) < (var_1_32))) {
             var_1_28 = (
              ((((( var_1_33 )) > (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))) ? (( var_1_33 )) : (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))))
  );
 }
            var_1_40 = (
  var_1_39
 );
             if (var_1_42) {
              var_1_43 = (
               (! (
    0
   ))
  );
 }
             if ( (( (((((var_1_35)) < (( (((((var_1_40)) < ((var_1_39))) ? ((var_1_40)) : ((var_1_39))))))) ? ((var_1_35)) : (( (((((var_1_40)) < ((var_1_39))) ? ((var_1_40)) : ((var_1_39))))))))) >= (var_1_48))) {
              if ( ((var_1_28) <= (var_1_46))) {
               var_1_47 = (
                ((((( var_1_49 )) < (( var_1_50 ))) ? (( var_1_49 )) : (( var_1_50 ))))
   );
  }
 } else {
              var_1_47 = (
               ((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))
  );
 }
                               if ( ((var_1_8) > ( (( (((((var_1_11)) < ((var_1_9))) ? ((var_1_11)) : ((var_1_9))))) + (var_1_11))))) {
                                if (var_1_15) {
                                 var_1_14 = (
    var_1_12
   );
  }
 }
             if ( ((var_1_40) >= ( ((((( (- (var_1_35)))) < ((64.1))) ? (( (- (var_1_35)))) : ((64.1))))))) {
              var_1_44 = (
               ((
    var_1_45
   ) - (
    var_1_46
   ))
  );
 }
             var_1_56 = (
  var_1_39
 );
                               if (var_1_15) {
                                if ( ((9.76f) > (var_1_4))) {
                                 if ( ((var_1_11) <= (var_1_10))) {
                                  var_1_16 = (
     var_1_17
    );
   } else {
                                  if ( (( ((var_1_2) + (var_1_10))) == ( (( ((var_1_8) + (var_1_3))) - (var_1_18))))) {
                                   var_1_16 = (
      var_1_17
     );
    }
   }
  }
 } else {
                                var_1_16 = (
   -1
  );
 }
                               var_1_19 = (
                                ((
   var_1_20
  ) + (
                                 ((
    var_1_21
   ) + (
                                  ((
     var_1_22
    ) + (
     4
    ))
   ))
  ))
 );
             var_1_55 = (
  var_1_52
 );
                               if ( (( ((var_1_7) % ( (((((var_1_25)) < ((var_1_26))) ? ((var_1_25)) : ((var_1_26))))))) < ( ((-5) * (var_1_21))))) {
                                var_1_23 = (
                                 ((
    var_1_27
   ) - (
    var_1_12
   ))
  );
 } else {
                                var_1_23 = (
   var_1_12
  );
 }
             if ( ((var_1_36) <= ( ((-128) | (var_1_38))))) {
              if (var_1_42) {
               var_1_41 = (
                ((
     2u
    ) + (
                 ((((((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) < 0 ) ? -(((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))) : (((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37))))))
    ))
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_2 >= 0.0F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 4611686.018427383000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_3 >= 0.0F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 4611686.018427383000e+12F && var_1_3 >= 1.0e-20F ));
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -461168.6018427383000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 4611686.018427383000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 127);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_8 >= 0.0F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_10 >= -922337.2036854766000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854766000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 127);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -31);
 assume_abort_if_not(var_1_21 <= 32);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -15);
 assume_abort_if_not(var_1_22 <= 16);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= -2147483648);
 assume_abort_if_not(var_1_25 <= 2147483647);
 assume_abort_if_not(var_1_25 != 0);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 assume_abort_if_not(var_1_26 != 0);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 127);
 assume_abort_if_not(var_1_27 <= 254);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 assume_abort_if_not(var_1_30 != 0);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -2147483647);
 assume_abort_if_not(var_1_33 <= 2147483646);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483646);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1073741823);
 var_1_38 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_38 >= -2147483648);
 assume_abort_if_not(var_1_38 <= 2147483647);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854766000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 1);
 var_1_45 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_45 >= 2147483647);
 assume_abort_if_not(var_1_45 <= 4294967294);
 var_1_46 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 2147483647);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 65534);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 65534);
 var_1_52 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_52 >= -32766);
 assume_abort_if_not(var_1_52 <= 32766);
 var_1_53 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_53 >= -16383);
 assume_abort_if_not(var_1_53 <= 16383);
 var_1_54 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_54 >= -16383);
 assume_abort_if_not(var_1_54 <= 16383);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_6) * (-64))) == (var_1_7))) {
 } else {
 }
 if ( ((var_1_10) >= (var_1_2))) {
  if ( (( ((var_1_6) - (var_1_12))) <= (var_1_7))) {
  }
 }
 if ( ((var_1_8) > ( (( (((((var_1_11)) < ((var_1_9))) ? ((var_1_11)) : ((var_1_9))))) + (var_1_11))))) {
  if (var_1_15) {
  }
 }
 if (var_1_15) {
  if ( ((9.76f) > (var_1_4))) {
   if ( ((var_1_11) <= (var_1_10))) {
   } else {
    if ( (( ((var_1_2) + (var_1_10))) == ( (( ((var_1_8) + (var_1_3))) - (var_1_18))))) {
    }
   }
  }
 } else {
 }
 if ( (( ((var_1_7) % ( (((((var_1_25)) < ((var_1_26))) ? ((var_1_25)) : ((var_1_26))))))) < ( ((-5) * (var_1_21))))) {
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
        var_1_1
       ) == (
                                          ((float) (
                                           ((
                                            ((
           var_1_2
          ) - (
           var_1_3
          ))
         ) + (
          var_1_4
         ))
        ))
       ))
      ) && (
                                          ((
                                                ((
                                                 ((
          var_1_6
         ) * (
          -64
         ))
        ) == (
         var_1_7
        ))
       ) ? (
                                           ((
         var_1_5
        ) == (
                                            ((float) (
                                             ((
                                              ((
            var_1_3
           ) - (
                                                ((((( var_1_2 )) > (( var_1_8 ))) ? (( var_1_2 )) : (( var_1_8 ))))
           ))
          ) + (
           var_1_4
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_5
        ) == (
                                             ((float) (
                                              ((((( var_1_8 )) > (( var_1_2 ))) ? (( var_1_8 )) : (( var_1_2 ))))
         ))
        ))
       ))
      ))
     ) && (
                                          ((
       var_1_9
      ) == (
                                           ((double) (
                                            ((((( var_1_10 )) < (( var_1_4 ))) ? (( var_1_10 )) : (( var_1_4 ))))
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_10
      ) >= (
       var_1_2
      ))
     ) ? (
                                          ((
                                                ((
                                                 ((
         var_1_6
        ) - (
         var_1_12
        ))
       ) <= (
        var_1_7
       ))
      ) ? (
                                           ((
        var_1_11
       ) == (
                                            ((double) (
         var_1_13
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
      var_1_8
     ) > (
                                                 ((
                                                  ((((( var_1_11 )) < (( var_1_9 ))) ? (( var_1_11 )) : (( var_1_9 ))))
      ) + (
       var_1_11
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) ? (
                                           ((
       var_1_14
      ) == (
                                            ((signed short int) (
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
    var_1_15
   ) ? (
                                         ((
                                                ((
      9.76f
     ) > (
      var_1_4
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_11
      ) <= (
       var_1_10
      ))
     ) ? (
                                           ((
       var_1_16
      ) == (
                                            ((signed char) (
        var_1_17
       ))
      ))
     ) : (
                                           ((
                                                  ((
                                                   ((
         var_1_2
        ) + (
         var_1_10
        ))
       ) == (
                                                   ((
                                                    ((
          var_1_8
         ) + (
          var_1_3
         ))
        ) - (
         var_1_18
        ))
       ))
      ) ? (
                                            ((
        var_1_16
       ) == (
                                             ((signed char) (
         var_1_17
        ))
       ))
      ) : (
       1
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
     var_1_16
    ) == (
                                          ((signed char) (
      -1
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_19
  ) == (
                                        ((signed char) (
                                         ((
     var_1_20
    ) + (
                                          ((
      var_1_21
     ) + (
                                           ((
       var_1_22
      ) + (
       4
      ))
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_7
   ) % (
                                               ((((( var_1_25 )) < (( var_1_26 ))) ? (( var_1_25 )) : (( var_1_26 ))))
   ))
  ) < (
                                              ((
    -5
   ) * (
    var_1_21
   ))
  ))
 ) ? (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned char) (
                                         ((
     var_1_27
    ) - (
     var_1_12
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_23
  ) == (
                                        ((unsigned char) (
    var_1_12
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
