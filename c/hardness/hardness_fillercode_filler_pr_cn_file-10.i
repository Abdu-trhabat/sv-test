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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch10Filler_PR_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 4;
unsigned short int var_1_4 = 58792;
unsigned short int var_1_5 = 8;
unsigned short int var_1_6 = 64;
unsigned short int var_1_7 = 16;
unsigned char var_1_8 = 0;
unsigned char var_1_9 = 1;
signed short int var_1_10 = 1000;
signed short int var_1_11 = 1;
signed short int var_1_12 = -25;
signed short int var_1_13 = 25;
unsigned short int var_1_14 = 5;
unsigned short int var_1_16 = 20511;
unsigned long int var_1_17 = 50;
signed char var_1_18 = 100;
unsigned long int var_1_19 = 32;
unsigned char var_1_20 = 0;
unsigned char var_1_21 = 0;
unsigned short int var_1_22 = 2;
float var_1_23 = 100000.5;
float var_1_24 = 31.9;
float var_1_25 = -0.6;
unsigned short int var_1_26 = 32;
float var_1_27 = 24.5;
double var_1_28 = 10000000000.5;
unsigned char var_1_29 = 1;
unsigned char var_1_30 = 1;
double var_1_31 = 64.25;
signed char var_1_32 = -10;
signed char var_1_33 = -4;
unsigned long int var_1_34 = 4;
signed char var_1_35 = 100;
double var_1_36 = 199.5;
double var_1_37 = 7.6;
signed char var_1_38 = 64;
signed char var_1_39 = 10;
signed char var_1_40 = 16;
unsigned short int var_1_41 = 64;
unsigned short int var_1_42 = 16;
unsigned short int var_1_43 = 16;
double var_1_44 = 16.5;
unsigned short int last_1_var_1_1 = 4;
void initially(void) {
}
void step(void) {
                                         var_1_8 = (
                                          ((
                                          ((
                                           ((
     var_1_7
    ) >= (
     var_1_5
    ))
   ) && (
                                           ((
     var_1_4
    ) >= (
     last_1_var_1_1
    ))
   ))
  ) || (
   var_1_9
  ))
 );
             if ( (( ((var_1_25) <= (var_1_27))) && (var_1_30))) {
              var_1_32 = (
               ((((( var_1_33 )) > (( -100 ))) ? (( var_1_33 )) : (( -100 ))))
  );
 }
                               if ( ((var_1_19) > (var_1_18))) {
                                var_1_20 = (
                                 ((
    var_1_8
   ) || (
                                  (! (
     var_1_21
    ))
   ))
  );
 } else {
                                var_1_20 = (
   var_1_21
  );
 }
 unsigned short int stepLocal_1 = var_1_6;
 unsigned char stepLocal_0 = var_1_20;
                              if ( ((var_1_8) && (stepLocal_0))) {
                               var_1_1 = (
                                ((
                                 ((
                                  ((((( 56892 )) < (( var_1_4 ))) ? (( 56892 )) : (( var_1_4 ))))
    ) - (
     var_1_5
    ))
   ) - (
                                 ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
   ))
  );
 } else {
                               if ( (( (((((var_1_7)) > ((var_1_5))) ? ((var_1_7)) : ((var_1_5))))) < (stepLocal_1))) {
                                var_1_1 = (
    var_1_5
   );
  }
 }
             if ( ((var_1_29) && ( (! ( (! (var_1_30))))))) {
              var_1_28 = (
               ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))
  );
 }
             var_1_34 = (
  var_1_22
 );
             if ( ((var_1_40) >= ( ((((( ((-1) ^ (32)))) > ((var_1_32))) ? (( ((-1) ^ (32)))) : ((var_1_32))))))) {
              var_1_41 = (
               ((
    45623
   ) - (
                ((((( (( var_1_40 ) + ( var_1_42 )) )) > (( var_1_43 ))) ? (( (( var_1_40 ) + ( var_1_42 )) )) : (( var_1_43 ))))
   ))
  );
 } else {
              if ( (! (var_1_29))) {
               var_1_41 = (
                ((((( var_1_42 )) < (( 2 ))) ? (( var_1_42 )) : (( 2 ))))
   );
  }
 }
             if ( (( ((var_1_43) & (var_1_26))) > ( ((var_1_33) * (32))))) {
              var_1_44 = (
               ((((var_1_31) < 0 ) ? -(var_1_31) : (var_1_31)))
  );
 }
                               if (var_1_20) {
                                var_1_14 = (
                                 ((
                                  ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
   ) - (
                                  ((((( var_1_5 )) > (( (( var_1_16 ) - ( var_1_11 )) ))) ? (( var_1_5 )) : (( (( var_1_16 ) - ( var_1_11 )) ))))
   ))
  );
 }
             if ( ((var_1_23) <= (var_1_24))) {
             if ( (( ((var_1_24) + (var_1_23))) < ( ((((var_1_25) < 0 ) ? -(var_1_25) : (var_1_25)))))) {
              if ( ((var_1_23) <= ( (((((var_1_25)) < ((var_1_24))) ? ((var_1_25)) : ((var_1_24))))))) {
               var_1_22 = (
     var_1_26
    );
   } else {
               if ( ((var_1_23) != (var_1_27))) {
                var_1_22 = (
      var_1_26
     );
    } else {
                var_1_22 = (
      1
     );
    }
   }
  }
 }
 signed long int stepLocal_5 = (((((var_1_13)) > (( (~ (var_1_5))))) ? ((var_1_13)) : (( (~ (var_1_5))))));
 unsigned short int stepLocal_4 = var_1_14;
                               if ( ((stepLocal_5) >= ( (((((var_1_18)) < ((var_1_14))) ? ((var_1_18)) : ((var_1_14))))))) {
                                if ( ((stepLocal_4) <= (var_1_11))) {
                                 var_1_17 = (
    var_1_5
   );
  } else {
                                 var_1_17 = (
    var_1_6
   );
  }
 } else {
                                var_1_17 = (
   var_1_19
  );
 }
             if ( ((var_1_36) <= ( ((var_1_25) / (var_1_37))))) {
              var_1_35 = (
               ((
                ((((( var_1_38 )) < (( var_1_39 ))) ? (( var_1_38 )) : (( var_1_39 ))))
   ) - (
    var_1_40
   ))
  );
 }
 unsigned char stepLocal_3 = var_1_9;
 unsigned long int stepLocal_2 = var_1_17;
                               if ( ((stepLocal_2) < (var_1_6))) {
                                if ( (( ((var_1_6) != (var_1_5))) || (stepLocal_3))) {
                                 var_1_10 = (
                                  ((
                                   ((
                                   ((
       10000
      ) - (
       var_1_11
      ))
     ) - (
      var_1_5
     ))
    ) + (
                                   ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
    ))
   );
  } else {
                                 var_1_10 = (
    var_1_4
   );
  }
 } else {
                                var_1_10 = (
   var_1_13
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_4 >= 49150);
 assume_abort_if_not(var_1_4 <= 65534);
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32767);
 var_1_7 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 32767);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 1);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 8191);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= -16383);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= -32767);
 assume_abort_if_not(var_1_13 <= 32766);
 var_1_16 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_16 >= 16383);
 assume_abort_if_not(var_1_16 <= 32767);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 127);
 var_1_19 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 4294967294);
 var_1_21 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 0);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854776000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854776000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_24 >= -922337.2036854776000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 9223372.036854776000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_25 >= -922337.2036854776000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 9223372.036854776000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_26 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 65534);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= -922337.2036854776000e+13F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 1);
 var_1_30 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 1);
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854776000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854776000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_37 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= -1);
 assume_abort_if_not(var_1_38 <= 126);
 var_1_39 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_39 >= -1);
 assume_abort_if_not(var_1_39 <= 126);
 var_1_40 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 126);
 var_1_42 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 16383);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 0);
 assume_abort_if_not(var_1_43 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
}
int property(void) {
 if ( ((var_1_8) && (var_1_20))) {
 } else {
  if ( (( (((((var_1_7)) > ((var_1_5))) ? ((var_1_7)) : ((var_1_5))))) < (var_1_6))) {
  }
 }
 if ( ((var_1_17) < (var_1_6))) {
  if ( (( ((var_1_6) != (var_1_5))) || (var_1_9))) {
  } else {
  }
 } else {
 }
 if (var_1_20) {
 }
 if ( (( (((((var_1_13)) > (( (~ (var_1_5))))) ? ((var_1_13)) : (( (~ (var_1_5))))))) >= ( (((((var_1_18)) < ((var_1_14))) ? ((var_1_18)) : ((var_1_14))))))) {
  if ( ((var_1_14) <= (var_1_11))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_19) > (var_1_18))) {
 } else {
 }
 return ((
             ((
              ((
               ((
                ((
                                        ((
                                            ((
       var_1_8
      ) && (
       var_1_20
      ))
     ) ? (
                                         ((
       var_1_1
      ) == (
                                          ((unsigned short int) (
                                           ((
                                            ((
                                             ((((( 56892 )) < (( var_1_4 ))) ? (( 56892 )) : (( var_1_4 ))))
         ) - (
          var_1_5
         ))
        ) - (
                                            ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
        ))
       ))
      ))
     ) : (
                                         ((
                                               ((
                                                ((((( var_1_7 )) > (( var_1_5 ))) ? (( var_1_7 )) : (( var_1_5 ))))
       ) < (
        var_1_6
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((unsigned short int) (
         var_1_5
        ))
       ))
      ) : (
       1
      ))
     ))
    ) && (
                                                   ((
      var_1_8
     ) == (
                                                    ((unsigned char) (
                                                     ((
                                                      ((
                                                       ((
          var_1_7
         ) >= (
          var_1_5
         ))
        ) && (
                                                       ((
          var_1_4
         ) >= (
          last_1_var_1_1
         ))
        ))
       ) || (
        var_1_9
       ))
      ))
     ))
    ))
   ) && (
                                        ((
                                             ((
      var_1_17
     ) < (
      var_1_6
     ))
    ) ? (
                                         ((
                                              ((
                                               ((
        var_1_6
       ) != (
        var_1_5
       ))
      ) || (
       var_1_9
      ))
     ) ? (
                                          ((
       var_1_10
      ) == (
                                           ((signed short int) (
                                            ((
                                             ((
                                             ((
           10000
          ) - (
           var_1_11
          ))
         ) - (
          var_1_5
         ))
        ) + (
                                             ((((var_1_12) < 0 ) ? -(var_1_12) : (var_1_12)))
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_10
      ) == (
                                           ((signed short int) (
        var_1_4
       ))
      ))
     ))
    ) : (
                                         ((
      var_1_10
     ) == (
                                          ((signed short int) (
       var_1_13
      ))
     ))
    ))
   ))
  ) && (
                                       ((
    var_1_20
   ) ? (
                                        ((
     var_1_14
    ) == (
                                         ((unsigned short int) (
                                          ((
                                            ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))
      ) - (
                                            ((((( var_1_5 )) > (( (( var_1_16 ) - ( var_1_11 )) ))) ? (( var_1_5 )) : (( (( var_1_16 ) - ( var_1_11 )) ))))
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
                                               ((((( var_1_13 )) > (( (~ ( var_1_5 )) ))) ? (( var_1_13 )) : (( (~ ( var_1_5 )) ))))
   ) >= (
                                               ((((( var_1_18 )) < (( var_1_14 ))) ? (( var_1_18 )) : (( var_1_14 ))))
   ))
  ) ? (
                                        ((
                                               ((
     var_1_14
    ) <= (
     var_1_11
    ))
   ) ? (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned long int) (
      var_1_5
     ))
    ))
   ) : (
                                         ((
     var_1_17
    ) == (
                                          ((unsigned long int) (
      var_1_6
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_17
   ) == (
                                         ((unsigned long int) (
     var_1_19
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_19
  ) > (
   var_1_18
  ))
 ) ? (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned char) (
                                         ((
     var_1_8
    ) || (
                                          (! (
      var_1_21
     ))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_20
  ) == (
                                        ((unsigned char) (
    var_1_21
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
