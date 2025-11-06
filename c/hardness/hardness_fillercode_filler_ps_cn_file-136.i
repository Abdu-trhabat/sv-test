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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch136Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
float var_1_1 = 128.25;
signed long int var_1_4 = 1000;
signed long int var_1_5 = 5;
signed long int var_1_6 = 32;
float var_1_7 = 0.3;
double var_1_8 = 255.75;
unsigned char var_1_9 = 0;
double var_1_10 = 9999999.32;
unsigned char var_1_11 = 0;
unsigned short int var_1_12 = 0;
unsigned short int var_1_13 = 8;
unsigned short int var_1_14 = 8;
signed char var_1_15 = 0;
signed char var_1_16 = 0;
signed char var_1_17 = -1;
signed char var_1_18 = 50;
signed char var_1_19 = 2;
unsigned long int var_1_20 = 128;
unsigned long int var_1_21 = 1516883038;
unsigned long int var_1_22 = 1086059298;
double var_1_23 = 16.85;
double var_1_24 = 127.2;
double var_1_25 = 9.65;
signed long int var_1_26 = 25;
signed short int var_1_27 = 500;
signed short int var_1_28 = 200;
signed short int var_1_29 = 4;
signed long int var_1_30 = -8;
signed char var_1_31 = 4;
unsigned char var_1_32 = 8;
signed char var_1_33 = 10;
unsigned long int var_1_34 = 128;
unsigned long int var_1_35 = 2330912839;
unsigned long int var_1_36 = 256;
unsigned long int var_1_37 = 0;
unsigned short int var_1_38 = 32;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
unsigned short int var_1_41 = 1;
double var_1_42 = 9999.25;
double var_1_43 = 63.5;
double var_1_44 = 15.2;
double var_1_45 = 24.9;
signed char var_1_46 = 1;
signed char var_1_47 = 16;
float var_1_48 = 32.9;
float var_1_49 = 7.2;
float var_1_50 = 4.5;
float var_1_51 = 128.2;
signed short int var_1_52 = 64;
signed short int var_1_53 = 100;
void initially(void) {
}
void step(void) {
            if ( (( (( ((var_1_27) ^ (var_1_28))) * (var_1_29))) >= (var_1_30))) {
             var_1_26 = (
   var_1_28
  );
 }
            if ( (( ((var_1_26) >> (var_1_32))) < (var_1_29))) {
             var_1_31 = (
              ((((( ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 )))) )) > (( -50 ))) ? (( ((((( var_1_32 )) < (( var_1_33 ))) ? (( var_1_32 )) : (( var_1_33 )))) )) : (( -50 ))))
  );
 }
            if ( ((var_1_31) <= (var_1_33))) {
             var_1_34 = (
              ((((( (( var_1_35 ) - ( ((((( var_1_32 )) > (( var_1_36 ))) ? (( var_1_32 )) : (( var_1_36 )))) )) )) < (( var_1_37 ))) ? (( (( var_1_35 ) - ( ((((( var_1_32 )) > (( var_1_36 ))) ? (( var_1_32 )) : (( var_1_36 )))) )) )) : (( var_1_37 ))))
  );
 }
             if (var_1_39) {
             var_1_38 = (
              ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
  );
 } else {
              if (var_1_40) {
               var_1_38 = (
               ((
                ((
      26042
     ) - (
      var_1_32
     ))
    ) + (
                ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))
    ))
   );
  }
 }
             var_1_42 = (
              ((((( var_1_43 )) > (( ((((( var_1_44 )) < (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))) ? (( var_1_43 )) : (( ((((( var_1_44 )) < (( var_1_45 ))) ? (( var_1_44 )) : (( var_1_45 )))) ))))
 );
             if ( ((var_1_44) <= (var_1_42))) {
              var_1_46 = (
               ((((( ((((( var_1_47 )) < (( var_1_32 ))) ? (( var_1_47 )) : (( var_1_32 )))) )) < (( var_1_33 ))) ? (( ((((( var_1_47 )) < (( var_1_32 ))) ? (( var_1_47 )) : (( var_1_32 )))) )) : (( var_1_33 ))))
  );
 } else {
              if ( ((var_1_45) >= (var_1_42))) {
               var_1_46 = (
                ((
     -5
    ) + (
     var_1_32
    ))
   );
  } else {
               var_1_46 = (
                ((((var_1_32) < 0 ) ? -(var_1_32) : (var_1_32)))
   );
  }
 }
             if ( ((var_1_35) <= ( ((var_1_34) / (var_1_32))))) {
              var_1_48 = (
               ((
                ((((((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) < 0 ) ? -(((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49)))) : (((((var_1_49) < 0 ) ? -(var_1_49) : (var_1_49))))))
   ) + (
                ((
                 ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))
    ) - (
     var_1_51
    ))
   ))
  );
 }
             var_1_52 = (
  var_1_31
 );
             var_1_53 = (
  128
 );
                               if ( ((var_1_9) && (var_1_11))) {
                                if ( (! (var_1_9))) {
                                 var_1_10 = (
    var_1_7
   );
  }
 }
                               var_1_12 = (
                                ((
                                 ((
    65103
   ) - (
    2
   ))
  ) - (
                                 ((((( var_1_13 )) < (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 ))))
  ))
 );
                               if ( ((var_1_7) >= ( (((((var_1_10)) > ((5.25f))) ? ((var_1_10)) : ((5.25f))))))) {
                                var_1_15 = (
                                 ((((( ((((( -5 )) < (( var_1_16 ))) ? (( -5 )) : (( var_1_16 )))) )) > (( (( ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) ) + ( var_1_19 )) ))) ? (( ((((( -5 )) < (( var_1_16 ))) ? (( -5 )) : (( var_1_16 )))) )) : (( (( ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) ) + ( var_1_19 )) ))))
  );
 } else {
                                var_1_15 = (
                                 ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 ))))
  );
 }
 signed long int stepLocal_1 = (((((var_1_6)) < ((var_1_14))) ? ((var_1_6)) : ((var_1_14))));
                               if ( ((stepLocal_1) == (var_1_13))) {
                                var_1_20 = (
                                 ((
                                  ((
     var_1_21
    ) + (
     var_1_22
    ))
   ) - (
    var_1_12
   ))
  );
 }
                               if ( ((128) < ( (( (((((var_1_13)) < ((var_1_14))) ? ((var_1_13)) : ((var_1_14))))) << (var_1_20))))) {
                                var_1_23 = (
                                 ((
    4.75
   ) + (
    var_1_24
   ))
  );
 } else {
                                var_1_23 = (
                                 ((
    var_1_24
   ) + (
    var_1_25
   ))
  );
 }
                              if ( (( (( (~ (var_1_20))) & (var_1_12))) <= ( (( ((var_1_4) - (var_1_5))) ^ (var_1_20))))) {
                               var_1_1 = (
   var_1_7
  );
 } else {
                               var_1_1 = (
   32.8f
  );
 }
 unsigned char stepLocal_0 = (! ( (! (0))));
                               if ( (( ((var_1_7) > (var_1_10))) || (stepLocal_0))) {
                                if (var_1_9) {
                                var_1_8 = (
    var_1_7
   );
  } else {
                                 var_1_8 = (
    1.0000000000008E12
   );
  }
 } else {
                                var_1_8 = (
   var_1_7
  );
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 2147483647);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_7 >= -922337.2036854766000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 9223372.036854766000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_9 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_9 >= 0);
 assume_abort_if_not(var_1_9 <= 1);
 var_1_11 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 1);
 var_1_13 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 32767);
 var_1_14 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32767);
 var_1_16 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_16 >= -127);
 assume_abort_if_not(var_1_16 <= 126);
 var_1_17 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_17 >= -63);
 assume_abort_if_not(var_1_17 <= 63);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= -63);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 1073741823);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 1073741824);
 assume_abort_if_not(var_1_22 <= 2147483647);
 var_1_24 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_24 >= -461168.6018427383000e+13F && var_1_24 <= -1.0e-20F) || (var_1_24 <= 4611686.018427383000e+12F && var_1_24 >= 1.0e-20F ));
 var_1_25 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_25 >= -461168.6018427383000e+13F && var_1_25 <= -1.0e-20F) || (var_1_25 <= 4611686.018427383000e+12F && var_1_25 >= 1.0e-20F ));
 var_1_27 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_27 >= -32768);
 assume_abort_if_not(var_1_27 <= 32767);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= -32768);
 assume_abort_if_not(var_1_28 <= 32767);
 var_1_29 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_29 >= -32768);
 assume_abort_if_not(var_1_29 <= 32767);
 var_1_30 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_30 >= -2147483648);
 assume_abort_if_not(var_1_30 <= 2147483647);
 var_1_32 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_32 >= 1);
 assume_abort_if_not(var_1_32 <= 30);
 var_1_33 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_33 >= -127);
 assume_abort_if_not(var_1_33 <= 126);
 var_1_35 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_35 >= 2147483647);
 assume_abort_if_not(var_1_35 <= 4294967294);
 var_1_36 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_36 >= 0);
 assume_abort_if_not(var_1_36 <= 2147483647);
 var_1_37 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_37 >= 0);
 assume_abort_if_not(var_1_37 <= 4294967294);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 32767);
 var_1_43 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_43 >= -922337.2036854766000e+13F && var_1_43 <= -1.0e-20F) || (var_1_43 <= 9223372.036854766000e+12F && var_1_43 >= 1.0e-20F ));
 var_1_44 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_44 >= -922337.2036854766000e+13F && var_1_44 <= -1.0e-20F) || (var_1_44 <= 9223372.036854766000e+12F && var_1_44 >= 1.0e-20F ));
 var_1_45 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_45 >= -922337.2036854766000e+13F && var_1_45 <= -1.0e-20F) || (var_1_45 <= 9223372.036854766000e+12F && var_1_45 >= 1.0e-20F ));
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -127);
 assume_abort_if_not(var_1_47 <= 126);
 var_1_49 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_49 >= -461168.6018427383000e+13F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 4611686.018427383000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_50 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_50 >= -461168.6018427383000e+13F && var_1_50 <= -1.0e-20F) || (var_1_50 <= 4611686.018427383000e+12F && var_1_50 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_51 >= 0.0F && var_1_51 <= -1.0e-20F) || (var_1_51 <= 4611686.018427383000e+12F && var_1_51 >= 1.0e-20F ));
}
void updateLastVariables(void) {
}
int property(void) {
 if ( (( (( (~ (var_1_20))) & (var_1_12))) <= ( (( ((var_1_4) - (var_1_5))) ^ (var_1_20))))) {
 } else {
 }
 if ( (( ((var_1_7) > (var_1_10))) || ( (! ( (! (0))))))) {
  if (var_1_9) {
  } else {
  }
 } else {
 }
 if ( ((var_1_9) && (var_1_11))) {
  if ( (! (var_1_9))) {
  }
 }
 if ( ((var_1_7) >= ( (((((var_1_10)) > ((5.25f))) ? ((var_1_10)) : ((5.25f))))))) {
 } else {
 }
 if ( (( (((((var_1_6)) < ((var_1_14))) ? ((var_1_6)) : ((var_1_14))))) == (var_1_13))) {
 }
 if ( ((128) < ( (( (((((var_1_13)) < ((var_1_14))) ? ((var_1_13)) : ((var_1_14))))) << (var_1_20))))) {
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
                                               ((
                                                (~ (
          var_1_20
         ))
        ) & (
         var_1_12
        ))
       ) <= (
                                                ((
                                                ((
          var_1_4
         ) - (
          var_1_5
         ))
        ) ^ (
         var_1_20
        ))
       ))
      ) ? (
                                          ((
        var_1_1
       ) == (
                                           ((float) (
         var_1_7
        ))
       ))
      ) : (
                                          ((
        var_1_1
       ) == (
                                           ((float) (
         32.8f
        ))
       ))
      ))
     ) && (
                                          ((
                                               ((
                                                ((
         var_1_7
        ) > (
         var_1_10
        ))
       ) || (
                                                (! (
                                                  (! (
          0
         ))
        ))
       ))
      ) ? (
                                            ((
        var_1_9
       ) ? (
                                            ((
         var_1_8
        ) == (
                                             ((double) (
          var_1_7
         ))
        ))
       ) : (
                                             ((
         var_1_8
        ) == (
                                              ((double) (
          1.0000000000008E12
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_8
       ) == (
                                             ((double) (
         var_1_7
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                                 ((
       var_1_9
      ) && (
       var_1_11
      ))
     ) ? (
                                           ((
                                                  (! (
        var_1_9
       ))
      ) ? (
                                            ((
        var_1_10
       ) == (
                                             ((double) (
         var_1_7
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
     var_1_12
    ) == (
                                          ((unsigned short int) (
                                           ((
                                            ((
        65103
       ) - (
        2
       ))
      ) - (
                                            ((((( var_1_13 )) < (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 ))))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
     var_1_7
    ) >= (
                                                ((((( var_1_10 )) > (( 5.25f ))) ? (( var_1_10 )) : (( 5.25f ))))
    ))
   ) ? (
                                         ((
     var_1_15
    ) == (
                                          ((signed char) (
                                           ((((( ((((( -5 )) < (( var_1_16 ))) ? (( -5 )) : (( var_1_16 )))) )) > (( (( ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) ) + ( var_1_19 )) ))) ? (( ((((( -5 )) < (( var_1_16 ))) ? (( -5 )) : (( var_1_16 )))) )) : (( (( ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 )))) ) + ( var_1_19 )) ))))
     ))
    ))
   ) : (
                                         ((
     var_1_15
    ) == (
                                          ((signed char) (
                                           ((((( var_1_17 )) < (( var_1_16 ))) ? (( var_1_17 )) : (( var_1_16 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
                                              ((
                                               ((((( var_1_6 )) < (( var_1_14 ))) ? (( var_1_6 )) : (( var_1_14 ))))
   ) == (
    var_1_13
   ))
  ) ? (
                                        ((
    var_1_20
   ) == (
                                         ((unsigned long int) (
                                          ((
                                           ((
       var_1_21
      ) + (
       var_1_22
      ))
     ) - (
      var_1_12
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
   128
  ) < (
                                              ((
                                               ((((( var_1_13 )) < (( var_1_14 ))) ? (( var_1_13 )) : (( var_1_14 ))))
   ) << (
    var_1_20
   ))
  ))
 ) ? (
                                       ((
   var_1_23
  ) == (
                                        ((double) (
                                         ((
     4.75
    ) + (
     var_1_24
    ))
   ))
  ))
 ) : (
                                       ((
   var_1_23
  ) == (
                                        ((double) (
                                         ((
     var_1_24
    ) + (
     var_1_25
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
