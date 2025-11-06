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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch1Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 64;
unsigned long int var_1_2 = 256;
unsigned long int var_1_3 = 0;
unsigned long int var_1_4 = 8;
signed short int var_1_5 = 50;
double var_1_6 = 31.5;
signed short int var_1_7 = 128;
signed short int var_1_8 = 64;
double var_1_9 = 1000000000.25;
float var_1_10 = 1.1;
float var_1_11 = 8.75;
float var_1_12 = 63.8;
unsigned char var_1_13 = 1;
float var_1_14 = 127.5;
signed char var_1_15 = -2;
signed char var_1_16 = 1;
signed char var_1_17 = 1;
signed char var_1_18 = 1;
signed char var_1_19 = -2;
signed char var_1_20 = 16;
signed char var_1_21 = 2;
signed char var_1_22 = 8;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 32;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 50;
unsigned long int var_1_30 = 1000000000;
unsigned long int var_1_31 = 4;
unsigned long int var_1_32 = 100000;
unsigned long int var_1_33 = 10;
unsigned long int var_1_34 = 8;
unsigned char var_1_35 = 1;
unsigned long int var_1_36 = 2632045268;
signed long int var_1_37 = 32;
unsigned long int var_1_38 = 128;
float var_1_39 = 8.78;
unsigned long int var_1_40 = 1877460848;
unsigned long int var_1_41 = 1831388024;
unsigned long int var_1_42 = 1967003719;
unsigned char var_1_43 = 0;
float var_1_44 = 199.5;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 0;
signed long int var_1_47 = 0;
unsigned short int var_1_48 = 0;
float var_1_49 = 0.0;
float var_1_50 = 9.25;
float var_1_51 = 100000000000.25;
float var_1_52 = 8.6;
unsigned short int var_1_55 = 100;
void initially(void) {
}
void step(void) {
            if ( ((var_1_29) < ( ((var_1_30) | ( ((var_1_31) + (var_1_32))))))) {
             var_1_28 = (
   200
  );
 }
            if ( ((var_1_32) >= ( ((var_1_31) >> (var_1_34))))) {
             if ( ((var_1_35) || ( ((var_1_31) < (var_1_32))))) {
              var_1_33 = (
               (((((( var_1_36 ) - ( var_1_28 ))) < 0 ) ? -((( var_1_36 ) - ( var_1_28 ))) : ((( var_1_36 ) - ( var_1_28 )))))
   );
  }
 }
            if ( ((var_1_34) > ( ((var_1_29) / (var_1_36))))) {
             var_1_37 = (
              ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))
  );
 }
             if ( ((63.75f) <= (var_1_39))) {
              var_1_38 = (
               ((
                ((
     var_1_40
    ) + (
                 ((((( var_1_41 )) > (( var_1_42 ))) ? (( var_1_41 )) : (( var_1_42 ))))
    ))
   ) - (
                ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
   ))
  );
 }
             if ( ((var_1_39) < ( ((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))))) {
              var_1_43 = (
               ((
    var_1_45
   ) || (
    var_1_46
   ))
  );
 } else {
              var_1_43 = (
               ((
    var_1_35
   ) && (
                ((
     var_1_46
    ) && (
     var_1_45
    ))
   ))
  );
 }
             var_1_47 = (
              ((((var_1_28) < 0 ) ? -(var_1_28) : (var_1_28)))
 );
             if ( (( (( ((var_1_49) - (var_1_50))) - ( (((((var_1_51)) < ((var_1_52))) ? ((var_1_51)) : ((var_1_52))))))) > (var_1_44))) {
              if ( (( (((((var_1_49)) < ((var_1_44))) ? ((var_1_49)) : ((var_1_44))))) <= ( (- ( (((((var_1_51)) < ((9.99999999999995E13f))) ? ((var_1_51)) : ((9.99999999999995E13f))))))))) {
               var_1_48 = (
                ((((((((( var_1_55 )) > (( var_1_34 ))) ? (( var_1_55 )) : (( var_1_34 ))))) < 0 ) ? -(((((( var_1_55 )) > (( var_1_34 ))) ? (( var_1_55 )) : (( var_1_34 ))))) : (((((( var_1_55 )) > (( var_1_34 ))) ? (( var_1_55 )) : (( var_1_34 )))))))
   );
  } else {
               var_1_48 = (
    var_1_34
   );
  }
 } else {
              var_1_48 = (
   var_1_34
  );
 }
 unsigned long int stepLocal_1 = ((var_1_4) * (var_1_3));
 unsigned long int stepLocal_0 = ((var_1_2) + (var_1_3));
                              if ( ((stepLocal_0) <= (var_1_4))) {
                               var_1_1 = (
                                ((
    128
   ) + (
    var_1_5
   ))
  );
 } else {
                               if ( ((var_1_5) >= (stepLocal_1))) {
                                var_1_1 = (
    var_1_5
   );
  } else {
                                var_1_1 = (
    1
   );
  }
 }
                              if ( ((var_1_5) < ( ((var_1_7) - (var_1_8))))) {
                               var_1_6 = (
   var_1_9
  );
 }
 unsigned long int stepLocal_2 = var_1_4;
                               if ( ((stepLocal_2) > (var_1_3))) {
                               var_1_10 = (
                                ((
    1.00000000000009E13f
   ) - (
    var_1_11
   ))
  );
 } else {
                                var_1_10 = (
   9.75f
  );
 }
                               var_1_15 = (
                                ((
   var_1_16
  ) - (
   var_1_17
  ))
 );
                               if ( (( (((((var_1_3)) < ((var_1_2))) ? ((var_1_3)) : ((var_1_2))))) < (25u))) {
                                var_1_18 = (
                                 ((
                                  ((((( var_1_19 )) > (( (( var_1_20 ) - ( var_1_21 )) ))) ? (( var_1_19 )) : (( (( var_1_20 ) - ( var_1_21 )) ))))
   ) + (
                                  ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) < 0 ) ? -(((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))
   ))
  );
 }
 signed long int stepLocal_5 = (~ (var_1_21));
                               if (var_1_13) {
                                if ( ((stepLocal_5) > (var_1_8))) {
                                 var_1_23 = (
                                  ((
     var_1_24
    ) && (
                                   (! (
      var_1_25
     ))
    ))
   );
  } else {
                                 if (var_1_24) {
                                  var_1_23 = (
                                   ((
                                    (! (
       var_1_25
      ))
     ) || (
      var_1_26
     ))
    );
   }
  }
 }
                               var_1_27 = (
  var_1_21
 );
 unsigned char stepLocal_4 = var_1_23;
 signed long int stepLocal_3 = 1;
                               if ( ((stepLocal_4) && ( ((var_1_5) >= (var_1_2))))) {
                                var_1_12 = (
   var_1_11
  );
 } else {
                                if ( ((stepLocal_3) >= (var_1_2))) {
                                 var_1_12 = (
    var_1_11
   );
  } else {
                                 var_1_12 = (
    var_1_14
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 4294967295);
 var_1_3 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 4294967295);
 var_1_4 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 4294967295);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -16383);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= -1);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_8 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 32767);
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -922337.2036854766000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 9223372.036854766000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= 0.0F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_14 >= -922337.2036854766000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854766000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -1);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= 0);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 63);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -63);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 0);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 4294967295);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 var_1_31 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 4294967295);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_34 >= 1);
 assume_abort_if_not(var_1_34 <= 31);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 0);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 2147483647);
 assume_abort_if_not(var_1_36 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_39 >= -922337.2036854776000e+13F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854776000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 1073741823);
 assume_abort_if_not(var_1_40 <= 2147483647);
 var_1_41 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_41 >= 1073741824);
 assume_abort_if_not(var_1_41 <= 2147483647);
 var_1_42 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_42 >= 1073741824);
 assume_abort_if_not(var_1_42 <= 2147483647);
 var_1_44 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_44 >= -922337.2036854776000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854776000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_45 >= 0);
 assume_abort_if_not(var_1_45 <= 0);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 0);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= 4611686.018427388000e+12F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854776000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= 0.0F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427388000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 9223372.036854776000e+12F && var_1_51 >= 1.0e-20F ));
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 9223372.036854776000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_55 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_55 >= 0);
 assume_abort_if_not(var_1_55 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( ((var_1_2) + (var_1_3))) <= (var_1_4))) {
 } else {
  if ( ((var_1_5) >= ( ((var_1_4) * (var_1_3))))) {
  } else {
  }
 }
 if ( ((var_1_5) < ( ((var_1_7) - (var_1_8))))) {
 }
 if ( ((var_1_4) > (var_1_3))) {
 } else {
 }
 if ( ((var_1_23) && ( ((var_1_5) >= (var_1_2))))) {
 } else {
  if ( ((1) >= (var_1_2))) {
  } else {
  }
 }
 if ( (( (((((var_1_3)) < ((var_1_2))) ? ((var_1_3)) : ((var_1_2))))) < (25u))) {
 }
 if (var_1_13) {
  if ( (( (~ (var_1_21))) > (var_1_8))) {
  } else {
   if (var_1_24) {
   }
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
         ) + (
          var_1_3
         ))
        ) <= (
         var_1_4
        ))
       ) ? (
                                           ((
         var_1_1
        ) == (
                                            ((signed short int) (
                                             ((
           128
          ) + (
           var_1_5
          ))
         ))
        ))
       ) : (
                                           ((
                                                 ((
          var_1_5
         ) >= (
                                                  ((
           var_1_4
          ) * (
           var_1_3
          ))
         ))
        ) ? (
                                            ((
          var_1_1
         ) == (
                                             ((signed short int) (
           var_1_5
          ))
         ))
        ) : (
                                            ((
          var_1_1
         ) == (
                                             ((signed short int) (
           1
          ))
         ))
        ))
       ))
      ) && (
                                          ((
                                                ((
         var_1_5
        ) < (
                                                 ((
          var_1_7
         ) - (
          var_1_8
         ))
        ))
       ) ? (
                                           ((
         var_1_6
        ) == (
                                            ((double) (
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
        var_1_4
       ) > (
        var_1_3
       ))
      ) ? (
                                          ((
        var_1_10
       ) == (
                                           ((float) (
                                            ((
          1.00000000000009E13f
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
         9.75f
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_23
      ) && (
                                                  ((
        var_1_5
       ) >= (
        var_1_2
       ))
      ))
     ) ? (
                                           ((
       var_1_12
      ) == (
                                            ((float) (
        var_1_11
       ))
      ))
     ) : (
                                           ((
                                                  ((
        1
       ) >= (
        var_1_2
       ))
      ) ? (
                                            ((
        var_1_12
       ) == (
                                             ((float) (
         var_1_11
        ))
       ))
      ) : (
                                            ((
        var_1_12
       ) == (
                                             ((float) (
         var_1_14
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
     var_1_15
    ) == (
                                          ((signed char) (
                                           ((
       var_1_16
      ) - (
       var_1_17
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((((( var_1_3 )) < (( var_1_2 ))) ? (( var_1_3 )) : (( var_1_2 ))))
    ) < (
     25u
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((signed char) (
                                           ((
                                            ((((( var_1_19 )) > (( (( var_1_20 ) - ( var_1_21 )) ))) ? (( var_1_19 )) : (( (( var_1_20 ) - ( var_1_21 )) ))))
      ) + (
                                            ((((((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) < 0 ) ? -(((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))) : (((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22))))))
      ))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_13
  ) ? (
                                        ((
                                               ((
                                                (~ (
      var_1_21
     ))
    ) > (
     var_1_8
    ))
   ) ? (
                                         ((
     var_1_23
    ) == (
                                          ((unsigned char) (
                                           ((
       var_1_24
      ) && (
                                            (! (
        var_1_25
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_24
    ) ? (
                                          ((
      var_1_23
     ) == (
                                           ((unsigned char) (
                                            ((
                                             (! (
         var_1_25
        ))
       ) || (
        var_1_26
       ))
      ))
     ))
    ) : (
     1
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
  var_1_27
 ) == (
                                       ((unsigned char) (
   var_1_21
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
