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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch180Filler_PE_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 50;
unsigned short int var_1_5 = 8;
double var_1_6 = -0.75;
unsigned char var_1_7 = 1;
double var_1_8 = 32.8;
double var_1_9 = 128.8;
unsigned short int var_1_10 = 64;
unsigned char var_1_11 = 1;
unsigned short int var_1_12 = 32;
unsigned short int var_1_13 = 8;
signed long int var_1_14 = 128;
signed long int var_1_15 = -1;
signed char var_1_16 = 16;
signed char var_1_17 = 1;
signed long int var_1_18 = 100;
float var_1_19 = 3.6;
signed long int var_1_20 = 32;
float var_1_22 = 15.8;
float var_1_23 = 64.625;
signed short int var_1_24 = 8;
signed char var_1_25 = -1;
signed char var_1_26 = -32;
signed long int var_1_27 = -4;
double var_1_28 = 4.1;
double var_1_29 = 63.2;
unsigned short int var_1_30 = 16;
unsigned short int var_1_31 = 5;
unsigned long int var_1_32 = 100;
unsigned long int var_1_33 = 3452321122;
unsigned char var_1_34 = 0;
unsigned short int var_1_35 = 36671;
unsigned short int var_1_36 = 128;
unsigned char var_1_37 = 4;
unsigned char var_1_38 = 0;
unsigned long int var_1_39 = 100000000;
signed long int var_1_40 = 8;
signed short int var_1_41 = -2;
signed short int var_1_42 = 128;
unsigned short int last_1_var_1_10 = 64;
signed long int last_1_var_1_18 = 100;
void initially(void) {
}
void step(void) {
                                         if ( ((last_1_var_1_10) != ( ((last_1_var_1_10) & ( ((last_1_var_1_18) / (var_1_5))))))) {
                                          var_1_1 = (
                                           ((
    var_1_5
   ) + (
    last_1_var_1_10
   ))
  );
 } else {
                                          var_1_1 = (
   var_1_5
  );
 }
                                var_1_14 = (
                                 ((((( (( var_1_1 ) - ( var_1_12 )) )) < (( var_1_15 ))) ? (( (( var_1_1 ) - ( var_1_12 )) )) : (( var_1_15 ))))
 );
                               if (var_1_7) {
                                if ( (! (var_1_11))) {
                                 var_1_10 = (
                                  ((
     var_1_12
    ) + (
     var_1_13
    ))
   );
  } else {
                                 if ( ((var_1_5) > (last_1_var_1_10))) {
                                   var_1_10 = (
     var_1_13
    );
   }
  }
 }
                                var_1_19 = (
                                 ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
 );
 signed long int stepLocal_3 = 5;
                                if ( ((stepLocal_3) >= (var_1_14))) {
                                 var_1_18 = (
                                  ((
    var_1_12
   ) - (
                                   ((
     var_1_10
    ) + (
     var_1_5
    ))
   ))
  );
 }
 signed long int stepLocal_2 = var_1_18;
                                if ( ((stepLocal_2) > ( ((var_1_12) + ( ((var_1_1) / (var_1_5))))))) {
                                 if (var_1_7) {
                                  var_1_16 = (
    var_1_17
   );
  }
 }
 unsigned long int stepLocal_5 = ((var_1_15) * ( ((var_1_1) | (var_1_14))));
 unsigned long int stepLocal_4 = ((var_1_1) * (var_1_14));
                                if ( ((var_1_17) > (stepLocal_4))) {
                                 var_1_20 = (
                                  ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
  );
 } else {
                                 if ( ((stepLocal_5) != (var_1_18))) {
                                  var_1_20 = (
    -32
   );
  }
 }
 signed long int stepLocal_1 = var_1_20;
 unsigned short int stepLocal_0 = var_1_5;
                              if ( ((stepLocal_1) >= (var_1_1))) {
                               if (var_1_7) {
                                var_1_6 = (
                                 ((((( var_1_8 )) > (( (( 4.75 ) + ( var_1_9 )) ))) ? (( var_1_8 )) : (( (( 4.75 ) + ( var_1_9 )) ))))
   );
  }
 } else {
                               if ( (( (((((var_1_1)) < ((var_1_14))) ? ((var_1_1)) : ((var_1_14))))) >= (stepLocal_0))) {
                                var_1_6 = (
    var_1_9
   );
  }
 }
            var_1_22 = (
  var_1_23
 );
            if ( ((var_1_23) > (var_1_22))) {
             if ( (( ((var_1_25) + (var_1_26))) <= (var_1_27))) {
              var_1_24 = (
    var_1_26
   );
  } else {
              var_1_24 = (
               ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26)))
   );
  }
 }
             if ( (( (- (var_1_23))) >= (var_1_22))) {
              var_1_28 = (
               ((((( var_1_23 )) < (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) ))) ? (( var_1_23 )) : (( ((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))) ))))
  );
 }
             if ( (( ((var_1_24) + (var_1_31))) >= (var_1_27))) {
              if ( ((var_1_32) <= ( ((var_1_33) - (var_1_31))))) {
               if (var_1_34) {
                var_1_30 = (
                 ((
      var_1_35
     ) - (
                  ((
       16
      ) + (
       var_1_36
      ))
     ))
    );
   }
  }
 } else {
              if ( (( ((var_1_35) / (1))) <= (8))) {
               var_1_30 = (
    var_1_36
   );
  }
 }
             var_1_37 = (
  var_1_38
 );
             if ( ((var_1_27) > ( ((var_1_38) + ( ((var_1_30) - (var_1_31))))))) {
              var_1_39 = (
               ((
    10u
   ) + (
    var_1_37
   ))
  );
 }
             if ( ((var_1_24) < (var_1_41))) {
              var_1_40 = (
               ((((( (( (( var_1_31 ) + ( var_1_30 )) ) - ( 500 )) )) < (( var_1_26 ))) ? (( (( (( var_1_31 ) + ( var_1_30 )) ) - ( 500 )) )) : (( var_1_26 ))))
  );
 }
             if ( (( (~ ( ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))))) >= (var_1_41))) {
              var_1_42 = (
               (((((((((( var_1_38 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_38 ) - ( var_1_36 ))) : ((( var_1_38 ) - ( var_1_36 )))))) < 0 ) ? -((((((( var_1_38 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_38 ) - ( var_1_36 ))) : ((( var_1_38 ) - ( var_1_36 )))))) : ((((((( var_1_38 ) - ( var_1_36 ))) < 0 ) ? -((( var_1_38 ) - ( var_1_36 ))) : ((( var_1_38 ) - ( var_1_36 ))))))))
  );
 }
}
void updateVariables(void) {
 var_1_5 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 65535);
 assume_abort_if_not(var_1_5 != 0);
 var_1_7 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 1);
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -922337.2036854766000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 9223372.036854766000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_9 >= -461168.6018427383000e+13F && var_1_9 <= -1.0e-20F) || (var_1_9 <= 4611686.018427383000e+12F && var_1_9 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 32767);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_15 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_15 >= -2147483647);
 assume_abort_if_not(var_1_15 <= 2147483646);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -127);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_23 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_23 >= -922337.2036854766000e+13F && var_1_23 <= -1.0e-20F) || (var_1_23 <= 9223372.036854766000e+12F && var_1_23 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_25 >= -128);
 assume_abort_if_not(var_1_25 <= 127);
 var_1_26 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_26 >= -128);
 assume_abort_if_not(var_1_26 <= 127);
 var_1_27 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_27 >= -2147483648);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_31 >= 0);
 assume_abort_if_not(var_1_31 <= 65535);
 var_1_32 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 4294967295);
 var_1_33 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_33 >= 2147483647);
 assume_abort_if_not(var_1_33 <= 4294967295);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 1);
 var_1_35 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_35 >= 32767);
 assume_abort_if_not(var_1_35 <= 65534);
 var_1_36 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 16383);
 var_1_38 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 254);
 var_1_41 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_41 >= -32768);
 assume_abort_if_not(var_1_41 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_10 = var_1_10;
 last_1_var_1_18 = var_1_18;
}
int property(void) {
 if ( ((last_1_var_1_10) != ( ((last_1_var_1_10) & ( ((last_1_var_1_18) / (var_1_5))))))) {
 } else {
 }
 if ( ((var_1_20) >= (var_1_1))) {
  if (var_1_7) {
  }
 } else {
  if ( (( (((((var_1_1)) < ((var_1_14))) ? ((var_1_1)) : ((var_1_14))))) >= (var_1_5))) {
  }
 }
 if (var_1_7) {
  if ( (! (var_1_11))) {
  } else {
   if ( ((var_1_5) > (last_1_var_1_10))) {
   }
  }
 }
 if ( ((var_1_18) > ( ((var_1_12) + ( ((var_1_1) / (var_1_5))))))) {
  if (var_1_7) {
  }
 }
 if ( ((5) >= (var_1_14))) {
 }
 if ( ((var_1_17) > ( ((var_1_1) * (var_1_14))))) {
 } else {
  if ( (( ((var_1_15) * ( ((var_1_1) | (var_1_14))))) != (var_1_18))) {
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
         last_1_var_1_10
        ) != (
                                                            ((
          last_1_var_1_10
         ) & (
                                                             ((
           last_1_var_1_18
          ) / (
           var_1_5
          ))
         ))
        ))
       ) ? (
                                                       ((
         var_1_1
        ) == (
                                                        ((unsigned long int) (
                                                         ((
           var_1_5
          ) + (
           last_1_var_1_10
          ))
         ))
        ))
       ) : (
                                                       ((
         var_1_1
        ) == (
                                                        ((unsigned long int) (
          var_1_5
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
         var_1_20
        ) >= (
         var_1_1
        ))
       ) ? (
                                            ((
         var_1_7
        ) ? (
                                             ((
          var_1_6
         ) == (
                                              ((double) (
                                               ((((( var_1_8 )) > (( (( 4.75 ) + ( var_1_9 )) ))) ? (( var_1_8 )) : (( (( 4.75 ) + ( var_1_9 )) ))))
          ))
         ))
        ) : (
         1
        ))
       ) : (
                                            ((
                                                  ((
                                                   ((((( var_1_1 )) < (( var_1_14 ))) ? (( var_1_1 )) : (( var_1_14 ))))
         ) >= (
          var_1_5
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
      ))
     ) && (
                                           ((
       var_1_7
      ) ? (
                                            ((
                                                  (! (
         var_1_11
        ))
       ) ? (
                                             ((
         var_1_10
        ) == (
                                              ((unsigned short int) (
                                               ((
           var_1_12
          ) + (
           var_1_13
          ))
         ))
        ))
       ) : (
                                             ((
                                                    ((
          var_1_5
         ) > (
          last_1_var_1_10
         ))
        ) ? (
                                              ((
          var_1_10
         ) == (
                                               ((unsigned short int) (
           var_1_13
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
      var_1_14
     ) == (
                                           ((signed long int) (
                                            ((((( (( var_1_1 ) - ( var_1_12 )) )) < (( var_1_15 ))) ? (( (( var_1_1 ) - ( var_1_12 )) )) : (( var_1_15 ))))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_18
     ) > (
                                                 ((
       var_1_12
      ) + (
                                                  ((
        var_1_1
       ) / (
        var_1_5
       ))
      ))
     ))
    ) ? (
                                          ((
      var_1_7
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
    ) : (
     1
    ))
   ))
  ) && (
                                        ((
                                               ((
     5
    ) >= (
     var_1_14
    ))
   ) ? (
                                         ((
     var_1_18
    ) == (
                                          ((signed long int) (
                                           ((
       var_1_12
      ) - (
                                            ((
        var_1_10
       ) + (
        var_1_5
       ))
      ))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_19
  ) == (
                                        ((float) (
                                         ((((( var_1_8 )) < (( var_1_9 ))) ? (( var_1_8 )) : (( var_1_9 ))))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_17
  ) > (
                                              ((
    var_1_1
   ) * (
    var_1_14
   ))
  ))
 ) ? (
                                       ((
   var_1_20
  ) == (
                                        ((signed long int) (
                                         ((((var_1_14) < 0 ) ? -(var_1_14) : (var_1_14)))
   ))
  ))
 ) : (
                                       ((
                                              ((
                                               ((
     var_1_15
    ) * (
                                                ((
      var_1_1
     ) | (
      var_1_14
     ))
    ))
   ) != (
    var_1_18
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((signed long int) (
     -32
    ))
   ))
  ) : (
   1
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
