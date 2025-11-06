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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch186Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = -8;
signed short int var_1_2 = 10;
double var_1_3 = 7.7;
unsigned char var_1_4 = 0;
double var_1_5 = 128.125;
double var_1_6 = 3.75;
double var_1_7 = 10.2;
double var_1_8 = 10.022;
signed char var_1_9 = 32;
signed char var_1_10 = -32;
signed short int var_1_11 = 10000;
unsigned char var_1_12 = 0;
unsigned char var_1_13 = 64;
unsigned char var_1_14 = 16;
unsigned char var_1_15 = 32;
unsigned char var_1_16 = 128;
unsigned long int var_1_17 = 32;
signed short int var_1_18 = 100;
unsigned char var_1_19 = 0;
unsigned long int var_1_20 = 3943582589;
unsigned short int var_1_21 = 200;
unsigned short int var_1_22 = 5;
double var_1_23 = 15.5;
unsigned char var_1_24 = 0;
signed long int var_1_25 = 8;
signed long int var_1_26 = 128;
double var_1_27 = 127.5;
double var_1_28 = 2.4;
float var_1_29 = 10000.5;
signed short int var_1_30 = -1;
double var_1_31 = 8.75;
signed long int var_1_32 = -64;
double var_1_33 = 9999999999999.25;
float var_1_34 = 9.375;
signed short int var_1_35 = -128;
signed short int var_1_36 = 32;
signed short int var_1_37 = 128;
signed short int var_1_38 = 1;
unsigned short int var_1_39 = 10;
unsigned short int var_1_40 = 37936;
void initially(void) {
}
void step(void) {
           var_1_21 = (
  var_1_22
 );
            if ( (( (((((var_1_21)) > ((var_1_22))) ? ((var_1_21)) : ((var_1_22))))) < ( (( ((var_1_25) & (-1000000))) & (var_1_26))))) {
             var_1_23 = (
              ((((( 8.125 )) < (( var_1_27 ))) ? (( 8.125 )) : (( var_1_27 ))))
  );
 }
            var_1_28 = (
  var_1_27
 );
            if ( (( (( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))) * (var_1_21))) <= (var_1_26))) {
             var_1_29 = (
   var_1_27
  );
 }
             if ( (( (~ ( (- (var_1_26))))) >= ( ((5) % (var_1_32))))) {
              if ( ((var_1_30) >= (var_1_26))) {
               var_1_31 = (
                ((((var_1_27) < 0 ) ? -(var_1_27) : (var_1_27)))
   );
  } else {
               var_1_31 = (
                ((((( var_1_27 )) > (( var_1_33 ))) ? (( var_1_27 )) : (( var_1_33 ))))
   );
  }
 }
             if ( ((var_1_32) >= (var_1_25))) {
              var_1_34 = (
               ((((( var_1_27 )) < (( var_1_33 ))) ? (( var_1_27 )) : (( var_1_33 ))))
  );
 }
             if ( ((var_1_33) < (var_1_34))) {
              if ( (( ((var_1_32) | ( ((var_1_22) * (50u))))) > ( ((((((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) < 0 ) ? -(((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))) : (((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))))))))) {
               var_1_35 = (
                ((
     var_1_36
    ) - (
                 ((
      var_1_37
     ) + (
      var_1_38
     ))
    ))
   );
  } else {
               var_1_35 = (
                ((((( var_1_36 )) < (( -8 ))) ? (( var_1_36 )) : (( -8 ))))
   );
  }
 } else {
              if (var_1_24) {
               var_1_35 = (
    var_1_36
   );
  }
 }
             if ( ((var_1_31) == (var_1_28))) {
              var_1_39 = (
               ((((( var_1_22 )) < (( (( var_1_40 ) - ( ((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 )))) )) ))) ? (( var_1_22 )) : (( (( var_1_40 ) - ( ((((( var_1_37 )) < (( var_1_38 ))) ? (( var_1_37 )) : (( var_1_38 )))) )) ))))
  );
 }
                             var_1_1 = (
  var_1_2
 );
 unsigned char stepLocal_0 = ((var_1_1) != ( (((((-10)) < ((var_1_2))) ? ((-10)) : ((var_1_2))))));
                              if ( ((var_1_4) || (stepLocal_0))) {
                               var_1_3 = (
                                ((((( var_1_5 )) < (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
  );
 } else {
                               var_1_3 = (
                                ((
    var_1_7
   ) + (
                                 ((
     128.6
    ) + (
     var_1_8
    ))
   ))
  );
 }
                              if ( (( ((var_1_7) > ( (((((9.6)) > ((var_1_6))) ? ((9.6)) : ((var_1_6))))))) || ( ((var_1_5) < (var_1_3))))) {
                               var_1_9 = (
   var_1_10
  );
 }
 signed short int stepLocal_1 = var_1_2;
                               if (var_1_4) {
                                var_1_12 = (
                                 ((((( var_1_13 )) < (( ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 )))) ))) ? (( var_1_13 )) : (( ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 )))) ))))
  );
 } else {
                                if ( ((var_1_14) != (stepLocal_1))) {
                                 var_1_12 = (
                                  ((
     var_1_16
    ) - (
     2
    ))
   );
  } else {
                                 var_1_12 = (
    4
   );
  }
 }
 unsigned char stepLocal_2 = var_1_12;
                               if ( ((var_1_14) >= (stepLocal_2))) {
                                var_1_17 = (
   var_1_13
  );
 }
 unsigned long int stepLocal_5 = ((((( ((var_1_15) + (var_1_17)))) < ((var_1_9))) ? (( ((var_1_15) + (var_1_17)))) : ((var_1_9))));
 unsigned long int stepLocal_4 = (( ((var_1_20) - (var_1_12))) / ( ((3761303906u) - (var_1_16))));
 unsigned char stepLocal_3 = (( ((var_1_10) > (var_1_17))) && (var_1_19));
                                if ( ((var_1_4) && (stepLocal_3))) {
                                 if ( ((stepLocal_4) == (var_1_13))) {
                                  if ( ((stepLocal_5) >= ( (( ((var_1_12) ^ (var_1_17))) * (var_1_14))))) {
                                   var_1_18 = (
     var_1_12
    );
   } else {
                                   var_1_18 = (
     var_1_2
    );
   }
  } else {
                                  var_1_18 = (
    var_1_16
   );
  }
 } else {
                                 var_1_18 = (
   var_1_2
  );
 }
                               if ( (( ((var_1_17) & (var_1_2))) <= (var_1_17))) {
                                if ( ((var_1_17) <= (var_1_2))) {
                                 var_1_11 = (
    var_1_2
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32767);
 assume_abort_if_not(var_1_2 <= 32766);
 var_1_4 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_4 >= 0);
 assume_abort_if_not(var_1_4 <= 1);
 var_1_5 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_5 >= -922337.2036854766000e+13F && var_1_5 <= -1.0e-20F) || (var_1_5 <= 9223372.036854766000e+12F && var_1_5 >= 1.0e-20F ));
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -922337.2036854766000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 9223372.036854766000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -230584.3009213691400e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 2305843.009213691400e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_10 >= -127);
 assume_abort_if_not(var_1_10 <= 126);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 254);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 254);
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 254);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 127);
 assume_abort_if_not(var_1_16 <= 254);
 var_1_19 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 1);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 2147483647);
 assume_abort_if_not(var_1_20 <= 4294967295);
 var_1_22 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 65534);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 2147483647);
 var_1_26 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_26 >= -2147483648);
 assume_abort_if_not(var_1_26 <= 2147483647);
 var_1_27 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_27 >= -922337.2036854766000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854766000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_30 >= -32767);
 assume_abort_if_not(var_1_30 <= 32767);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -2147483648);
 assume_abort_if_not(var_1_32 <= 2147483647);
 assume_abort_if_not(var_1_32 != 0);
 var_1_33 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_33 >= -922337.2036854766000e+13F && var_1_33 <= -1.0e-20F) || (var_1_33 <= 9223372.036854766000e+12F && var_1_33 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_36 >= -1);
 assume_abort_if_not(var_1_36 <= 32766);
 var_1_37 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 16383);
 var_1_38 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 16383);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 32767);
 assume_abort_if_not(var_1_40 <= 65534);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_4) || ( ((var_1_1) != ( (((((-10)) < ((var_1_2))) ? ((-10)) : ((var_1_2))))))))) {
 } else {
 }
 if ( (( ((var_1_7) > ( (((((9.6)) > ((var_1_6))) ? ((9.6)) : ((var_1_6))))))) || ( ((var_1_5) < (var_1_3))))) {
 }
 if ( (( ((var_1_17) & (var_1_2))) <= (var_1_17))) {
  if ( ((var_1_17) <= (var_1_2))) {
  }
 }
 if (var_1_4) {
 } else {
  if ( ((var_1_14) != (var_1_2))) {
  } else {
  }
 }
 if ( ((var_1_14) >= (var_1_12))) {
 }
 if ( ((var_1_4) && ( (( ((var_1_10) > (var_1_17))) && (var_1_19))))) {
  if ( (( (( ((var_1_20) - (var_1_12))) / ( ((3761303906u) - (var_1_16))))) == (var_1_13))) {
   if ( (( ((((( ((var_1_15) + (var_1_17)))) < ((var_1_9))) ? (( ((var_1_15) + (var_1_17)))) : ((var_1_9))))) >= ( (( ((var_1_12) ^ (var_1_17))) * (var_1_14))))) {
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
                                         ((
       var_1_1
      ) == (
                                          ((signed short int) (
        var_1_2
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_4
       ) || (
                                                 ((
         var_1_1
        ) != (
                                                  ((((( -10 )) < (( var_1_2 ))) ? (( -10 )) : (( var_1_2 ))))
        ))
       ))
      ) ? (
                                           ((
        var_1_3
       ) == (
                                            ((double) (
                                             ((((( var_1_5 )) < (( var_1_6 ))) ? (( var_1_5 )) : (( var_1_6 ))))
        ))
       ))
      ) : (
                                           ((
        var_1_3
       ) == (
                                            ((double) (
                                             ((
          var_1_7
         ) + (
                                              ((
           128.6
          ) + (
           var_1_8
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
       ) > (
                                                 ((((( 9.6 )) > (( var_1_6 ))) ? (( 9.6 )) : (( var_1_6 ))))
       ))
      ) || (
                                                ((
        var_1_5
       ) < (
        var_1_3
       ))
      ))
     ) ? (
                                          ((
       var_1_9
      ) == (
                                           ((signed char) (
        var_1_10
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
       var_1_17
      ) & (
       var_1_2
      ))
     ) <= (
      var_1_17
     ))
    ) ? (
                                          ((
                                                 ((
       var_1_17
      ) <= (
       var_1_2
      ))
     ) ? (
                                           ((
       var_1_11
      ) == (
                                            ((signed short int) (
        var_1_2
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
    var_1_4
   ) ? (
                                         ((
     var_1_12
    ) == (
                                          ((unsigned char) (
                                           ((((( var_1_13 )) < (( ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 )))) ))) ? (( var_1_13 )) : (( ((((( var_1_14 )) > (( var_1_15 ))) ? (( var_1_14 )) : (( var_1_15 )))) ))))
     ))
    ))
   ) : (
                                         ((
                                                ((
      var_1_14
     ) != (
      var_1_2
     ))
    ) ? (
                                          ((
      var_1_12
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_16
       ) - (
        2
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_12
     ) == (
                                           ((unsigned char) (
       4
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_14
   ) >= (
    var_1_12
   ))
  ) ? (
                                        ((
    var_1_17
   ) == (
                                         ((unsigned long int) (
     var_1_13
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
  ) && (
                                              ((
                                               ((
     var_1_10
    ) > (
     var_1_17
    ))
   ) && (
    var_1_19
   ))
  ))
 ) ? (
                                       ((
                                              ((
                                               ((
                                                ((
      var_1_20
     ) - (
      var_1_12
     ))
    ) / (
                                                ((
      3761303906u
     ) - (
      var_1_16
     ))
    ))
   ) == (
    var_1_13
   ))
  ) ? (
                                        ((
                                               ((
                                                ((((( (( var_1_15 ) + ( var_1_17 )) )) < (( var_1_9 ))) ? (( (( var_1_15 ) + ( var_1_17 )) )) : (( var_1_9 ))))
    ) >= (
                                                ((
                                                 ((
       var_1_12
      ) ^ (
       var_1_17
      ))
     ) * (
      var_1_14
     ))
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((signed short int) (
      var_1_12
     ))
    ))
   ) : (
                                         ((
     var_1_18
    ) == (
                                          ((signed short int) (
      var_1_2
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_18
   ) == (
                                         ((signed short int) (
     var_1_16
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_18
  ) == (
                                        ((signed short int) (
    var_1_2
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
