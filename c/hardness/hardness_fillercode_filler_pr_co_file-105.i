// This file is part of the SV-Benchmarks collection of verification tasks:
// https://gitlab.com/sosy-lab/benchmarking/sv-benchmarks
//
// SPDX-FileCopyrightText: 2025 Jana Berger
//
// SPDX-License-Identifier: GPL-3.0-or-later

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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch105Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 128.3;
unsigned char var_1_2 = 1;
float var_1_4 = 0.25;
float var_1_5 = 15.55;
signed short int var_1_6 = 50;
signed short int var_1_7 = -128;
unsigned char var_1_8 = 0;
signed short int var_1_9 = 500;
signed short int var_1_10 = 25;
signed short int var_1_11 = 10000;
signed short int var_1_12 = 25;
unsigned char var_1_13 = 10;
unsigned char var_1_14 = 64;
unsigned char var_1_15 = 8;
unsigned char var_1_16 = 4;
signed short int var_1_17 = -5;
double var_1_18 = 3.5;
double var_1_19 = 25.5;
double var_1_20 = 2.5;
double var_1_21 = 31.15;
double var_1_22 = 5.5;
double var_1_23 = 2.5;
unsigned long int var_1_24 = 128;
float var_1_26 = 0.5;
unsigned long int var_1_27 = 1;
unsigned char var_1_28 = 0;
unsigned char var_1_29 = 1;
unsigned long int var_1_30 = 64;
unsigned long int var_1_31 = 128;
unsigned long int var_1_32 = 100;
unsigned long int var_1_33 = 1;
signed long int var_1_34 = -5;
unsigned long int var_1_35 = 3143845968;
unsigned long int var_1_36 = 1944552567;
unsigned long int var_1_37 = 2;
unsigned char var_1_38 = 1;
double var_1_39 = 255.7;
double var_1_40 = 5.5;
double var_1_41 = 5.75;
unsigned char var_1_42 = 0;
float var_1_43 = 10000000000000.5;
float var_1_44 = 7.75;
signed char var_1_45 = -128;
signed char var_1_46 = 10;
unsigned short int var_1_47 = 4;
double var_1_48 = 0.125;
unsigned char var_1_49 = 1;
unsigned short int var_1_50 = 256;
signed short int var_1_51 = -100;
void initially(void) {
}
void step(void) {
                               if ( (( ((var_1_18) - ( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))))) > (0.0))) {
                                var_1_17 = (
   var_1_9
  );
 }
                               if ( ((var_1_2) || (var_1_8))) {
                                var_1_21 = (
                                 ((
                                  ((
     var_1_22
    ) + (
     var_1_23
    ))
   ) + (
    3.75
   ))
  );
 }
                              if ( ((var_1_21) != (255.6))) {
                               var_1_1 = (
   var_1_4
  );
 } else {
                               var_1_1 = (
                                ((((( var_1_4 )) > (( var_1_5 ))) ? (( var_1_4 )) : (( var_1_5 ))))
  );
 }
                  if ( ((var_1_28) || (var_1_29))) {
                   if ( (( ((var_1_30) & (var_1_31))) > ( ((var_1_32) ^ ( ((var_1_33) | (16u))))))) {
                    if (var_1_29) {
                     if ( (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))) <= (var_1_33))) {
                      var_1_27 = (
                       ((
                        ((((var_1_35) < 0 ) ? -(var_1_35) : (var_1_35)))
      ) - (
                        ((
        var_1_36
       ) - (
        var_1_37
       ))
      ))
     );
    } else {
                      var_1_27 = (
      var_1_37
     );
    }
   }
  }
 }
                   if ( (( (((((((((var_1_39)) < ((var_1_40))) ? ((var_1_39)) : ((var_1_40))))) < 0 ) ? -((((((var_1_39)) < ((var_1_40))) ? ((var_1_39)) : ((var_1_40))))) : ((((((var_1_39)) < ((var_1_40))) ? ((var_1_39)) : ((var_1_40)))))))) >= ( ((var_1_41) / (9.8))))) {
                    var_1_38 = (
   var_1_42
  );
 }
                   if ( ((var_1_40) < (var_1_26))) {
                    var_1_51 = (
                     ((((((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) < 0 ) ? -(((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24)))) : (((((var_1_24) < 0 ) ? -(var_1_24) : (var_1_24))))))
  );
 }
                              if (var_1_2) {
                               var_1_6 = (
   var_1_7
  );
 } else {
                               if ( ((var_1_21) >= (var_1_1))) {
                                if (var_1_8) {
                                 var_1_6 = (
                                  ((
                                   ((
       var_1_9
      ) - (
       var_1_10
      ))
     ) + (
                                   ((
                                    ((
        var_1_11
       ) - (
        100
       ))
      ) - (
       var_1_12
      ))
     ))
    );
   } else {
                                 var_1_6 = (
     64
    );
   }
  } else {
                                var_1_6 = (
    var_1_11
   );
  }
 }
                               if ( (( ((var_1_19) - (var_1_20))) > ( ((((( (((((var_1_1)) < ((var_1_21))) ? ((var_1_1)) : ((var_1_21)))))) < ((var_1_21))) ? (( (((((var_1_1)) < ((var_1_21))) ? ((var_1_1)) : ((var_1_21)))))) : ((var_1_21))))))) {
                                if ( (! (var_1_2))) {
                                 var_1_24 = (
                                  ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
   );
  } else {
                                 var_1_24 = (
    var_1_9
   );
  }
 }
                               if ( ((var_1_7) >= ( (((((var_1_24)) > ((var_1_11))) ? ((var_1_24)) : ((var_1_11))))))) {
                                var_1_26 = (
                                  ((
    var_1_22
   ) + (
    var_1_23
   ))
  );
 }
                               if ( ((var_1_26) == (var_1_4))) {
                                var_1_13 = (
                                 ((((( var_1_14 )) > (( ((((( var_1_15 )) > (( var_1_16 ))) ? (( var_1_15 )) : (( var_1_16 )))) ))) ? (( var_1_14 )) : (( ((((( var_1_15 )) > (( var_1_16 ))) ? (( var_1_15 )) : (( var_1_16 )))) ))))
  );
 } else {
                                if (var_1_8) {
                                 var_1_13 = (
    0
   );
  } else {
                                 var_1_13 = (
    var_1_15
   );
  }
 }
                   if ( ((var_1_24) <= ( ((var_1_36) % (var_1_35))))) {
                    if ( ((1) <= ( (( ((var_1_37) - (128))) % (var_1_36))))) {
                     var_1_43 = (
                      (((((( 9999999.25f ) + ( var_1_44 ))) < 0 ) ? -((( 9999999.25f ) + ( var_1_44 ))) : ((( 9999999.25f ) + ( var_1_44 )))))
   );
  } else {
                     var_1_43 = (
    var_1_44
   );
  }
 } else {
                    var_1_43 = (
   var_1_44
  );
 }
                   if ( ((var_1_26) < (var_1_44))) {
                    var_1_45 = (
   var_1_46
  );
 }
                   if ( (( ((var_1_26) / (var_1_48))) < ( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) {
                    if ( ((var_1_38) && (var_1_49))) {
                     var_1_47 = (
    10
   );
  }
 } else {
                    var_1_47 = (
   var_1_50
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_4 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_4 >= -922337.2036854766000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854766000e+12F && var_1_4 >= 1.0e-20F ));
 var_1_5 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -32767);
 assume_abort_if_not(var_1_7 <= 32766);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 16383);
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 16383);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 8191);
 assume_abort_if_not(var_1_11 <= 16383);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= 0.0F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 9223372.036854776000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= 0.0F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 9223372.036854776000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_20 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_20 >= 0.0F && var_1_20 <= -1.0e-20F) || (var_1_20 <= 9223372.036854776000e+12F && var_1_20 >= 1.0e-20F ));
 var_1_22 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_22 >= -230584.3009213691400e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 2305843.009213691400e+12F && var_1_22 >= 1.0e-20F ));
 var_1_23 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_23 >= -230584.3009213691400e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 2305843.009213691400e+12F && var_1_23 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483647);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 1073741823);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 1073741823);
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_40 >= -922337.2036854776000e+13F && var_1_40 <= -1.0e-20F) || (var_1_40 <= 9223372.036854776000e+12F && var_1_40 >= 1.0e-20F ));
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= -922337.2036854776000e+13F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 9223372.036854776000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -461168.6018427383000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 4611686.018427383000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 126);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= -922337.2036854776000e+13F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854776000e+12F && var_1_48 >= 1.0e-20F ));
 assume_abort_if_not(var_1_48 != 0.0F);
 var_1_49 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 1);
 var_1_50 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_21) != (255.6))) {
 } else {
 }
 if (var_1_2) {
 } else {
  if ( ((var_1_21) >= (var_1_1))) {
   if (var_1_8) {
   } else {
   }
  } else {
  }
 }
 if ( ((var_1_26) == (var_1_4))) {
 } else {
  if (var_1_8) {
  } else {
  }
 }
 if ( (( ((var_1_18) - ( (((((var_1_19)) > ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))))) > (0.0))) {
 }
 if ( ((var_1_2) || (var_1_8))) {
 }
 if ( (( ((var_1_19) - (var_1_20))) > ( ((((( (((((var_1_1)) < ((var_1_21))) ? ((var_1_1)) : ((var_1_21)))))) < ((var_1_21))) ? (( (((((var_1_1)) < ((var_1_21))) ? ((var_1_1)) : ((var_1_21)))))) : ((var_1_21))))))) {
  if ( (! (var_1_2))) {
  } else {
  }
 }
 if ( ((var_1_7) >= ( (((((var_1_24)) > ((var_1_11))) ? ((var_1_24)) : ((var_1_11))))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                                          ((
                                              ((
        var_1_21
       ) != (
        255.6
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
         var_1_4
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((float) (
                                             ((((( var_1_4 )) > (( var_1_5 ))) ? (( var_1_4 )) : (( var_1_5 ))))
        ))
       ))
      ))
     ) && (
                                          ((
       var_1_2
      ) ? (
                                           ((
        var_1_6
       ) == (
                                            ((signed short int) (
         var_1_7
        ))
       ))
      ) : (
                                           ((
                                                 ((
         var_1_21
        ) >= (
         var_1_1
        ))
       ) ? (
                                            ((
         var_1_8
        ) ? (
                                             ((
          var_1_6
         ) == (
                                              ((signed short int) (
                                               ((
                                                ((
             var_1_9
            ) - (
             var_1_10
            ))
           ) + (
                                                ((
                                                 ((
              var_1_11
             ) - (
              100
             ))
            ) - (
             var_1_12
            ))
           ))
          ))
         ))
        ) : (
                                             ((
          var_1_6
         ) == (
                                              ((signed short int) (
           64
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_6
        ) == (
                                             ((signed short int) (
          var_1_11
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
       var_1_26
      ) == (
       var_1_4
      ))
     ) ? (
                                           ((
       var_1_13
      ) == (
                                            ((unsigned char) (
                                             ((((( var_1_14 )) > (( ((((( var_1_15 )) > (( var_1_16 ))) ? (( var_1_15 )) : (( var_1_16 )))) ))) ? (( var_1_14 )) : (( ((((( var_1_15 )) > (( var_1_16 ))) ? (( var_1_15 )) : (( var_1_16 )))) ))))
       ))
      ))
     ) : (
                                           ((
       var_1_8
      ) ? (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         0
        ))
       ))
      ) : (
                                            ((
        var_1_13
       ) == (
                                             ((unsigned char) (
         var_1_15
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
                                                 ((
       var_1_18
      ) - (
                                                  ((((( var_1_19 )) > (( var_1_20 ))) ? (( var_1_19 )) : (( var_1_20 ))))
      ))
     ) > (
      0.0
     ))
    ) ? (
                                          ((
      var_1_17
     ) == (
                                           ((signed short int) (
       var_1_9
      ))
     ))
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_2
    ) || (
     var_1_8
    ))
   ) ? (
                                         ((
     var_1_21
    ) == (
                                          ((double) (
                                           ((
                                            ((
        var_1_22
       ) + (
        var_1_23
       ))
      ) + (
       3.75
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
     var_1_19
    ) - (
     var_1_20
    ))
   ) > (
                                               ((((( ((((( var_1_1 )) < (( var_1_21 ))) ? (( var_1_1 )) : (( var_1_21 )))) )) < (( var_1_21 ))) ? (( ((((( var_1_1 )) < (( var_1_21 ))) ? (( var_1_1 )) : (( var_1_21 )))) )) : (( var_1_21 ))))
   ))
  ) ? (
                                        ((
                                               (! (
     var_1_2
    ))
   ) ? (
                                         ((
     var_1_24
    ) == (
                                          ((unsigned long int) (
                                           ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
     ))
    ))
   ) : (
                                         ((
     var_1_24
    ) == (
                                          ((unsigned long int) (
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
   var_1_7
  ) >= (
                                              ((((( var_1_24 )) > (( var_1_11 ))) ? (( var_1_24 )) : (( var_1_11 ))))
  ))
 ) ? (
                                       ((
   var_1_26
  ) == (
                                        ((float) (
                                         ((
     var_1_22
    ) + (
     var_1_23
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
