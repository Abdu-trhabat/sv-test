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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch179Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed short int var_1_1 = 256;
unsigned short int var_1_2 = 5;
unsigned short int var_1_3 = 64;
signed short int var_1_4 = -128;
signed short int var_1_5 = 10000;
signed short int var_1_6 = 64;
signed short int var_1_7 = 16;
float var_1_8 = 10000000000000.6;
unsigned char var_1_9 = 0;
unsigned char var_1_10 = 1;
float var_1_11 = 63.8;
signed long int var_1_12 = 256;
unsigned char var_1_13 = 0;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 50;
unsigned char var_1_18 = 16;
signed char var_1_19 = 4;
signed char var_1_20 = 32;
unsigned char var_1_21 = 8;
signed char var_1_22 = 2;
unsigned char var_1_23 = 128;
unsigned char var_1_24 = 64;
unsigned char var_1_25 = 8;
unsigned long int var_1_26 = 32;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
unsigned long int var_1_29 = 128;
unsigned long int var_1_30 = 5;
signed long int var_1_31 = 5;
signed long int var_1_32 = 1000;
signed long int var_1_33 = 64;
unsigned char var_1_34 = 200;
unsigned char var_1_35 = 128;
unsigned char var_1_36 = 2;
unsigned char var_1_37 = 10;
unsigned char var_1_38 = 1;
unsigned char var_1_39 = 1;
double var_1_40 = 128.65;
double var_1_41 = 15.95;
double var_1_42 = 4.25;
signed char var_1_43 = 8;
signed char var_1_44 = 25;
void initially(void) {
}
void step(void) {
                  if ( (! ( ((var_1_27) && (var_1_28))))) {
                   var_1_26 = (
                    ((
                     ((((((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) < 0 ) ? -(((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29)))) : (((((var_1_29) < 0 ) ? -(var_1_29) : (var_1_29))))))
   ) + (
    var_1_30
   ))
  );
 } else {
                   var_1_26 = (
   var_1_29
  );
 }
                  if ( (( ((var_1_30) % ( ((((-32) < 0 ) ? -(-32) : (-32)))))) >= (var_1_29))) {
                   if ( ((var_1_30) > (var_1_26))) {
                    var_1_31 = (
                     ((
     var_1_32
    ) + (
                      ((((((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) < 0 ) ? -(((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33)))) : (((((var_1_33) < 0 ) ? -(var_1_33) : (var_1_33))))))
    ))
   );
  }
 } else {
                   var_1_31 = (
                    ((((( -50 )) > (( var_1_32 ))) ? (( -50 )) : (( var_1_32 ))))
  );
 }
                   if ( ((var_1_26) > ( ((((( ((var_1_30) << (var_1_32)))) < ((var_1_12))) ? (( ((var_1_30) << (var_1_32)))) : ((var_1_12))))))) {
                    var_1_34 = (
                     ((
    var_1_35
   ) - (
    var_1_36
   ))
  );
 } else {
                    var_1_34 = (
                     ((
                      ((((200) < 0 ) ? -(200) : (200)))
   ) - (
                      ((((( var_1_36 )) > (( var_1_37 ))) ? (( var_1_36 )) : (( var_1_37 ))))
   ))
  );
 }
                   if ( (( ((var_1_32) ^ (var_1_26))) < (var_1_37))) {
                    if ( ((var_1_12) <= (var_1_37))) {
                     var_1_38 = (
    var_1_39
   );
  }
 }
                   if ( ((var_1_30) < (var_1_21))) {
                    var_1_40 = (
                     ((
                      (((((( -0.125 ) + ( 100.25 ))) < 0 ) ? -((( -0.125 ) + ( 100.25 ))) : ((( -0.125 ) + ( 100.25 )))))
   ) - (
                      ((
     var_1_41
    ) + (
     var_1_42
    ))
   ))
  );
 }
                   if ( (( ((var_1_36) / (var_1_35))) < (var_1_12))) {
                    var_1_43 = (
                     ((((((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) < 0 ) ? -(((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44)))) : (((((var_1_44) < 0 ) ? -(var_1_44) : (var_1_44))))))
  );
 } else {
                    if (var_1_13) {
                     var_1_43 = (
    var_1_44
   );
  }
 }
                              if ( ((var_1_2) > (var_1_3))) {
                               var_1_1 = (
                                ((
    var_1_4
   ) + (
                                 ((
                                  ((
      var_1_5
     ) - (
      var_1_6
     ))
    ) - (
     var_1_7
    ))
   ))
  );
 } else {
                               if ( ((var_1_7) == ( (((((var_1_2)) < ((-16))) ? ((var_1_2)) : ((-16))))))) {
                                var_1_1 = (
                                 ((
     var_1_6
    ) - (
     var_1_5
    ))
   );
  } else {
                                var_1_1 = (
    var_1_6
   );
  }
 }
 unsigned char stepLocal_0 = var_1_9;
                                if ( ((var_1_10) || (stepLocal_0))) {
                                 var_1_13 = (
                                  (! (
    var_1_14
   ))
  );
 }
                                if ( (( ((var_1_1) / ( ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))) != (var_1_5))) {
                                 var_1_21 = (
                                  ((
    var_1_23
   ) - (
                                   ((
     var_1_24
    ) - (
     var_1_25
    ))
   ))
  );
 } else {
                                 var_1_21 = (
   var_1_18
  );
 }
                                if (var_1_13) {
                                 var_1_12 = (
                                  ((
    64
   ) - (
    var_1_7
   ))
  );
 }
                              if ( ((var_1_12) >= ( ((var_1_6) + (var_1_7))))) {
                                if ( ((var_1_9) || (var_1_10))) {
                                 var_1_8 = (
    var_1_11
   );
  }
 }
                                if ( ((var_1_8) != ( (((((var_1_8)) > (( ((var_1_11) + (var_1_8))))) ? ((var_1_8)) : (( ((var_1_11) + (var_1_8))))))))) {
                                 if ( ((-2) > ( ((var_1_4) + (var_1_12))))) {
                                  var_1_15 = (
    var_1_18
   );
  } else {
                                  var_1_15 = (
    32
   );
  }
 } else {
                                 var_1_15 = (
   var_1_18
  );
 }
 signed long int stepLocal_2 = ((var_1_5) & (var_1_15));
 unsigned char stepLocal_1 = var_1_13;
                                if ( ((var_1_6) >= (stepLocal_2))) {
                                 var_1_19 = (
   var_1_20
  );
 } else {
                                 if ( ((stepLocal_1) && ( (! (var_1_14))))) {
                                  var_1_19 = (
    32
   );
  }
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_2 >= 0);
 assume_abort_if_not(var_1_2 <= 65535);
 var_1_3 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_3 >= 0);
 assume_abort_if_not(var_1_3 <= 65535);
 var_1_4 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_4 >= -16383);
 assume_abort_if_not(var_1_4 <= 16383);
 var_1_5 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_5 >= 8191);
 assume_abort_if_not(var_1_5 <= 16383);
 var_1_6 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_6 >= 0);
 assume_abort_if_not(var_1_6 <= 8191);
 var_1_7 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_7 >= 0);
 assume_abort_if_not(var_1_7 <= 16383);
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_10 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_10 >= 0);
 assume_abort_if_not(var_1_10 <= 1);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_14 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 0);
 var_1_18 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 254);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= -127);
 assume_abort_if_not(var_1_20 <= 126);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -127);
 assume_abort_if_not(var_1_22 <= 127);
 assume_abort_if_not(var_1_22 != 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 127);
 assume_abort_if_not(var_1_23 <= 254);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 63);
 assume_abort_if_not(var_1_24 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 0);
 assume_abort_if_not(var_1_25 <= 63);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 0);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 0);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_29 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_29 >= 0);
 assume_abort_if_not(var_1_29 <= 2147483647);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_32 >= -1073741823);
 assume_abort_if_not(var_1_32 <= 1073741823);
 var_1_33 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_33 >= -1073741823);
 assume_abort_if_not(var_1_33 <= 1073741823);
 var_1_35 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_35 >= 127);
 assume_abort_if_not(var_1_35 <= 254);
 var_1_36 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 127);
 var_1_37 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 127);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 1);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_41 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_41 >= 0.0F && var_1_41 <= -1.0e-20F) || (var_1_41 <= 4611686.018427383000e+12F && var_1_41 >= 1.0e-20F ));
 var_1_42 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_42 >= 0.0F && var_1_42 <= -1.0e-20F) || (var_1_42 <= 4611686.018427383000e+12F && var_1_42 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -126);
 assume_abort_if_not(var_1_44 <= 126);
}
void updateLastVariables(void) {
}
int property(void) {
 if ( ((var_1_2) > (var_1_3))) {
 } else {
  if ( ((var_1_7) == ( (((((var_1_2)) < ((-16))) ? ((var_1_2)) : ((-16))))))) {
  } else {
  }
 }
 if ( ((var_1_12) >= ( ((var_1_6) + (var_1_7))))) {
  if ( ((var_1_9) || (var_1_10))) {
  }
 }
 if (var_1_13) {
 }
 if ( ((var_1_10) || (var_1_9))) {
 }
 if ( ((var_1_8) != ( (((((var_1_8)) > (( ((var_1_11) + (var_1_8))))) ? ((var_1_8)) : (( ((var_1_11) + (var_1_8))))))))) {
  if ( ((-2) > ( ((var_1_4) + (var_1_12))))) {
  } else {
  }
 } else {
 }
 if ( ((var_1_6) >= ( ((var_1_5) & (var_1_15))))) {
 } else {
  if ( ((var_1_13) && ( (! (var_1_14))))) {
  }
 }
 if ( (( ((var_1_1) / ( ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))) != (var_1_5))) {
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
        var_1_2
       ) > (
        var_1_3
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed short int) (
                                             ((
          var_1_4
         ) + (
                                              ((
                                               ((
            var_1_5
           ) - (
            var_1_6
           ))
          ) - (
           var_1_7
          ))
         ))
        ))
       ))
      ) : (
                                           ((
                                                 ((
         var_1_7
        ) == (
                                                  ((((( var_1_2 )) < (( -16 ))) ? (( var_1_2 )) : (( -16 ))))
        ))
       ) ? (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
                                              ((
           var_1_6
          ) - (
           var_1_5
          ))
         ))
        ))
       ) : (
                                            ((
         var_1_1
        ) == (
                                             ((signed short int) (
          var_1_6
         ))
        ))
       ))
      ))
     ) && (
                                          ((
                                                ((
        var_1_12
       ) >= (
                                                 ((
         var_1_6
        ) + (
         var_1_7
        ))
       ))
      ) ? (
                                           ((
                                                 ((
         var_1_9
        ) || (
         var_1_10
        ))
       ) ? (
                                            ((
         var_1_8
        ) == (
                                             ((float) (
          var_1_11
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
      var_1_13
     ) ? (
                                           ((
       var_1_12
      ) == (
                                            ((signed long int) (
                                             ((
         64
        ) - (
         var_1_7
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
      var_1_10
     ) || (
      var_1_9
     ))
    ) ? (
                                          ((
      var_1_13
     ) == (
                                           ((unsigned char) (
                                            (! (
        var_1_14
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
     var_1_8
    ) != (
                                                ((((( var_1_8 )) > (( (( var_1_11 ) + ( var_1_8 )) ))) ? (( var_1_8 )) : (( (( var_1_11 ) + ( var_1_8 )) ))))
    ))
   ) ? (
                                         ((
                                                ((
      -2
     ) > (
                                                 ((
       var_1_4
      ) + (
       var_1_12
      ))
     ))
    ) ? (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned char) (
       var_1_18
      ))
     ))
    ) : (
                                          ((
      var_1_15
     ) == (
                                           ((unsigned char) (
       32
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((unsigned char) (
      var_1_18
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
    var_1_6
   ) >= (
                                               ((
     var_1_5
    ) & (
     var_1_15
    ))
   ))
  ) ? (
                                        ((
    var_1_19
   ) == (
                                         ((signed char) (
     var_1_20
    ))
   ))
  ) : (
                                        ((
                                               ((
     var_1_13
    ) && (
                                                (! (
      var_1_14
     ))
    ))
   ) ? (
                                         ((
     var_1_19
    ) == (
                                          ((signed char) (
      32
     ))
    ))
   ) : (
    1
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_1
   ) / (
                                               ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))
   ))
  ) != (
   var_1_5
  ))
 ) ? (
                                       ((
   var_1_21
  ) == (
                                        ((unsigned char) (
                                         ((
     var_1_23
    ) - (
                                          ((
      var_1_24
     ) - (
      var_1_25
     ))
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_21
  ) == (
                                        ((unsigned char) (
    var_1_18
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
