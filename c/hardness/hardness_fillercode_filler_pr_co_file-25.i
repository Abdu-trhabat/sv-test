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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch25Filler_PR_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed long int var_1_1 = -256;
unsigned char var_1_2 = 1;
signed long int var_1_5 = -256;
unsigned short int var_1_6 = 50;
signed long int var_1_7 = 200;
unsigned short int var_1_8 = 64852;
unsigned short int var_1_9 = 5;
unsigned char var_1_10 = 1;
unsigned char var_1_11 = 1;
unsigned char var_1_12 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
signed char var_1_15 = -1;
unsigned char var_1_16 = 64;
signed char var_1_17 = 0;
signed char var_1_18 = 0;
signed char var_1_19 = 1;
signed char var_1_20 = 4;
unsigned char var_1_21 = 1;
float var_1_22 = 127.5;
signed short int var_1_23 = -2;
signed char var_1_24 = 32;
unsigned long int var_1_25 = 16;
unsigned char var_1_26 = 1;
unsigned long int var_1_27 = 64;
unsigned long int var_1_28 = 4;
double var_1_29 = 15.5;
double var_1_30 = 256.7;
unsigned long int var_1_31 = 5;
unsigned char var_1_32 = 0;
signed long int var_1_33 = 32;
signed long int var_1_34 = -5;
unsigned char var_1_35 = 32;
unsigned char var_1_36 = 5;
unsigned long int var_1_37 = 64;
unsigned long int var_1_39 = 0;
unsigned long int var_1_40 = 4081086727;
unsigned short int last_1_var_1_6 = 50;
unsigned char last_1_var_1_10 = 1;
unsigned char last_1_var_1_21 = 1;
void initially(void) {
}
void step(void) {
 unsigned char stepLocal_1 = ((last_1_var_1_21) >= (last_1_var_1_6));
 signed long int stepLocal_0 = 256;
                                         if ( ((last_1_var_1_10) && (stepLocal_1))) {
                                          if ( ((stepLocal_0) != ( ((last_1_var_1_6) + (last_1_var_1_21))))) {
                                           var_1_1 = (
                                            ((((( (( var_1_5 ) + ( -25 )) )) > (( last_1_var_1_6 ))) ? (( (( var_1_5 ) + ( -25 )) )) : (( last_1_var_1_6 ))))
   );
  }
 } else {
                                          var_1_1 = (
   -100
  );
 }
                   if ( ((var_1_29) > (var_1_30))) {
                    if ( (( ((var_1_25) + (var_1_28))) > (var_1_27))) {
                     var_1_33 = (
    var_1_34
   );
  } else {
                     if ( (( (- (var_1_29))) <= (var_1_30))) {
                      var_1_33 = (
     var_1_34
    );
   } else {
                      var_1_33 = (
     -50
    );
   }
  }
 }
                   if (var_1_10) {
                    if ( ((64) <= (var_1_1))) {
                     if ( (( (- (var_1_39))) <= (var_1_1))) {
                      var_1_37 = (
                       ((
                        ((((var_1_40) < 0 ) ? -(var_1_40) : (var_1_40)))
     ) - (
      64u
     ))
    );
   }
  }
 } else {
                    if ( ((var_1_34) == (var_1_6))) {
                     var_1_37 = (
                      ((((((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) < 0 ) ? -(((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6)))) : (((((var_1_6) < 0 ) ? -(var_1_6) : (var_1_6))))))
   );
  } else {
                     var_1_37 = (
    var_1_36
   );
  }
 }
 unsigned char stepLocal_2 = var_1_11;
                               if ( ((var_1_2) || (stepLocal_2))) {
                                var_1_10 = (
                                 (! (
                                  (! (
                                   ((
      var_1_12
     ) && (
      var_1_13
     ))
    ))
   ))
  );
 } else {
                                var_1_10 = (
                                 (! (
    var_1_14
   ))
  );
 }
                  if (var_1_10) {
                   var_1_25 = (
                    (((((( var_1_27 ) + ( var_1_28 ))) < 0 ) ? -((( var_1_27 ) + ( var_1_28 ))) : ((( var_1_27 ) + ( var_1_28 )))))
  );
 }
                                if ( ((16.5f) > ( ((((( ((1.75f) * (var_1_22)))) > ((15.375f))) ? (( ((1.75f) * (var_1_22)))) : ((15.375f))))))) {
                                 var_1_21 = (
   var_1_20
  );
 }
                   var_1_35 = (
  var_1_36
 );
 signed long int stepLocal_4 = (( ((var_1_20) - (var_1_24))) * (var_1_1));
 unsigned char stepLocal_3 = var_1_12;
                                if ( ((var_1_10) || (stepLocal_3))) {
                                 if ( ((var_1_18) > (stepLocal_4))) {
                                  var_1_23 = (
    var_1_1
   );
  } else {
                                  var_1_23 = (
    var_1_21
   );
  }
 }
                   if ( ((var_1_26) || (var_1_32))) {
                    var_1_31 = (
                     ((
    var_1_28
   ) + (
    var_1_27
   ))
  );
 } else {
                    var_1_31 = (
   var_1_28
  );
 }
                              if ( ((var_1_5) != ( ((var_1_7) | (last_1_var_1_6))))) {
                               var_1_6 = (
                                ((((( (( var_1_8 ) - ( ((((( var_1_23 )) > (( last_1_var_1_6 ))) ? (( var_1_23 )) : (( last_1_var_1_6 )))) )) )) < (( var_1_9 ))) ? (( (( var_1_8 ) - ( ((((( var_1_23 )) > (( last_1_var_1_6 ))) ? (( var_1_23 )) : (( last_1_var_1_6 )))) )) )) : (( var_1_9 ))))
  );
 } else {
                               var_1_6 = (
   var_1_9
  );
 }
                               if ( ((var_1_5) > (var_1_23))) {
                                if ( ((var_1_23) < ( ((4) / (var_1_16))))) {
                                 var_1_15 = (
                                  ((
     var_1_17
    ) - (
     var_1_18
    ))
   );
  } else {
                                 var_1_15 = (
                                  ((
                                   ((((( var_1_18 )) < (( ((((( var_1_17 )) < (( var_1_19 ))) ? (( var_1_17 )) : (( var_1_19 )))) ))) ? (( var_1_18 )) : (( ((((( var_1_17 )) < (( var_1_19 ))) ? (( var_1_17 )) : (( var_1_19 )))) ))))
    ) - (
     var_1_20
    ))
   );
  }
 }
                   if ( ((var_1_27) < (var_1_28))) {
                    if ( ((var_1_28) < ( ((var_1_27) ^ (var_1_25))))) {
                     var_1_29 = (
                      ((((2.75) < 0 ) ? -(2.75) : (2.75)))
   );
  }
 } else {
                    if ( ((var_1_10) || ( ((var_1_25) <= (var_1_28))))) {
                     if (var_1_10) {
                      var_1_29 = (
                       ((((((((( var_1_30 )) > (( 4.2 ))) ? (( var_1_30 )) : (( 4.2 ))))) < 0 ) ? -(((((( var_1_30 )) > (( 4.2 ))) ? (( var_1_30 )) : (( 4.2 ))))) : (((((( var_1_30 )) > (( 4.2 ))) ? (( var_1_30 )) : (( 4.2 )))))))
    );
   }
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= -1073741823);
 assume_abort_if_not(var_1_5 <= 1073741823);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_8 >= 32767);
 assume_abort_if_not(var_1_8 <= 65534);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_12 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_12 >= 1);
 assume_abort_if_not(var_1_12 <= 1);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 255);
 assume_abort_if_not(var_1_16 != 0);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 126);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -1);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_22 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_22 >= -922337.2036854776000e+13F && var_1_22 <= -1.0e-20F) || (var_1_22 <= 9223372.036854776000e+12F && var_1_22 >= 1.0e-20F ));
 var_1_24 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 2147483647);
 var_1_28 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 0);
 assume_abort_if_not(var_1_32 <= 1);
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483647);
 assume_abort_if_not(var_1_34 <= 2147483646);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 254);
 var_1_39 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 4294967295);
 var_1_40 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_40 >= 2147483647);
 assume_abort_if_not(var_1_40 <= 4294967294);
}
void updateLastVariables(void) {
 last_1_var_1_6 = var_1_6;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_21 = var_1_21;
}
int property(void) {
 if ( ((last_1_var_1_10) && ( ((last_1_var_1_21) >= (last_1_var_1_6))))) {
  if ( ((256) != ( ((last_1_var_1_6) + (last_1_var_1_21))))) {
  }
 } else {
 }
 if ( ((var_1_5) != ( ((var_1_7) | (last_1_var_1_6))))) {
 } else {
 }
 if ( ((var_1_2) || (var_1_11))) {
 } else {
 }
 if ( ((var_1_5) > (var_1_23))) {
  if ( ((var_1_23) < ( ((4) / (var_1_16))))) {
  } else {
  }
 }
 if ( ((16.5f) > ( ((((( ((1.75f) * (var_1_22)))) > ((15.375f))) ? (( ((1.75f) * (var_1_22)))) : ((15.375f))))))) {
 }
 if ( ((var_1_10) || (var_1_12))) {
  if ( ((var_1_18) > ( (( ((var_1_20) - (var_1_24))) * (var_1_1))))) {
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
       last_1_var_1_10
      ) && (
                                                          ((
        last_1_var_1_21
       ) >= (
        last_1_var_1_6
       ))
      ))
     ) ? (
                                                     ((
                                                           ((
        256
       ) != (
                                                            ((
         last_1_var_1_6
        ) + (
         last_1_var_1_21
        ))
       ))
      ) ? (
                                                      ((
        var_1_1
       ) == (
                                                       ((signed long int) (
                                                        ((((( (( var_1_5 ) + ( -25 )) )) > (( last_1_var_1_6 ))) ? (( (( var_1_5 ) + ( -25 )) )) : (( last_1_var_1_6 ))))
        ))
       ))
      ) : (
       1
      ))
     ) : (
                                                     ((
       var_1_1
      ) == (
                                                      ((signed long int) (
        -100
       ))
      ))
     ))
    ) && (
                                         ((
                                               ((
       var_1_5
      ) != (
                                                ((
        var_1_7
       ) | (
        last_1_var_1_6
       ))
      ))
     ) ? (
                                          ((
       var_1_6
      ) == (
                                           ((unsigned short int) (
                                            ((((( (( var_1_8 ) - ( ((((( var_1_23 )) > (( last_1_var_1_6 ))) ? (( var_1_23 )) : (( last_1_var_1_6 )))) )) )) < (( var_1_9 ))) ? (( (( var_1_8 ) - ( ((((( var_1_23 )) > (( last_1_var_1_6 ))) ? (( var_1_23 )) : (( last_1_var_1_6 )))) )) )) : (( var_1_9 ))))
       ))
      ))
     ) : (
                                          ((
       var_1_6
      ) == (
                                           ((unsigned short int) (
        var_1_9
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                              ((
      var_1_2
     ) || (
      var_1_11
     ))
    ) ? (
                                          ((
      var_1_10
     ) == (
                                           ((unsigned char) (
                                            (! (
                                             (! (
                                              ((
          var_1_12
         ) && (
          var_1_13
         ))
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_10
     ) == (
                                           ((unsigned char) (
                                            (! (
        var_1_14
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_5
    ) > (
     var_1_23
    ))
   ) ? (
                                         ((
                                                ((
      var_1_23
     ) < (
                                                 ((
       4
      ) / (
       var_1_16
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((signed char) (
                                            ((
        var_1_17
       ) - (
        var_1_18
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((signed char) (
                                            ((
                                             ((((( var_1_18 )) < (( ((((( var_1_17 )) < (( var_1_19 ))) ? (( var_1_17 )) : (( var_1_19 )))) ))) ? (( var_1_18 )) : (( ((((( var_1_17 )) < (( var_1_19 ))) ? (( var_1_17 )) : (( var_1_19 )))) ))))
       ) - (
        var_1_20
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
                                              ((
    16.5f
   ) > (
                                               ((((( (( 1.75f ) * ( var_1_22 )) )) > (( 15.375f ))) ? (( (( 1.75f ) * ( var_1_22 )) )) : (( 15.375f ))))
   ))
  ) ? (
                                        ((
    var_1_21
   ) == (
                                         ((unsigned char) (
     var_1_20
    ))
   ))
  ) : (
   1
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_10
  ) || (
   var_1_12
  ))
 ) ? (
                                       ((
                                              ((
    var_1_18
   ) > (
                                               ((
                                                ((
      var_1_20
     ) - (
      var_1_24
     ))
    ) * (
     var_1_1
    ))
   ))
  ) ? (
                                        ((
    var_1_23
   ) == (
                                         ((signed short int) (
     var_1_1
    ))
   ))
  ) : (
                                        ((
    var_1_23
   ) == (
                                         ((signed short int) (
     var_1_21
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
