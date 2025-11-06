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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch79Filler_PE_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 2;
unsigned char var_1_2 = 1;
unsigned char var_1_3 = 0;
signed short int var_1_4 = -2;
signed short int var_1_5 = 50;
signed short int var_1_6 = 2;
unsigned char var_1_7 = 50;
unsigned char var_1_8 = 0;
unsigned long int var_1_9 = 4;
unsigned short int var_1_10 = 5;
signed long int var_1_11 = -5;
unsigned char var_1_12 = 1;
double var_1_13 = 255.375;
double var_1_14 = 64.25;
double var_1_15 = 64.8;
signed char var_1_16 = 2;
signed char var_1_17 = 16;
signed char var_1_18 = -50;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
signed char var_1_21 = -100;
unsigned long int var_1_22 = 3689088955;
unsigned long int var_1_23 = 1113264439;
unsigned long int var_1_24 = 256;
signed short int var_1_25 = 16;
signed short int var_1_26 = 64;
double var_1_28 = 255.5;
double var_1_29 = 16.5;
double var_1_30 = 9.25;
double var_1_31 = 8.8;
signed long int var_1_32 = 4;
signed long int var_1_33 = 64;
double var_1_34 = 63.6;
unsigned char var_1_35 = 1;
signed long int var_1_36 = 4;
signed char var_1_37 = 4;
double var_1_38 = 99.25;
double var_1_39 = 128.5;
unsigned char var_1_40 = 0;
unsigned char var_1_41 = 1;
unsigned char var_1_42 = 0;
double var_1_43 = 16.75;
double var_1_44 = 8.8;
signed long int var_1_45 = -16;
signed long int var_1_46 = 10;
void initially(void) {
}
void step(void) {
                               if ( (( ((((( (((((var_1_13)) > ((9.999999999999025E12))) ? ((var_1_13)) : ((9.999999999999025E12)))))) < ((var_1_14))) ? (( (((((var_1_13)) > ((9.999999999999025E12))) ? ((var_1_13)) : ((9.999999999999025E12)))))) : ((var_1_14))))) > (var_1_15))) {
                                 var_1_12 = (
   0
  );
 }
                                if ( ((var_1_12) && ( ((50.5) <= ( ((var_1_15) / (99999.24))))))) {
                                 var_1_16 = (
                                  ((
    var_1_17
   ) - (
                                   (((((( -50 ) + ( var_1_18 ))) < 0 ) ? -((( -50 ) + ( var_1_18 ))) : ((( -50 ) + ( var_1_18 )))))
   ))
  );
 } else {
                                 var_1_16 = (
                                  ((((( (( var_1_17 ) - ( var_1_19 )) )) > (( (( var_1_18 ) + ( var_1_20 )) ))) ? (( (( var_1_17 ) - ( var_1_19 )) )) : (( (( var_1_18 ) + ( var_1_20 )) ))))
  );
 }
                              if (var_1_12) {
                               if ( (! (var_1_12))) {
                                var_1_1 = (
                                 ((
     var_1_4
    ) + (
     5
    ))
   );
  } else {
                                var_1_1 = (
                                 ((
     var_1_5
    ) - (
     var_1_6
    ))
   );
  }
 } else {
                               var_1_1 = (
   var_1_5
  );
 }
 signed long int stepLocal_1 = (((((var_1_5)) < (( ((var_1_6) * (var_1_4))))) ? ((var_1_5)) : (( ((var_1_6) * (var_1_4))))));
 unsigned char stepLocal_0 = var_1_3;
                               if ( ((stepLocal_0) && (var_1_2))) {
                                if ( ((stepLocal_1) > (var_1_1))) {
                                var_1_7 = (
    var_1_8
   );
  } else {
                                 var_1_7 = (
    200
   );
  }
 } else {
                                var_1_7 = (
   var_1_8
  );
 }
                               if ( ((var_1_7) <= (var_1_4))) {
                                if ( (( ((var_1_8) / (var_1_10))) == ( (( ((var_1_5) * (var_1_7))) % (var_1_11))))) {
                                 var_1_9 = (
    var_1_10
   );
  } else {
                                 var_1_9 = (
                                  ((
     5u
    ) + (
     var_1_8
    ))
   );
  }
 } else {
                                var_1_9 = (
   var_1_8
  );
 }
                                if ( ((var_1_9) <= ( ((var_1_22) - ( ((var_1_23) - (32u))))))) {
                                 var_1_21 = (
   32
  );
 }
                  if ( (( ((var_1_25) - (var_1_26))) <= (var_1_9))) {
                   var_1_24 = (
   var_1_26
  );
 }
                  var_1_28 = (
                   ((((( ((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 )))) )) > (( var_1_31 ))) ? (( ((((( var_1_29 )) < (( var_1_30 ))) ? (( var_1_29 )) : (( var_1_30 )))) )) : (( var_1_31 ))))
 );
                  var_1_32 = (
                   ((
                    ((((( var_1_25 )) > (( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) ))) ? (( var_1_25 )) : (( ((((var_1_26) < 0 ) ? -(var_1_26) : (var_1_26))) ))))
  ) + (
   var_1_33
  ))
 );
                   if ( ((256) > ( ((((( ((var_1_9) * (var_1_25)))) > ((var_1_9))) ? (( ((var_1_9) * (var_1_25)))) : ((var_1_9))))))) {
                    if ( ((var_1_9) <= ( (((((var_1_25)) < (( ((var_1_26) >> (var_1_37))))) ? ((var_1_25)) : (( ((var_1_26) >> (var_1_37))))))))) {
                     if ( ((var_1_28) >= ( (((((var_1_30)) < (( (((((var_1_31)) < ((49.5))) ? ((var_1_31)) : ((49.5))))))) ? ((var_1_30)) : (( (((((var_1_31)) < ((49.5))) ? ((var_1_31)) : ((49.5))))))))))) {
                      var_1_34 = (
                       ((
      var_1_38
     ) - (
      var_1_39
     ))
    );
   }
  } else {
                     var_1_34 = (
    var_1_39
   );
  }
 } else {
                    var_1_34 = (
   var_1_38
  );
 }
                   if ( ((var_1_9) < ( ((var_1_26) % ( (((((var_1_36)) > ((var_1_37))) ? ((var_1_36)) : ((var_1_37))))))))) {
                    if ( ((var_1_9) <= ( ((var_1_36) / (var_1_37))))) {
                     var_1_40 = (
                      ((((5) < 0 ) ? -(5) : (5)))
   );
  }
 } else {
                    var_1_40 = (
   var_1_37
  );
 }
                   if ( (( ((var_1_9) ^ (var_1_1))) == ( ((var_1_25) - (var_1_26))))) {
                    var_1_41 = (
   var_1_42
  );
 }
                   if (var_1_35) {
                    var_1_43 = (
   var_1_31
  );
 }
                   if ( ((var_1_9) >= (-32))) {
                    var_1_44 = (
                     ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))
  );
 }
                   var_1_45 = (
  var_1_26
 );
                   var_1_46 = (
  var_1_26
 );
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 1);
 var_1_3 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 1);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= -1);
 assume_abort_if_not(var_1_5 <= 32766);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 32766);
 var_1_8 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_8 >= 0);
 assume_abort_if_not(var_1_8 <= 254);
 var_1_10 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 65535);
 assume_abort_if_not(var_1_10 != 0);
 var_1_11 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_11 >= -2147483648);
 assume_abort_if_not(var_1_11 <= 2147483647);
 assume_abort_if_not(var_1_11 != 0);
 var_1_13 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_14 >= -922337.2036854776000e+13F && var_1_14 <= -1.0e-20F) || (var_1_14 <= 9223372.036854776000e+12F && var_1_14 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= -922337.2036854776000e+13F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -1);
 assume_abort_if_not(var_1_17 <= 126);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 126);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -63);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 2147483647);
 assume_abort_if_not(var_1_22 <= 4294967295);
 var_1_23 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_23 >= 1073741823);
 assume_abort_if_not(var_1_23 <= 2147483647);
 var_1_25 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_25 >= -1);
 assume_abort_if_not(var_1_25 <= 32767);
 var_1_26 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 32767);
 var_1_29 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_29 >= -922337.2036854766000e+13F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854766000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_30 >= -922337.2036854766000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854766000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_31 >= -922337.2036854766000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854766000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -1073741823);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 1);
 assume_abort_if_not(var_1_35 <= 1);
 var_1_36 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_36 >= -2147483648);
 assume_abort_if_not(var_1_36 <= 2147483647);
 assume_abort_if_not(var_1_36 != 0);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= 1);
 assume_abort_if_not(var_1_37 <= 14);
 var_1_38 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_38 >= 0.0F && var_1_38 <= -1.0e-20F) || (var_1_38 <= 9223372.036854766000e+12F && var_1_38 >= 1.0e-20F ));
 var_1_39 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_39 >= 0.0F && var_1_39 <= -1.0e-20F) || (var_1_39 <= 9223372.036854766000e+12F && var_1_39 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_42 >= 0);
 assume_abort_if_not(var_1_42 <= 0);
}
void updateLastVariables(void) {
}
int property(void) {
 if (var_1_12) {
  if ( (! (var_1_12))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_3) && (var_1_2))) {
  if ( (( (((((var_1_5)) < (( ((var_1_6) * (var_1_4))))) ? ((var_1_5)) : (( ((var_1_6) * (var_1_4))))))) > (var_1_1))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_7) <= (var_1_4))) {
  if ( (( ((var_1_8) / (var_1_10))) == ( (( ((var_1_5) * (var_1_7))) % (var_1_11))))) {
  } else {
  }
 } else {
 }
 if ( (( ((((( (((((var_1_13)) > ((9.999999999999025E12))) ? ((var_1_13)) : ((9.999999999999025E12)))))) < ((var_1_14))) ? (( (((((var_1_13)) > ((9.999999999999025E12))) ? ((var_1_13)) : ((9.999999999999025E12)))))) : ((var_1_14))))) > (var_1_15))) {
 }
 if ( ((var_1_12) && ( ((50.5) <= ( ((var_1_15) / (99999.24))))))) {
 } else {
 }
 if ( ((var_1_9) <= ( ((var_1_22) - ( ((var_1_23) - (32u))))))) {
 }
 return ((
             ((
              ((
               ((
                ((
                                         ((
      var_1_12
     ) ? (
                                          ((
                                              (! (
        var_1_12
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed short int) (
                                             ((
          var_1_4
         ) + (
          5
         ))
        ))
       ))
      ) : (
                                           ((
        var_1_1
       ) == (
                                            ((signed short int) (
                                             ((
          var_1_5
         ) - (
          var_1_6
         ))
        ))
       ))
      ))
     ) : (
                                          ((
       var_1_1
      ) == (
                                           ((signed short int) (
        var_1_5
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
       var_1_3
      ) && (
       var_1_2
      ))
     ) ? (
                                           ((
                                                ((
                                                 ((((( var_1_5 )) < (( (( var_1_6 ) * ( var_1_4 )) ))) ? (( var_1_5 )) : (( (( var_1_6 ) * ( var_1_4 )) ))))
       ) > (
        var_1_1
       ))
      ) ? (
                                           ((
        var_1_7
       ) == (
                                            ((unsigned char) (
         var_1_8
        ))
       ))
      ) : (
                                            ((
        var_1_7
       ) == (
                                             ((unsigned char) (
         200
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_7
      ) == (
                                            ((unsigned char) (
        var_1_8
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                ((
      var_1_7
     ) <= (
      var_1_4
     ))
    ) ? (
                                          ((
                                                 ((
                                                  ((
        var_1_8
       ) / (
        var_1_10
       ))
      ) == (
                                                  ((
                                                   ((
         var_1_5
        ) * (
         var_1_7
        ))
       ) % (
        var_1_11
       ))
      ))
     ) ? (
                                           ((
       var_1_9
      ) == (
                                            ((unsigned long int) (
        var_1_10
       ))
      ))
     ) : (
                                           ((
       var_1_9
      ) == (
                                            ((unsigned long int) (
                                             ((
         5u
        ) + (
         var_1_8
        ))
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_9
     ) == (
                                           ((unsigned long int) (
       var_1_8
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                ((((( ((((( var_1_13 )) > (( 9.999999999999025E12 ))) ? (( var_1_13 )) : (( 9.999999999999025E12 )))) )) < (( var_1_14 ))) ? (( ((((( var_1_13 )) > (( 9.999999999999025E12 ))) ? (( var_1_13 )) : (( 9.999999999999025E12 )))) )) : (( var_1_14 ))))
    ) > (
     var_1_15
    ))
   ) ? (
                                         ((
     var_1_12
    ) == (
                                          ((unsigned char) (
      0
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_12
   ) && (
                                               ((
     50.5
    ) <= (
                                                ((
      var_1_15
     ) / (
      99999.24
     ))
    ))
   ))
  ) ? (
                                        ((
    var_1_16
   ) == (
                                         ((signed char) (
                                          ((
      var_1_17
     ) - (
                                           (((((( -50 ) + ( var_1_18 ))) < 0 ) ? -((( -50 ) + ( var_1_18 ))) : ((( -50 ) + ( var_1_18 )))))
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_16
   ) == (
                                         ((signed char) (
                                          ((((( (( var_1_17 ) - ( var_1_19 )) )) > (( (( var_1_18 ) + ( var_1_20 )) ))) ? (( (( var_1_17 ) - ( var_1_19 )) )) : (( (( var_1_18 ) + ( var_1_20 )) ))))
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
   var_1_9
  ) <= (
                                              ((
    var_1_22
   ) - (
                                               ((
     var_1_23
    ) - (
     32u
    ))
   ))
  ))
 ) ? (
                                       ((
   var_1_21
  ) == (
                                        ((signed char) (
    32
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
