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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch71Filler_PS_CO.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
unsigned short int var_1_1 = 32;
signed char var_1_4 = -1;
signed char var_1_5 = 4;
signed long int var_1_6 = -100000;
signed long int var_1_7 = 0;
signed long int var_1_8 = 256;
unsigned short int var_1_9 = 35831;
float var_1_10 = 1.875;
float var_1_11 = 5.8;
float var_1_12 = 2.375;
float var_1_13 = 999999999999.75;
unsigned long int var_1_14 = 64;
double var_1_15 = 255.5;
double var_1_16 = 127.5;
unsigned long int var_1_17 = 1259086625;
unsigned long int var_1_18 = 1670092463;
signed long int var_1_19 = 2;
signed long int var_1_20 = -64;
unsigned char var_1_21 = 0;
unsigned char var_1_22 = 0;
unsigned char var_1_23 = 0;
unsigned char var_1_24 = 0;
unsigned short int var_1_25 = 10;
signed char var_1_26 = 4;
float var_1_27 = 3.5;
float var_1_28 = 0.94;
float var_1_29 = 32.5;
float var_1_30 = 4.4;
float var_1_31 = 1.75;
signed long int var_1_34 = -128;
signed char var_1_36 = 5;
signed char var_1_37 = -4;
signed char var_1_38 = 4;
signed long int var_1_39 = 2;
unsigned short int var_1_40 = 8;
unsigned char var_1_41 = 0;
signed long int var_1_42 = 25;
signed short int var_1_43 = 128;
double var_1_44 = 32.75;
unsigned char var_1_45 = 0;
unsigned char var_1_46 = 1;
unsigned char var_1_47 = 0;
signed char var_1_48 = -1;
signed char var_1_49 = 25;
signed char var_1_50 = 25;
unsigned long int var_1_51 = 5;
signed char var_1_52 = 25;
signed char var_1_53 = -5;
signed long int last_1_var_1_20 = -64;
void initially(void) {
}
void step(void) {
                  if ( (( (( (((((var_1_27)) < ((var_1_28))) ? ((var_1_27)) : ((var_1_28))))) - (var_1_29))) <= ( ((var_1_30) + (var_1_31))))) {
                   if ( (( (((((var_1_14)) > (( ((var_1_19) / (var_1_34))))) ? ((var_1_14)) : (( ((var_1_19) / (var_1_34))))))) < (var_1_20))) {
                    var_1_26 = (
                     ((
                      ((
      var_1_36
     ) + (
      var_1_37
     ))
    ) + (
                      (((((( var_1_38 ) - ( 50 ))) < 0 ) ? -((( var_1_38 ) - ( 50 ))) : ((( var_1_38 ) - ( 50 )))))
    ))
   );
  }
 } else {
                   var_1_26 = (
                    ((
                     ((((var_1_37) < 0 ) ? -(var_1_37) : (var_1_37)))
   ) - (
                     ((((var_1_38) < 0 ) ? -(var_1_38) : (var_1_38)))
   ))
  );
 }
                   if ( (( ((var_1_14) % ( (((((var_1_34)) < ((var_1_40))) ? ((var_1_34)) : ((var_1_40))))))) <= (var_1_37))) {
                    if ( (( ((var_1_36) <= (var_1_34))) || (var_1_21))) {
                     var_1_39 = (
    var_1_42
   );
  } else {
                     var_1_39 = (
    var_1_40
   );
  }
 }
                   var_1_43 = (
  -100
 );
                   var_1_44 = (
  8.25
 );
                   if ( ((var_1_41) || (var_1_46))) {
                    if (var_1_46) {
                     var_1_45 = (
    var_1_47
   );
  }
 }
                   if (var_1_21) {
                    var_1_48 = (
                     (((((( var_1_38 ) - ( var_1_49 ))) < 0 ) ? -((( var_1_38 ) - ( var_1_49 ))) : ((( var_1_38 ) - ( var_1_49 )))))
  );
 } else {
                    var_1_48 = (
                     ((
    var_1_49
   ) - (
                      ((((( var_1_38 )) < (( var_1_50 ))) ? (( var_1_38 )) : (( var_1_50 ))))
   ))
  );
 }
                   if ( (( ((var_1_34) * ( (((((var_1_19)) < ((var_1_20))) ? ((var_1_19)) : ((var_1_20))))))) < (var_1_42))) {
                    var_1_51 = (
                     ((((var_1_50) < 0 ) ? -(var_1_50) : (var_1_50)))
  );
 }
                   if ( ((var_1_14) < ( (((((var_1_49)) < ((var_1_36))) ? ((var_1_49)) : ((var_1_36))))))) {
                    if (var_1_21) {
                     var_1_52 = (
    var_1_53
   );
  }
 }
                               var_1_10 = (
  var_1_11
 );
                                if ( ((var_1_9) == (var_1_5))) {
                                 var_1_20 = (
                                  ((((( var_1_4 )) > (( (( last_1_var_1_20 ) + ( -8 )) ))) ? (( var_1_4 )) : (( (( last_1_var_1_20 ) + ( -8 )) ))))
  );
 }
                                var_1_21 = (
                                 (! (
                                  ((
    var_1_22
   ) || (
                                   ((
     var_1_23
    ) || (
     var_1_24
    ))
   ))
  ))
 );
                                var_1_25 = (
  16
 );
 signed long int stepLocal_0 = (( ((var_1_6) + (var_1_7))) * (var_1_8));
                               if (var_1_21) {
                                if ( (( ((var_1_4) - (var_1_5))) > (stepLocal_0))) {
                                 var_1_1 = (
                                  ((
     var_1_9
    ) - (
     var_1_5
    ))
   );
  }
 } else {
                                if (var_1_21) {
                                 var_1_1 = (
    32
   );
  } else {
                                 var_1_1 = (
    var_1_5
   );
  }
 }
                                if ( (! (var_1_21))) {
                                 var_1_19 = (
                                  ((
    var_1_5
   ) + (
    256
   ))
  );
 }
 signed long int stepLocal_2 = (((((var_1_20)) < ((var_1_9))) ? ((var_1_20)) : ((var_1_9))));
                                if ( (( ((var_1_15) - (var_1_16))) > (var_1_13))) {
                                 if ( ((stepLocal_2) <= ( (((((var_1_19)) > (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) ? ((var_1_19)) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))))) {
                                  var_1_14 = (
                                   ((
     var_1_20
    ) + (
     var_1_9
    ))
   );
  } else {
                                  var_1_14 = (
                                   ((
     var_1_5
    ) + (
     var_1_9
    ))
   );
  }
 } else {
                                 var_1_14 = (
                                  ((
    3919152995u
   ) - (
                                   ((
                                    ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
    ) - (
     var_1_20
    ))
   ))
  );
 }
 unsigned long int stepLocal_1 = var_1_14;
                                if ( ((var_1_10) >= ( (( ((var_1_11) / (var_1_13))) / (31.9f))))) {
                                 if ( ((stepLocal_1) > (var_1_4))) {
                                  var_1_12 = (
    var_1_11
   );
  } else {
                                  var_1_12 = (
    3.125f
   );
  }
 }
}
void updateVariables(void) {
 var_1_4 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_4 >= -1);
 assume_abort_if_not(var_1_4 <= 127);
 var_1_5 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_5 >= 0);
 assume_abort_if_not(var_1_5 <= 127);
 var_1_6 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_6 >= -2147483648);
 assume_abort_if_not(var_1_6 <= 2147483647);
 var_1_7 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_7 >= -2147483648);
 assume_abort_if_not(var_1_7 <= 2147483647);
 var_1_8 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_8 >= -2147483648);
 assume_abort_if_not(var_1_8 <= 2147483647);
 var_1_9 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_9 >= 32767);
 assume_abort_if_not(var_1_9 <= 65534);
 var_1_11 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_11 >= -922337.2036854766000e+13F && var_1_11 <= -1.0e-20F) || (var_1_11 <= 9223372.036854766000e+12F && var_1_11 >= 1.0e-20F ));
 var_1_13 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_13 >= -922337.2036854776000e+13F && var_1_13 <= -1.0e-20F) || (var_1_13 <= 9223372.036854776000e+12F && var_1_13 >= 1.0e-20F ));
 assume_abort_if_not(var_1_13 != 0.0F);
 var_1_15 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_15 >= 0.0F && var_1_15 <= -1.0e-20F) || (var_1_15 <= 9223372.036854776000e+12F && var_1_15 >= 1.0e-20F ));
 var_1_16 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_16 >= 0.0F && var_1_16 <= -1.0e-20F) || (var_1_16 <= 9223372.036854776000e+12F && var_1_16 >= 1.0e-20F ));
 var_1_17 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_17 >= 1073741823);
 assume_abort_if_not(var_1_17 <= 2147483647);
 var_1_18 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_18 >= 1073741823);
 assume_abort_if_not(var_1_18 <= 2147483647);
 var_1_22 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_22 >= 0);
 assume_abort_if_not(var_1_22 <= 0);
 var_1_23 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_23 >= 0);
 assume_abort_if_not(var_1_23 <= 0);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 0);
 assume_abort_if_not(var_1_24 <= 0);
 var_1_27 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_27 >= 0.0F && var_1_27 <= -1.0e-20F) || (var_1_27 <= 9223372.036854776000e+12F && var_1_27 >= 1.0e-20F ));
 var_1_28 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_28 >= 0.0F && var_1_28 <= -1.0e-20F) || (var_1_28 <= 9223372.036854776000e+12F && var_1_28 >= 1.0e-20F ));
 var_1_29 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_29 >= 0.0F && var_1_29 <= -1.0e-20F) || (var_1_29 <= 9223372.036854776000e+12F && var_1_29 >= 1.0e-20F ));
 var_1_30 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_30 >= -922337.2036854776000e+13F && var_1_30 <= -1.0e-20F) || (var_1_30 <= 9223372.036854776000e+12F && var_1_30 >= 1.0e-20F ));
 var_1_31 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_31 >= -922337.2036854776000e+13F && var_1_31 <= -1.0e-20F) || (var_1_31 <= 9223372.036854776000e+12F && var_1_31 >= 1.0e-20F ));
 var_1_34 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_34 >= -2147483648);
 assume_abort_if_not(var_1_34 <= 2147483647);
 assume_abort_if_not(var_1_34 != 0);
 var_1_36 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_36 >= -31);
 assume_abort_if_not(var_1_36 <= 32);
 var_1_37 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_37 >= -31);
 assume_abort_if_not(var_1_37 <= 31);
 var_1_38 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_38 >= 0);
 assume_abort_if_not(var_1_38 <= 63);
 var_1_40 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_40 >= 0);
 assume_abort_if_not(var_1_40 <= 65535);
 assume_abort_if_not(var_1_40 != 0);
 var_1_41 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_41 >= 0);
 assume_abort_if_not(var_1_41 <= 1);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= -2147483647);
 assume_abort_if_not(var_1_42 <= 2147483646);
 var_1_46 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_46 >= 0);
 assume_abort_if_not(var_1_46 <= 1);
 var_1_47 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_47 >= 0);
 assume_abort_if_not(var_1_47 <= 0);
 var_1_49 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_49 >= 0);
 assume_abort_if_not(var_1_49 <= 126);
 var_1_50 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_50 >= 0);
 assume_abort_if_not(var_1_50 <= 126);
 var_1_53 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_53 >= -127);
 assume_abort_if_not(var_1_53 <= 126);
}
void updateLastVariables(void) {
 last_1_var_1_20 = var_1_20;
}
int property(void) {
 if (var_1_21) {
  if ( (( ((var_1_4) - (var_1_5))) > ( (( ((var_1_6) + (var_1_7))) * (var_1_8))))) {
  }
 } else {
  if (var_1_21) {
  } else {
  }
 }
 if ( ((var_1_10) >= ( (( ((var_1_11) / (var_1_13))) / (31.9f))))) {
  if ( ((var_1_14) > (var_1_4))) {
  } else {
  }
 }
 if ( (( ((var_1_15) - (var_1_16))) > (var_1_13))) {
  if ( (( (((((var_1_20)) < ((var_1_9))) ? ((var_1_20)) : ((var_1_9))))) <= ( (((((var_1_19)) > (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))) ? ((var_1_19)) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4)))))))))) {
  } else {
  }
 } else {
 }
 if ( (! (var_1_21))) {
 }
 if ( ((var_1_9) == (var_1_5))) {
 }
 return ((
             ((
              ((
               ((
                ((
                 ((
                  ((
                                           ((
        var_1_21
       ) ? (
                                            ((
                                                  ((
                                                  ((
           var_1_4
          ) - (
           var_1_5
          ))
         ) > (
                                                   ((
                                                    ((
            var_1_6
           ) + (
            var_1_7
           ))
          ) * (
           var_1_8
          ))
         ))
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned short int) (
                                               ((
            var_1_9
           ) - (
            var_1_5
           ))
          ))
         ))
        ) : (
         1
        ))
       ) : (
                                            ((
         var_1_21
        ) ? (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned short int) (
           32
          ))
         ))
        ) : (
                                             ((
          var_1_1
         ) == (
                                              ((unsigned short int) (
           var_1_5
          ))
         ))
        ))
       ))
      ) && (
                                           ((
        var_1_10
       ) == (
                                            ((float) (
         var_1_11
        ))
       ))
      ))
     ) && (
                                           ((
                                                ((
        var_1_10
       ) >= (
                                                 ((
                                                  ((
          var_1_11
         ) / (
          var_1_13
         ))
        ) / (
         31.9f
        ))
       ))
      ) ? (
                                            ((
                                                 ((
         var_1_14
        ) > (
         var_1_4
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
          3.125f
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
                                                  ((
        var_1_15
       ) - (
        var_1_16
       ))
      ) > (
       var_1_13
      ))
     ) ? (
                                           ((
                                                  ((
                                                   ((((( var_1_20 )) < (( var_1_9 ))) ? (( var_1_20 )) : (( var_1_9 ))))
       ) <= (
                                                   ((((( var_1_19 )) > (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))) ? (( var_1_19 )) : (( ((((var_1_4) < 0 ) ? -(var_1_4) : (var_1_4))) ))))
       ))
      ) ? (
                                            ((
        var_1_14
       ) == (
                                             ((unsigned long int) (
                                              ((
          var_1_20
         ) + (
          var_1_9
         ))
        ))
       ))
      ) : (
                                            ((
        var_1_14
       ) == (
                                             ((unsigned long int) (
                                              ((
          var_1_5
         ) + (
          var_1_9
         ))
        ))
       ))
      ))
     ) : (
                                           ((
       var_1_14
      ) == (
                                            ((unsigned long int) (
                                             ((
         3919152995u
        ) - (
                                              ((
                                               ((((( var_1_17 )) < (( var_1_18 ))) ? (( var_1_17 )) : (( var_1_18 ))))
         ) - (
          var_1_20
         ))
        ))
       ))
      ))
     ))
    ))
   ) && (
                                         ((
                                                (! (
      var_1_21
     ))
    ) ? (
                                          ((
      var_1_19
     ) == (
                                           ((signed long int) (
                                            ((
        var_1_5
       ) + (
        256
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
     var_1_9
    ) == (
     var_1_5
    ))
   ) ? (
                                         ((
     var_1_20
    ) == (
                                          ((signed long int) (
                                           ((((( var_1_4 )) > (( (( last_1_var_1_20 ) + ( -8 )) ))) ? (( var_1_4 )) : (( (( last_1_var_1_20 ) + ( -8 )) ))))
     ))
    ))
   ) : (
    1
   ))
  ))
 ) && (
                                       ((
   var_1_21
  ) == (
                                        ((unsigned char) (
                                         (! (
                                          ((
      var_1_22
     ) || (
                                           ((
       var_1_23
      ) || (
       var_1_24
      ))
     ))
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_25
 ) == (
                                       ((unsigned short int) (
   16
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
