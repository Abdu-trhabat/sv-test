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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch191Filler_PR_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned long int var_1_1 = 0;
signed short int var_1_2 = -8;
signed short int var_1_3 = -256;
signed short int var_1_5 = 64;
unsigned long int var_1_6 = 32;
unsigned long int var_1_7 = 5;
unsigned long int var_1_9 = 10;
unsigned long int var_1_10 = 128;
unsigned char var_1_11 = 1;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 1;
unsigned char var_1_15 = 1;
unsigned char var_1_16 = 64;
double var_1_17 = 9.25;
double var_1_18 = 99999.25;
double var_1_19 = 499.109;
signed char var_1_20 = -1;
signed char var_1_21 = 4;
signed char var_1_22 = 0;
signed char var_1_23 = 5;
double var_1_24 = 16.6;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 1;
signed char var_1_28 = -50;
double var_1_29 = 200.25;
double var_1_30 = 63.5;
double var_1_32 = 0.5;
double var_1_34 = 1.15;
unsigned char var_1_35 = 0;
unsigned char var_1_36 = 0;
unsigned char var_1_37 = 0;
signed long int var_1_38 = -500;
signed short int var_1_39 = -256;
signed short int var_1_40 = 5;
signed short int var_1_41 = 500;
unsigned long int last_1_var_1_1 = 0;
unsigned long int last_1_var_1_9 = 10;
unsigned long int last_1_var_1_10 = 128;
unsigned char last_1_var_1_11 = 1;
void initially(void) {
}
void step(void) {
                                             if ( (( ((last_1_var_1_9) < (last_1_var_1_10))) || (var_1_13))) {
                                              var_1_25 = (
                                               ((
                                                ((
                                                 ((
      var_1_7
     ) | (
      var_1_22
     ))
    ) > (
     last_1_var_1_1
    ))
   ) && (
                                                 ((
                                                  ((
      var_1_19
     ) < (
      var_1_18
     ))
    ) && (
     var_1_26
    ))
   ))
  );
 }
                   if ( (( ((var_1_23) > ( (((((var_1_22)) > ((var_1_10))) ? ((var_1_22)) : ((var_1_10))))))) && (var_1_26))) {
                    var_1_32 = (
                     ((((( 9.6 )) < (( var_1_19 ))) ? (( 9.6 )) : (( var_1_19 ))))
  );
 } else {
                    if (var_1_26) {
                     var_1_32 = (
    var_1_19
   );
  } else {
                     var_1_32 = (
    15.5
   );
  }
 }
                                if (var_1_25) {
                                 if ( (! ( (! ( ((var_1_3) < (var_1_5))))))) {
                                  var_1_11 = (
                                   ((
     var_1_25
    ) || (
     var_1_13
    ))
   );
  }
 } else {
                                 var_1_11 = (
                                  ((
    var_1_13
   ) && (
    var_1_14
   ))
  );
 }
                  var_1_27 = (
  1
 );
 signed short int stepLocal_0 = var_1_2;
                                      if ( ((stepLocal_0) >= ( ((((( (((((var_1_3)) > ((last_1_var_1_1))) ? ((var_1_3)) : ((last_1_var_1_1)))))) > ((var_1_5))) ? (( (((((var_1_3)) > ((last_1_var_1_1))) ? ((var_1_3)) : ((last_1_var_1_1)))))) : ((var_1_5))))))) {
                                       var_1_1 = (
                                        ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
  );
 } else {
                                       if (last_1_var_1_11) {
                                        var_1_1 = (
    var_1_6
   );
  }
 }
                   if ( ((var_1_18) < ( ((((( ((((64.25) < 0 ) ? -(64.25) : (64.25))))) > ((var_1_18))) ? (( ((((64.25) < 0 ) ? -(64.25) : (64.25))))) : ((var_1_18))))))) {
                    var_1_35 = (
                     ((
    var_1_36
   ) || (
    var_1_37
   ))
  );
 } else {
                    var_1_35 = (
                     (! (
                      (! (
     1
    ))
   ))
  );
 }
                               if (var_1_11) {
                                var_1_9 = (
   1000u
  );
 } else {
                                var_1_9 = (
   var_1_6
  );
 }
 unsigned char stepLocal_1 = var_1_25;
                               if ( (( ((var_1_6) >= ( (((((last_1_var_1_10)) < ((var_1_1))) ? ((last_1_var_1_10)) : ((var_1_1))))))) && (stepLocal_1))) {
                                var_1_10 = (
                                 ((((((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))) < 0 ) ? -(((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))) : (((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))))))
  );
 }
                                var_1_17 = (
                                 ((
   var_1_18
  ) + (
   var_1_19
  ))
 );
                   if ( (( ((var_1_18) + (var_1_19))) > ( (( (- (1.5))) / ( ((((5.9) < 0 ) ? -(5.9) : (5.9)))))))) {
                    if (var_1_25) {
                    var_1_28 = (
    var_1_22
   );
  } else {
                     var_1_28 = (
    -100
   );
  }
 } else {
                    var_1_28 = (
   var_1_22
  );
 }
                                var_1_20 = (
                                 ((
   var_1_21
  ) - (
                                  ((
    var_1_22
   ) + (
    var_1_23
   ))
  ))
 );
 unsigned char stepLocal_2 = var_1_11;
                                if ( (( ((var_1_20) == ( ((var_1_1) * (var_1_22))))) || (stepLocal_2))) {
                                 var_1_24 = (
   var_1_18
  );
 }
                   if ( ((var_1_34) <= ( (( (((((var_1_30)) > ((var_1_29))) ? ((var_1_30)) : ((var_1_29))))) + (var_1_32))))) {
                    if (var_1_11) {
                     var_1_38 = (
                      ((((var_1_10) < 0 ) ? -(var_1_10) : (var_1_10)))
   );
  } else {
                     var_1_38 = (
                      ((
                       ((((var_1_7) < 0 ) ? -(var_1_7) : (var_1_7)))
    ) + (
     var_1_10
    ))
   );
  }
 } else {
                    if ( (( (((((var_1_21)) > ((var_1_10))) ? ((var_1_21)) : ((var_1_10))))) <= (var_1_7))) {
                     if ( (( ((var_1_29) <= ( (((((var_1_32)) > ((var_1_30))) ? ((var_1_32)) : ((var_1_30))))))) && ( ((var_1_7) <= (var_1_10))))) {
                      var_1_38 = (
     var_1_21
    );
   }
  }
 }
                   var_1_41 = (
  var_1_1
 );
                                if ( ((var_1_1) > (var_1_10))) {
                                 var_1_15 = (
                                  ((
    10
   ) + (
    var_1_16
   ))
  );
 }
                   var_1_39 = (
  var_1_40
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_2 >= -32768);
 assume_abort_if_not(var_1_2 <= 32767);
 var_1_3 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_3 >= -32768);
 assume_abort_if_not(var_1_3 <= 32767);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -32768);
 assume_abort_if_not(var_1_5 <= 32767);
 var_1_6 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 4294967294);
 var_1_7 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 4294967294);
 var_1_13 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_13 >= 1);
 assume_abort_if_not(var_1_13 <= 1);
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 1);
 assume_abort_if_not(var_1_14 <= 1);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 127);
 var_1_18 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_18 >= -461168.6018427383000e+13F && var_1_18 <= -1.0e-20F) || (var_1_18 <= 4611686.018427383000e+12F && var_1_18 >= 1.0e-20F ));
 var_1_19 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_19 >= -461168.6018427383000e+13F && var_1_19 <= -1.0e-20F) || (var_1_19 <= 4611686.018427383000e+12F && var_1_19 >= 1.0e-20F ));
 var_1_21 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_21 >= -1);
 assume_abort_if_not(var_1_21 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 63);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 63);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854776000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_34 >= -922337.2036854766000e+13F && var_1_34 <= -1.0e-20F) || (var_1_34 <= 9223372.036854766000e+12F && var_1_34 >= 1.0e-20F ));
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 0);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 0);
 var_1_40 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_40 >= -32767);
 assume_abort_if_not(var_1_40 <= 32766);
}
void updateLastVariables(void) {
 last_1_var_1_1 = var_1_1;
 last_1_var_1_9 = var_1_9;
 last_1_var_1_10 = var_1_10;
 last_1_var_1_11 = var_1_11;
}
int property(void) {
 if ( ((var_1_2) >= ( ((((( (((((var_1_3)) > ((last_1_var_1_1))) ? ((var_1_3)) : ((last_1_var_1_1)))))) > ((var_1_5))) ? (( (((((var_1_3)) > ((last_1_var_1_1))) ? ((var_1_3)) : ((last_1_var_1_1)))))) : ((var_1_5))))))) {
 } else {
  if (last_1_var_1_11) {
  }
 }
 if (var_1_11) {
 } else {
 }
 if ( (( ((var_1_6) >= ( (((((last_1_var_1_10)) < ((var_1_1))) ? ((last_1_var_1_10)) : ((var_1_1))))))) && (var_1_25))) {
 }
 if (var_1_25) {
  if ( (! ( (! ( ((var_1_3) < (var_1_5))))))) {
  }
 } else {
 }
 if ( ((var_1_1) > (var_1_10))) {
 }
 if ( (( ((var_1_20) == ( ((var_1_1) * (var_1_22))))) || (var_1_11))) {
 }
 if ( (( ((last_1_var_1_9) < (last_1_var_1_10))) || (var_1_13))) {
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
         ) >= (
                                                         ((((( ((((( var_1_3 )) > (( last_1_var_1_1 ))) ? (( var_1_3 )) : (( last_1_var_1_1 )))) )) > (( var_1_5 ))) ? (( ((((( var_1_3 )) > (( last_1_var_1_1 ))) ? (( var_1_3 )) : (( last_1_var_1_1 )))) )) : (( var_1_5 ))))
         ))
        ) ? (
                                                    ((
          var_1_1
         ) == (
                                                     ((unsigned long int) (
                                                      ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
          ))
         ))
        ) : (
                                                    ((
          last_1_var_1_11
         ) ? (
                                                     ((
           var_1_1
          ) == (
                                                      ((unsigned long int) (
            var_1_6
           ))
          ))
         ) : (
          1
         ))
        ))
       ) && (
                                            ((
         var_1_11
        ) ? (
                                             ((
          var_1_9
         ) == (
                                              ((unsigned long int) (
           1000u
          ))
         ))
        ) : (
                                             ((
          var_1_9
         ) == (
                                              ((unsigned long int) (
           var_1_6
          ))
         ))
        ))
       ))
      ) && (
                                           ((
                                                 ((
                                                  ((
          var_1_6
         ) >= (
                                                   ((((( last_1_var_1_10 )) < (( var_1_1 ))) ? (( last_1_var_1_10 )) : (( var_1_1 ))))
         ))
        ) && (
         var_1_25
        ))
       ) ? (
                                            ((
         var_1_10
        ) == (
                                             ((unsigned long int) (
                                              ((((((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))) < 0 ) ? -(((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))) : (((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 )))))))
         ))
        ))
       ) : (
        1
       ))
      ))
     ) && (
                                           ((
       var_1_25
      ) ? (
                                            ((
                                                   (! (
                                                    (! (
                                                     ((
           var_1_3
          ) < (
           var_1_5
          ))
         ))
        ))
       ) ? (
                                             ((
         var_1_11
        ) == (
                                              ((unsigned char) (
                                               ((
           var_1_25
          ) || (
           var_1_13
          ))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                            ((
        var_1_11
       ) == (
                                             ((unsigned char) (
                                              ((
          var_1_13
         ) && (
          var_1_14
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_1
      ) > (
       var_1_10
      ))
     ) ? (
                                           ((
       var_1_15
      ) == (
                                            ((unsigned char) (
                                             ((
         10
        ) + (
         var_1_16
        ))
       ))
      ))
     ) : (
      1
     ))
    ))
   ) && (
                                         ((
     var_1_17
    ) == (
                                          ((double) (
                                           ((
       var_1_18
      ) + (
       var_1_19
      ))
     ))
    ))
   ))
  ) && (
                                        ((
    var_1_20
   ) == (
                                         ((signed char) (
                                          ((
      var_1_21
     ) - (
                                           ((
       var_1_22
      ) + (
       var_1_23
      ))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((
     var_1_20
    ) == (
                                                ((
      var_1_1
     ) * (
      var_1_22
     ))
    ))
   ) || (
    var_1_11
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((double) (
     var_1_18
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
    last_1_var_1_9
   ) < (
    last_1_var_1_10
   ))
  ) || (
   var_1_13
  ))
 ) ? (
                                                     ((
   var_1_25
  ) == (
                                                      ((unsigned char) (
                                                       ((
                                                        ((
                                                         ((
       var_1_7
      ) | (
       var_1_22
      ))
     ) > (
      last_1_var_1_1
     ))
    ) && (
                                                        ((
                                                         ((
       var_1_19
      ) < (
       var_1_18
      ))
     ) && (
      var_1_26
     ))
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
