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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch164Filler_PS_CN.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
signed char var_1_1 = 32;
signed long int var_1_2 = 256;
signed long int var_1_3 = -16;
signed long int var_1_4 = -4;
signed char var_1_5 = -10;
signed char var_1_6 = -10;
signed char var_1_7 = -2;
float var_1_8 = 100.9;
float var_1_10 = 16.6;
float var_1_11 = -0.4;
float var_1_12 = 255.25;
float var_1_13 = 99.875;
unsigned char var_1_14 = 0;
unsigned char var_1_15 = 0;
unsigned char var_1_16 = 0;
unsigned long int var_1_17 = 4;
unsigned long int var_1_18 = 1;
unsigned long int var_1_19 = 64;
unsigned long int var_1_20 = 8;
unsigned long int var_1_21 = 8;
signed char var_1_22 = 8;
signed char var_1_23 = 64;
unsigned char var_1_24 = 0;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
unsigned char var_1_27 = 0;
unsigned char var_1_28 = 1;
signed char var_1_29 = -128;
unsigned long int var_1_30 = 5;
unsigned char var_1_31 = 100;
float var_1_32 = 999999999999.25;
unsigned char var_1_33 = 16;
unsigned char var_1_34 = 4;
double var_1_35 = 1.75;
double var_1_36 = 7.65;
signed char var_1_37 = -32;
unsigned long int var_1_38 = 32;
unsigned char var_1_39 = 0;
unsigned char var_1_40 = 0;
signed char var_1_41 = 10;
signed char var_1_42 = -5;
signed char var_1_43 = 0;
signed char var_1_44 = -50;
double var_1_45 = 1000000000000000.8;
signed char var_1_46 = -64;
signed char var_1_47 = 8;
double var_1_48 = 99.45;
double var_1_49 = 256.25;
float var_1_50 = 10000000000000.4;
signed char var_1_51 = 100;
float var_1_52 = 49.8;
float var_1_53 = 10000000000000.25;
float var_1_54 = 49.9;
unsigned short int var_1_55 = 32;
unsigned short int var_1_56 = 61542;
signed char var_1_57 = 32;
signed char var_1_58 = -32;
signed char var_1_59 = 2;
unsigned char last_1_var_1_14 = 0;
unsigned long int last_1_var_1_19 = 64;
void initially(void) {
}
void step(void) {
            if ( ((127.5f) > ( (- (var_1_32))))) {
             var_1_31 = (
              ((((( var_1_33 )) < (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))) ? (( var_1_33 )) : (( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34))) ))))
  );
 }
            var_1_35 = (
  var_1_36
 );
             if ( (( ((var_1_31) / (var_1_38))) >= (var_1_33))) {
             if ( ((var_1_39) || (var_1_40))) {
              var_1_37 = (
               ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41)))
   );
  }
 } else {
              var_1_37 = (
               ((((( var_1_41 )) < (( ((((( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) > (( var_1_44 ))) ? (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) : (( var_1_44 )))) ))) ? (( var_1_41 )) : (( ((((( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) > (( var_1_44 ))) ? (( ((((( var_1_42 )) > (( var_1_43 ))) ? (( var_1_42 )) : (( var_1_43 )))) )) : (( var_1_44 )))) ))))
  );
 }
             if ( ((var_1_37) > ( (((((((((var_1_46)) > ((var_1_47))) ? ((var_1_46)) : ((var_1_47))))) < 0 ) ? -((((((var_1_46)) > ((var_1_47))) ? ((var_1_46)) : ((var_1_47))))) : ((((((var_1_46)) > ((var_1_47))) ? ((var_1_46)) : ((var_1_47)))))))))) {
              var_1_45 = (
               ((
    var_1_48
   ) - (
    var_1_49
   ))
  );
 } else {
              var_1_45 = (
   15.5
  );
 }
             if ( ((var_1_32) <= ( (((((var_1_36)) > ((var_1_48))) ? ((var_1_36)) : ((var_1_48))))))) {
              if ( (( ((var_1_51) - (16))) <= ( ((((var_1_34) < 0 ) ? -(var_1_34) : (var_1_34)))))) {
               var_1_50 = (
                ((((( (( (( 50.7f ) - ( var_1_52 )) ) + ( ((((( var_1_53 )) < (( var_1_54 ))) ? (( var_1_53 )) : (( var_1_54 )))) )) )) < (( var_1_49 ))) ? (( (( (( 50.7f ) - ( var_1_52 )) ) + ( ((((( var_1_53 )) < (( var_1_54 ))) ? (( var_1_53 )) : (( var_1_54 )))) )) )) : (( var_1_49 ))))
   );
  }
 }
             var_1_55 = (
              ((
   var_1_56
  ) - (
               ((((8) < 0 ) ? -(8) : (8)))
  ))
 );
             if ( ((var_1_41) >= (var_1_46))) {
              var_1_57 = (
               ((((( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) )) < (( (( var_1_58 ) + ( var_1_59 )) ))) ? (( ((((var_1_41) < 0 ) ? -(var_1_41) : (var_1_41))) )) : (( (( var_1_58 ) + ( var_1_59 )) ))))
  );
 } else {
              if ( (( ((var_1_55) / (var_1_38))) < (var_1_33))) {
               var_1_57 = (
    var_1_59
   );
  } else {
               var_1_57 = (
    var_1_42
   );
  }
 }
                                          if ( ((last_1_var_1_19) >= (4))) {
                                           if ( ((var_1_16) || (last_1_var_1_14))) {
                                            var_1_17 = (
    var_1_18
   );
  }
 }
                              if ( (( (((((var_1_6)) < ((var_1_17))) ? ((var_1_6)) : ((var_1_17))))) == ( ((var_1_17) + (var_1_7))))) {
                               var_1_14 = (
                                ((
    var_1_15
   ) || (
    var_1_16
   ))
  );
 }
 unsigned char stepLocal_1 = var_1_16;
                               if ( ((var_1_11) != ( (- (var_1_12))))) {
                                if ( (! (var_1_16))) {
                                 var_1_19 = (
                                  ((
     var_1_20
    ) + (
     var_1_21
    ))
   );
  }
 } else {
                                if ( ((stepLocal_1) && ( ((var_1_17) <= ( ((var_1_22) - (var_1_23))))))) {
                                 var_1_19 = (
    var_1_21
   );
  }
 }
 unsigned char stepLocal_0 = ((var_1_3) < (var_1_4));
                              if ( (( ((4) <= (var_1_2))) || (stepLocal_0))) {
                               var_1_1 = (
                                ((
    var_1_5
   ) + (
                                 ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
   ))
  );
 }
 unsigned long int stepLocal_2 = var_1_17;
                                if ( (( (((((var_1_5)) > ((var_1_17))) ? ((var_1_5)) : ((var_1_17))))) >= (stepLocal_2))) {
                                 var_1_24 = (
                                  ((
    var_1_25
   ) && (
                                   ((
     var_1_26
    ) && (
                                    ((
      var_1_27
     ) && (
      var_1_28
     ))
    ))
   ))
  );
 } else {
                                 var_1_24 = (
   var_1_25
  );
 }
                                if ( (( ((var_1_21) / ( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) <= (var_1_19))) {
                                 var_1_29 = (
   var_1_6
  );
 }
                              if (var_1_24) {
                               if ( (( (- (var_1_10))) < (127.25f))) {
                                var_1_8 = (
                                 ((((( (( var_1_11 ) + ( var_1_12 )) )) < (( var_1_13 ))) ? (( (( var_1_11 ) + ( var_1_12 )) )) : (( var_1_13 ))))
   );
  }
 } else {
                               var_1_8 = (
   var_1_11
  );
 }
}
void updateVariables(void) {
 var_1_2 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_2 >= -2147483648);
 assume_abort_if_not(var_1_2 <= 2147483647);
 var_1_3 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_3 >= -2147483648);
 assume_abort_if_not(var_1_3 <= 2147483647);
 var_1_4 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_4 >= -2147483648);
 assume_abort_if_not(var_1_4 <= 2147483647);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= -63);
 assume_abort_if_not(var_1_5 <= 63);
 var_1_6 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_6 >= -63);
 assume_abort_if_not(var_1_6 <= 63);
 var_1_7 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_7 >= -63);
 assume_abort_if_not(var_1_7 <= 63);
 var_1_10 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_10 >= -922337.2036854776000e+13F && var_1_10 <= -1.0e-20F) || (var_1_10 <= 9223372.036854776000e+12F && var_1_10 >= 1.0e-20F ));
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -461168.6018427383000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 4611686.018427383000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_12 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_12 >= -461168.6018427383000e+13F && var_1_12 <= -1.0e-20F) || (var_1_12 <= 4611686.018427383000e+12F && var_1_12 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854766000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854766000e+12F && var_1_13 >= 1.0e-20F ));
 var_1_15 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_15 >= 0);
 assume_abort_if_not(var_1_15 <= 0);
 var_1_16 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_16 >= 0);
 assume_abort_if_not(var_1_16 <= 0);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 0);
 assume_abort_if_not(var_1_18 <= 4294967294);
 var_1_20 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 2147483647);
 var_1_21 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_21 >= 0);
 assume_abort_if_not(var_1_21 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_22 >= -1);
 assume_abort_if_not(var_1_22 <= 127);
 var_1_23 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 127);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 1);
 assume_abort_if_not(var_1_26 <= 1);
 var_1_27 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_27 >= 1);
 assume_abort_if_not(var_1_27 <= 1);
 var_1_28 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_28 >= 1);
 assume_abort_if_not(var_1_28 <= 1);
 var_1_30 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_30 >= 0);
 assume_abort_if_not(var_1_30 <= 4294967295);
 assume_abort_if_not(var_1_30 != 0);
 var_1_32 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_32 >= -922337.2036854776000e+13F && var_1_32 <= -1.0e-20F) || (var_1_32 <= 9223372.036854776000e+12F && var_1_32 >= 1.0e-20F ));
 var_1_33 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_33 >= 0);
 assume_abort_if_not(var_1_33 <= 254);
 var_1_34 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_34 >= 0);
 assume_abort_if_not(var_1_34 <= 254);
 var_1_36 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_36 >= -922337.2036854766000e+13F && var_1_36 <= -1.0e-20F) || (var_1_36 <= 9223372.036854766000e+12F && var_1_36 >= 1.0e-20F ));
 var_1_38 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 4294967295);
 assume_abort_if_not(var_1_38 != 0);
 var_1_39 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_39 >= 0);
 assume_abort_if_not(var_1_39 <= 1);
 var_1_40 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 1);
 var_1_41 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_41 >= -126);
 assume_abort_if_not(var_1_41 <= 126);
 var_1_42 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_42 >= -127);
 assume_abort_if_not(var_1_42 <= 126);
 var_1_43 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_43 >= -127);
 assume_abort_if_not(var_1_43 <= 126);
 var_1_44 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_44 >= -127);
 assume_abort_if_not(var_1_44 <= 126);
 var_1_46 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_46 >= -127);
 assume_abort_if_not(var_1_46 <= 127);
 var_1_47 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_47 >= -127);
 assume_abort_if_not(var_1_47 <= 127);
 var_1_48 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_48 >= 0.0F && var_1_48 <= -1.0e-20F) || (var_1_48 <= 9223372.036854766000e+12F && var_1_48 >= 1.0e-20F ));
 var_1_49 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_49 >= 0.0F && var_1_49 <= -1.0e-20F) || (var_1_49 <= 9223372.036854766000e+12F && var_1_49 >= 1.0e-20F ));
 var_1_51 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_51 >= -1);
 assume_abort_if_not(var_1_51 <= 127);
 var_1_52 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_52 >= 0.0F && var_1_52 <= -1.0e-20F) || (var_1_52 <= 4611686.018427383000e+12F && var_1_52 >= 1.0e-20F ));
 var_1_53 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_53 >= -461168.6018427383000e+13F && var_1_53 <= -1.0e-20F) || (var_1_53 <= 4611686.018427383000e+12F && var_1_53 >= 1.0e-20F ));
 var_1_54 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_54 >= -461168.6018427383000e+13F && var_1_54 <= -1.0e-20F) || (var_1_54 <= 4611686.018427383000e+12F && var_1_54 >= 1.0e-20F ));
 var_1_56 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_56 >= 32767);
 assume_abort_if_not(var_1_56 <= 65534);
 var_1_58 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_58 >= -63);
 assume_abort_if_not(var_1_58 <= 63);
 var_1_59 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_59 >= -63);
 assume_abort_if_not(var_1_59 <= 63);
}
void updateLastVariables(void) {
 last_1_var_1_14 = var_1_14;
 last_1_var_1_19 = var_1_19;
}
int property(void) {
 if ( (( ((4) <= (var_1_2))) || ( ((var_1_3) < (var_1_4))))) {
 }
 if (var_1_24) {
  if ( (( (- (var_1_10))) < (127.25f))) {
  }
 } else {
 }
 if ( (( (((((var_1_6)) < ((var_1_17))) ? ((var_1_6)) : ((var_1_17))))) == ( ((var_1_17) + (var_1_7))))) {
 }
 if ( ((last_1_var_1_19) >= (4))) {
  if ( ((var_1_16) || (last_1_var_1_14))) {
  }
 }
 if ( ((var_1_11) != ( (- (var_1_12))))) {
  if ( (! (var_1_16))) {
  }
 } else {
  if ( ((var_1_16) && ( ((var_1_17) <= ( ((var_1_22) - (var_1_23))))))) {
  }
 }
 if ( (( (((((var_1_5)) > ((var_1_17))) ? ((var_1_5)) : ((var_1_17))))) >= (var_1_17))) {
 } else {
 }
 if ( (( ((var_1_21) / ( ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))))) <= (var_1_19))) {
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
         4
        ) <= (
         var_1_2
        ))
       ) || (
                                                ((
         var_1_3
        ) < (
         var_1_4
        ))
       ))
      ) ? (
                                           ((
        var_1_1
       ) == (
                                            ((signed char) (
                                             ((
          var_1_5
         ) + (
                                              ((((( var_1_6 )) > (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
         ))
        ))
       ))
      ) : (
       1
      ))
     ) && (
                                          ((
       var_1_24
      ) ? (
                                           ((
                                                 ((
                                                  (- (
          var_1_10
         ))
        ) < (
         127.25f
        ))
       ) ? (
                                            ((
         var_1_8
        ) == (
                                             ((float) (
                                              ((((( (( var_1_11 ) + ( var_1_12 )) )) < (( var_1_13 ))) ? (( (( var_1_11 ) + ( var_1_12 )) )) : (( var_1_13 ))))
         ))
        ))
       ) : (
        1
       ))
      ) : (
                                           ((
        var_1_8
       ) == (
                                            ((float) (
         var_1_11
        ))
       ))
      ))
     ))
    ) && (
                                          ((
                                               ((
                                                ((((( var_1_6 )) < (( var_1_17 ))) ? (( var_1_6 )) : (( var_1_17 ))))
      ) == (
                                                ((
        var_1_17
       ) + (
        var_1_7
       ))
      ))
     ) ? (
                                          ((
       var_1_14
      ) == (
                                           ((unsigned char) (
                                            ((
         var_1_15
        ) || (
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
                                                           ((
      last_1_var_1_19
     ) >= (
      4
     ))
    ) ? (
                                                     ((
                                                            ((
       var_1_16
      ) || (
       last_1_var_1_14
      ))
     ) ? (
                                                      ((
       var_1_17
      ) == (
                                                       ((unsigned long int) (
        var_1_18
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
     var_1_11
    ) != (
                                                (- (
      var_1_12
     ))
    ))
   ) ? (
                                         ((
                                                (! (
      var_1_16
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((unsigned long int) (
                                            ((
        var_1_20
       ) + (
        var_1_21
       ))
      ))
     ))
    ) : (
     1
    ))
   ) : (
                                         ((
                                                ((
      var_1_16
     ) && (
                                                 ((
       var_1_17
      ) <= (
                                                  ((
        var_1_22
       ) - (
        var_1_23
       ))
      ))
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((unsigned long int) (
       var_1_21
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
                                               ((((( var_1_5 )) > (( var_1_17 ))) ? (( var_1_5 )) : (( var_1_17 ))))
   ) >= (
    var_1_17
   ))
  ) ? (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
                                          ((
      var_1_25
     ) && (
                                           ((
       var_1_26
      ) && (
                                            ((
        var_1_27
       ) && (
        var_1_28
       ))
      ))
     ))
    ))
   ))
  ) : (
                                        ((
    var_1_24
   ) == (
                                         ((unsigned char) (
     var_1_25
    ))
   ))
  ))
 ))
) && (
                                      ((
                                             ((
                                              ((
    var_1_21
   ) / (
                                               ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))
   ))
  ) <= (
   var_1_19
  ))
 ) ? (
                                       ((
   var_1_29
  ) == (
                                        ((signed char) (
    var_1_6
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
