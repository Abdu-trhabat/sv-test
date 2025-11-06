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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch121Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 1;
double var_1_2 = 99.5;
double var_1_3 = 128.625;
double var_1_4 = 0.6;
double var_1_5 = 15.7;
double var_1_6 = 16.5;
double var_1_7 = 24.5;
unsigned char var_1_8 = 0;
signed char var_1_9 = 100;
signed long int var_1_10 = 64;
signed long int var_1_11 = 64;
signed long int var_1_12 = 25;
signed long int var_1_13 = 1537575239;
signed long int var_1_14 = 100;
signed long int var_1_15 = 128;
signed char var_1_16 = 32;
signed char var_1_17 = -4;
signed char var_1_18 = 16;
signed char var_1_19 = -1;
signed char var_1_20 = 8;
signed char var_1_21 = 32;
signed short int var_1_22 = 25;
unsigned short int var_1_23 = 16;
float var_1_24 = 7.5;
float var_1_25 = 1.75;
unsigned char var_1_26 = 1;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned char var_1_29 = 0;
unsigned long int var_1_30 = 256;
float var_1_31 = 24.5;
float var_1_32 = 5.6;
float var_1_33 = 127.475;
signed long int var_1_34 = -1000000000;
signed long int var_1_35 = -1;
signed long int var_1_36 = -16;
signed long int var_1_37 = 50;
unsigned long int var_1_38 = 8;
signed char var_1_39 = -10;
signed char var_1_40 = 16;
signed long int var_1_41 = 5;
signed char var_1_42 = -32;
signed char var_1_43 = -16;
double var_1_44 = 25.8;
double var_1_45 = 99.6;
double var_1_46 = 4.5;
double var_1_47 = 0.53;
unsigned char var_1_48 = 1;
signed long int var_1_49 = 32;
unsigned char var_1_52 = 1;
unsigned char var_1_53 = 0;
unsigned char var_1_54 = 0;
float var_1_55 = 255.6;
float var_1_56 = 32.41;
signed long int var_1_57 = -10;
double var_1_58 = 99999999.5;
double var_1_59 = 49.17;
signed char last_1_var_1_16 = 32;
void initially(void) {
}
void step(void) {
                   if ( (( (- ( ((var_1_31) + (var_1_32))))) <= (var_1_33))) {
                    if ( (( (~ (var_1_34))) > ( ((var_1_35) | ( ((var_1_36) | (var_1_37))))))) {
                     if ( ((var_1_32) <= (var_1_31))) {
                      var_1_30 = (
     var_1_38
    );
   }
  } else {
                     var_1_30 = (
                      ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))
   );
  }
 }
                   var_1_39 = (
  var_1_40
 );
                   var_1_41 = (
  var_1_10
 );
                   if ( (! ( ((var_1_41) >= (var_1_36))))) {
                    var_1_42 = (
                     ((
    var_1_43
   ) + (
    1
   ))
  );
 }
                   if ( ((var_1_31) <= (var_1_33))) {
                    var_1_44 = (
                     ((
                      ((
     var_1_45
    ) - (
     var_1_46
    ))
   ) + (
    var_1_47
   ))
  );
 }
                   if ( ((var_1_10) >= ( (( ((64) - (var_1_49))) * (var_1_10))))) {
                    if ( ((var_1_33) >= (var_1_31))) {
                     if (var_1_26) {
                      var_1_48 = (
                       ((
      var_1_26
     ) || (
      var_1_52
     ))
    );
   } else {
                      var_1_48 = (
                       (! (
      var_1_52
     ))
    );
   }
  } else {
                     var_1_48 = (
                      ((
     var_1_53
    ) || (
     var_1_54
    ))
   );
  }
 } else {
                    var_1_48 = (
                     ((
    var_1_53
   ) || (
                      (! (
     var_1_52
    ))
   ))
  );
 }
                   if ( ((var_1_24) > ( ((var_1_45) / (var_1_56))))) {
                    var_1_55 = (
                     ((((( var_1_47 )) < (( var_1_45 ))) ? (( var_1_47 )) : (( var_1_45 ))))
  );
 }
                   var_1_57 = (
  var_1_23
 );
                   var_1_58 = (
  var_1_46
 );
                   var_1_59 = (
  var_1_45
 );
                                          if ( ((var_1_5) < (var_1_2))) {
                                           var_1_10 = (
                                            ((((( (( var_1_11 ) - ( var_1_12 )) )) < (( last_1_var_1_16 ))) ? (( (( var_1_11 ) - ( var_1_12 )) )) : (( last_1_var_1_16 ))))
  );
 } else {
                                           var_1_10 = (
                                            ((
    var_1_12
   ) - (
                                              ((
     var_1_13
    ) - (
                                               ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
    ))
   ))
  );
 }
 signed long int stepLocal_0 = var_1_11;
                                if ( ((var_1_13) == (stepLocal_0))) {
                                 var_1_17 = (
                                  ((
                                   ((((( (( var_1_18 ) + ( 50 )) )) < (( var_1_19 ))) ? (( (( var_1_18 ) + ( 50 )) )) : (( var_1_19 ))))
   ) - (
                                   ((
     var_1_20
    ) + (
     var_1_21
    ))
   ))
  );
 } else {
                                 var_1_17 = (
   var_1_20
  );
 }
                                if ( ((var_1_5) >= (var_1_3))) {
                                 var_1_23 = (
   var_1_21
  );
 } else {
                                 var_1_23 = (
                                  ((((( var_1_18 )) > (( var_1_21 ))) ? (( var_1_18 )) : (( var_1_21 ))))
  );
 }
                                var_1_24 = (
                                 ((((( 4.4f )) < (( var_1_25 ))) ? (( 4.4f )) : (( var_1_25 ))))
 );
                                if ( ((var_1_15) <= ( (((((-5)) > ((var_1_10))) ? ((-5)) : ((var_1_10))))))) {
                                 var_1_26 = (
                                  ((
    var_1_8
   ) || (
                                   ((
     var_1_27
    ) && (
     var_1_28
    ))
   ))
  );
 } else {
                                 if (var_1_27) {
                                  var_1_26 = (
    var_1_29
   );
  } else {
                                  var_1_26 = (
    var_1_28
   );
  }
 }
                              if ( (( ((var_1_2) / ( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))))) <= ( ((var_1_5) / ( (((((var_1_6)) < ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))))))) {
                               if (var_1_26) {
                                var_1_1 = (
    var_1_9
   );
  } else {
                                var_1_1 = (
    64
   );
  }
 } else {
                               var_1_1 = (
   var_1_9
  );
 }
                                if (var_1_26) {
                                 var_1_22 = (
                                  ((((( (( var_1_18 ) - ( var_1_20 )) )) < (( (( var_1_19 ) + ( var_1_9 )) ))) ? (( (( var_1_18 ) - ( var_1_20 )) )) : (( (( var_1_19 ) + ( var_1_9 )) ))))
  );
 } else {
                                 var_1_22 = (
   4
  );
 }
                                if ( ((var_1_17) < (var_1_10))) {
                                 var_1_16 = (
   var_1_9
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_2 >= -922337.2036854776000e+13F && var_1_2 <= -1.0e-20F) || (var_1_2 <= 9223372.036854776000e+12F && var_1_2 >= 1.0e-20F ));
 var_1_3 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_3 >= -922337.2036854776000e+13F && var_1_3 <= -1.0e-20F) || (var_1_3 <= 9223372.036854776000e+12F && var_1_3 >= 1.0e-20F ));
 assume_abort_if_not(var_1_3 != 0.0F);
 var_1_4 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_4 >= -922337.2036854776000e+13F && var_1_4 <= -1.0e-20F) || (var_1_4 <= 9223372.036854776000e+12F && var_1_4 >= 1.0e-20F ));
 assume_abort_if_not(var_1_4 != 0.0F);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854776000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854776000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854776000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854776000e+12F && var_1_6 >= 1.0e-20F ));
 assume_abort_if_not(var_1_6 != 0.0F);
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -922337.2036854776000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854776000e+12F && var_1_7 >= 1.0e-20F ));
 assume_abort_if_not(var_1_7 != 0.0F);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 1);
 var_1_9 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_9 >= -127);
 assume_abort_if_not(var_1_9 <= 126);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -1);
 assume_abort_if_not(var_1_11 <= 2147483646);
 var_1_12 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 2147483646);
 var_1_13 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_13 >= 1073741823);
 assume_abort_if_not(var_1_13 <= 2147483646);
 var_1_14 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 1073741823);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 1073741823);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854766000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854766000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 0);
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_33 >= -922337.2036854776000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854776000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483648);
 assume_abort_if_not(var_1_34 <= 2147483647);
 var_1_35 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_35 >= -2147483648);
 assume_abort_if_not(var_1_35 <= 2147483647);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_37 >= -2147483648);
 assume_abort_if_not(var_1_37 <= 2147483647);
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967294);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= -127);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -63);
 assume_abort_if_not(var_1_43 <= 63);
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= 0.0F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 4611686.018427383000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_46 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_46 >= 0.0F && var_1_46 <= -1.0e-20F) || (var_1_46 <= 4611686.018427383000e+12F && var_1_46 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_47 >= -461168.6018427383000e+13F && var_1_47 <= -1.0e-20F) || (var_1_47 <= 4611686.018427383000e+12F && var_1_47 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 2147483647);
 var_1_52 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_52 >= 1);
 assume_abort_if_not(var_1_52 <= 1);
 var_1_53 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_53 >= 0);
 assume_abort_if_not(var_1_53 <= 0);
 var_1_54 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_54 >= 0);
 assume_abort_if_not(var_1_54 <= 0);
 var_1_56 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_56 >= -922337.2036854776000e+13F && var_1_56 <= -1.0e-20F) || (var_1_56 <= 9223372.036854776000e+12F && var_1_56 >= 1.0e-20F ));
 assume_abort_if_not(var_1_56 != 0.0F);
}
void updateLastVariables(void) {
 last_1_var_1_16 = var_1_16;
}
int property(void) {
 if ( (( ((var_1_2) / ( (((((var_1_3)) < ((var_1_4))) ? ((var_1_3)) : ((var_1_4))))))) <= ( ((var_1_5) / ( (((((var_1_6)) < ((var_1_7))) ? ((var_1_6)) : ((var_1_7))))))))) {
  if (var_1_26) {
  } else {
  }
 } else {
 }
 if ( ((var_1_5) < (var_1_2))) {
 } else {
 }
 if ( ((var_1_17) < (var_1_10))) {
 }
 if ( ((var_1_13) == (var_1_11))) {
 } else {
 }
 if (var_1_26) {
 } else {
 }
 if ( ((var_1_5) >= (var_1_3))) {
 } else {
 }
 if ( ((var_1_15) <= ( (((((-5)) > ((var_1_10))) ? ((-5)) : ((var_1_10))))))) {
 } else {
  if (var_1_27) {
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
                                           ((
                                                 ((
                                                 ((
          var_1_2
         ) / (
                                                  ((((( var_1_3 )) < (( var_1_4 ))) ? (( var_1_3 )) : (( var_1_4 ))))
         ))
        ) <= (
                                                  ((
          var_1_5
         ) / (
                                                   ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
         ))
        ))
       ) ? (
                                            ((
         var_1_26
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((signed char) (
           var_1_9
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((signed char) (
           64
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed char) (
          var_1_9
         ))
        ))
       ))
      ) && (
                                                       ((
                                                             ((
         var_1_5
        ) < (
         var_1_2
        ))
       ) ? (
                                                        ((
         var_1_10
        ) == (
                                                         ((signed long int) (
                                                          ((((( (( var_1_11 ) - ( var_1_12 )) )) < (( last_1_var_1_16 ))) ? (( (( var_1_11 ) - ( var_1_12 )) )) : (( last_1_var_1_16 ))))
         ))
        ))
       ) : (
                                                        ((
         var_1_10
        ) == (
                                                         ((signed long int) (
                                                          ((
           var_1_12
          ) - (
                                                           ((
            var_1_13
           ) - (
                                                            ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 ))))
           ))
          ))
         ))
        ))
       ))
      ))
     ) && (
                                           ((
                                                  ((
        var_1_17
       ) < (
        var_1_10
       ))
      ) ? (
                                            ((
        var_1_16
       ) == (
                                             ((signed char) (
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
       var_1_13
      ) == (
       var_1_11
      ))
     ) ? (
                                           ((
       var_1_17
      ) == (
                                            ((signed char) (
                                             ((
                                              ((((( (( var_1_18 ) + ( 50 )) )) < (( var_1_19 ))) ? (( (( var_1_18 ) + ( 50 )) )) : (( var_1_19 ))))
        ) - (
                                              ((
          var_1_20
         ) + (
          var_1_21
         ))
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_17
      ) == (
                                            ((signed char) (
        var_1_20
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_26
    ) ? (
                                          ((
      var_1_22
     ) == (
                                           ((signed short int) (
                                            ((((( (( var_1_18 ) - ( var_1_20 )) )) < (( (( var_1_19 ) + ( var_1_9 )) ))) ? (( (( var_1_18 ) - ( var_1_20 )) )) : (( (( var_1_19 ) + ( var_1_9 )) ))))
      ))
     ))
    ) : (
                                          ((
      var_1_22
     ) == (
                                           ((signed short int) (
       4
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_5
    ) >= (
     var_1_3
    ))
   ) ? (
                                         ((
     var_1_23
    ) == (
                                          ((unsigned short int) (
      var_1_21
     ))
    ))
   ) : (
                                         ((
     var_1_23
    ) == (
                                          ((unsigned short int) (
                                           ((((( var_1_18 )) > (( var_1_21 ))) ? (( var_1_18 )) : (( var_1_21 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_24
  ) == (
                                        ((float) (
                                         ((((( 4.4f )) < (( var_1_25 ))) ? (( 4.4f )) : (( var_1_25 ))))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_15
  ) <= (
                                              ((((( -5 )) > (( var_1_10 ))) ? (( -5 )) : (( var_1_10 ))))
  ))
 ) ? (
                                       ((
   var_1_26
  ) == (
                                        ((unsigned char) (
                                         ((
     var_1_8
    ) || (
                                          ((
      var_1_27
     ) && (
      var_1_28
     ))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_27
  ) ? (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned char) (
     var_1_29
    ))
   ))
  ) : (
                                        ((
    var_1_26
   ) == (
                                         ((unsigned char) (
     var_1_28
    ))
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
