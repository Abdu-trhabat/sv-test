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
void reach_error(void) { __assert_fail("0", "Req1_Prop1_Batch55Filler_PE_CI.c", 13, "reach_error"); }
void __VERIFIER_assert(int cond) { if(!(cond)) { ERROR: {reach_error();abort();} } return; }
void assume_abort_if_not(int cond) { if(!cond) { abort(); } }
void initially(void);
void step(void);
void updateVariables(void);
void updateLastVariables(void);
int property(void);
int main(void);
unsigned char isInitial = 0;
double var_1_1 = 8.8;
double var_1_6 = 127.5;
double var_1_7 = 2.6;
double var_1_8 = 4.5;
signed short int var_1_9 = -128;
signed short int var_1_10 = 16;
signed short int var_1_11 = 4;
signed short int var_1_12 = 100;
signed short int var_1_13 = 64;
signed short int var_1_14 = 2;
signed long int var_1_15 = 5;
signed char var_1_17 = -2;
signed char var_1_18 = -4;
signed char var_1_19 = 8;
signed char var_1_20 = 10;
unsigned long int var_1_21 = 25;
unsigned long int var_1_22 = 3797799060;
unsigned char var_1_23 = 1;
unsigned char var_1_24 = 1;
unsigned char var_1_25 = 0;
unsigned char var_1_26 = 0;
signed short int var_1_27 = -4;
signed short int var_1_28 = 24644;
signed char var_1_29 = 1;
signed char var_1_30 = -1;
unsigned char var_1_31 = 0;
signed long int var_1_32 = -2;
float var_1_37 = 256.3;
double var_1_39 = 2.45;
unsigned short int var_1_41 = 200;
signed long int var_1_42 = 10;
unsigned short int var_1_43 = 28186;
unsigned short int var_1_44 = 10;
signed char var_1_45 = 10;
signed short int var_1_46 = 4;
unsigned char var_1_48 = 1;
unsigned short int var_1_49 = 25;
signed long int last_1_var_1_15 = 5;
signed short int last_1_var_1_27 = -4;
void initially(void) {
}
void step(void) {
                                         if ( ((last_1_var_1_27) <= ( ((last_1_var_1_27) * ( ((last_1_var_1_27) * (last_1_var_1_15))))))) {
                                          if ( ((last_1_var_1_15) > (last_1_var_1_27))) {
                                           var_1_1 = (
                                            ((
                                             ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
    ) + (
     var_1_8
    ))
   );
  } else {
                                           var_1_1 = (
    var_1_8
   );
  }
 } else {
                                          var_1_1 = (
   var_1_7
  );
 }
                              var_1_9 = (
                               ((((( (( var_1_10 ) - ( var_1_11 )) )) < (( (( (( var_1_12 ) + ( var_1_13 )) ) - ( var_1_14 )) ))) ? (( (( var_1_10 ) - ( var_1_11 )) )) : (( (( (( var_1_12 ) + ( var_1_13 )) ) - ( var_1_14 )) ))))
 );
                               var_1_17 = (
                               ((
   var_1_18
  ) + (
                                ((
    var_1_19
   ) - (
    var_1_20
   ))
  ))
 );
                               var_1_29 = (
                                ((
                                 ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))
  ) - (
   var_1_20
  ))
 );
                                var_1_31 = (
  var_1_26
 );
                               if (var_1_31) {
                                var_1_23 = (
                                 ((
    var_1_24
   ) && (
    var_1_25
   ))
  );
 } else {
                                var_1_23 = (
                                 ((
    var_1_24
   ) && (
                                  ((
     var_1_25
    ) && (
     var_1_26
    ))
   ))
  );
 }
                              if (var_1_23) {
                               var_1_15 = (
                                ((
    var_1_14
   ) - (
    var_1_13
   ))
  );
 }
                               if (var_1_23) {
                                var_1_21 = (
                                 ((
                                  ((
     var_1_22
    ) - (
                                   ((
      1000000000u
     ) - (
      var_1_13
     ))
    ))
   ) - (
    var_1_14
   ))
  );
 }
                               if ( (( (- ( (((((var_1_1)) < ((var_1_8))) ? ((var_1_1)) : ((var_1_8))))))) >= (-0.875))) {
                                if (var_1_31) {
                                 var_1_27 = (
                                  ((
     var_1_19
    ) - (
     var_1_12
    ))
   );
  } else {
                                 var_1_27 = (
                                  ((
     var_1_13
    ) - (
                                   ((
      var_1_28
     ) - (
                                    ((
       var_1_20
      ) + (
       var_1_19
      ))
     ))
    ))
   );
  }
 } else {
                                var_1_27 = (
                                 ((((( var_1_29 )) < (( var_1_28 ))) ? (( var_1_29 )) : (( var_1_28 ))))
  );
 }
                   if ( ((var_1_1) > (var_1_7))) {
                    if ( (( ((var_1_7) * ( (((((var_1_1)) > ((var_1_8))) ? ((var_1_1)) : ((var_1_8))))))) < ( (((((var_1_8)) < ((32.55f))) ? ((var_1_8)) : ((32.55f))))))) {
                     if ( ((var_1_8) > (24.443f))) {
                      var_1_32 = (
     var_1_22
    );
   }
  }
 } else {
                    var_1_32 = (
                     ((((32) < 0 ) ? -(32) : (32)))
  );
 }
                   if ( ((var_1_22) < (4))) {
                    var_1_39 = (
                     ((
    var_1_8
   ) + (
    9.625
   ))
  );
 }
                   if ( ((var_1_6) >= (127.5f))) {
                    if ( (( ((var_1_15) >> (var_1_42))) < ( ((((var_1_22) < 0 ) ? -(var_1_22) : (var_1_22)))))) {
                     var_1_41 = (
                      ((
                       ((((var_1_42) < 0 ) ? -(var_1_42) : (var_1_42)))
    ) + (
                       ((
      var_1_43
     ) - (
                        ((
       2
      ) + (
       var_1_44
      ))
     ))
    ))
   );
  } else {
                     var_1_41 = (
    var_1_42
   );
  }
 } else {
                    var_1_41 = (
   var_1_42
  );
 }
                   var_1_45 = (
  var_1_42
 );
                   if (var_1_23) {
                    var_1_46 = (
                     ((
    var_1_20
   ) + (
                      ((((( var_1_42 )) > (( var_1_44 ))) ? (( var_1_42 )) : (( var_1_44 ))))
   ))
  );
 }
                   if ( ((var_1_43) < ( (( ((var_1_15) / (128))) % ( ((var_1_42) + (var_1_49))))))) {
                    if ( ((var_1_22) <= (var_1_15))) {
                     var_1_48 = (
                      (! (
                       ((
      var_1_24
     ) && (
      var_1_25
     ))
    ))
   );
  } else {
                     var_1_48 = (
                      ((
     var_1_24
    ) && (
     var_1_25
    ))
   );
  }
 } else {
                    if ( ((var_1_8) > (var_1_37))) {
                     var_1_48 = (
    var_1_26
   );
  } else {
                     var_1_48 = (
    var_1_24
   );
  }
 }
}
void updateVariables(void) {
 var_1_6 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_6 >= -461168.6018427383000e+13F && var_1_6 <= -1.0e-20F) || (var_1_6 <= 4611686.018427383000e+12F && var_1_6 >= 1.0e-20F ));
 var_1_7 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_7 >= -461168.6018427383000e+13F && var_1_7 <= -1.0e-20F) || (var_1_7 <= 4611686.018427383000e+12F && var_1_7 >= 1.0e-20F ));
 var_1_8 = __VERIFIER_nondet_double();
 assume_abort_if_not((var_1_8 >= -461168.6018427383000e+13F && var_1_8 <= -1.0e-20F) || (var_1_8 <= 4611686.018427383000e+12F && var_1_8 >= 1.0e-20F ));
 var_1_10 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_10 >= -1);
 assume_abort_if_not(var_1_10 <= 32766);
 var_1_11 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_11 >= 0);
 assume_abort_if_not(var_1_11 <= 32766);
 var_1_12 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_12 >= 0);
 assume_abort_if_not(var_1_12 <= 16383);
 var_1_13 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_13 >= 0);
 assume_abort_if_not(var_1_13 <= 16383);
 var_1_14 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_14 >= 0);
 assume_abort_if_not(var_1_14 <= 32766);
 var_1_18 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_18 >= -63);
 assume_abort_if_not(var_1_18 <= 63);
 var_1_19 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_19 >= 0);
 assume_abort_if_not(var_1_19 <= 63);
 var_1_20 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_20 >= 0);
 assume_abort_if_not(var_1_20 <= 63);
 var_1_22 = __VERIFIER_nondet_ulong();
 assume_abort_if_not(var_1_22 >= 3221225470);
 assume_abort_if_not(var_1_22 <= 4294967294);
 var_1_24 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_24 >= 1);
 assume_abort_if_not(var_1_24 <= 1);
 var_1_25 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_25 >= 1);
 assume_abort_if_not(var_1_25 <= 1);
 var_1_26 = __VERIFIER_nondet_uchar();
 assume_abort_if_not(var_1_26 >= 0);
 assume_abort_if_not(var_1_26 <= 0);
 var_1_28 = __VERIFIER_nondet_short();
 assume_abort_if_not(var_1_28 >= 16383);
 assume_abort_if_not(var_1_28 <= 32766);
 var_1_30 = __VERIFIER_nondet_char();
 assume_abort_if_not(var_1_30 >= -126);
 assume_abort_if_not(var_1_30 <= 126);
 var_1_37 = __VERIFIER_nondet_float();
 assume_abort_if_not((var_1_37 >= -922337.2036854776000e+13F && var_1_37 <= -1.0e-20F) || (var_1_37 <= 9223372.036854776000e+12F && var_1_37 >= 1.0e-20F ));
 assume_abort_if_not(var_1_37 != 0.0F);
 var_1_42 = __VERIFIER_nondet_long();
 assume_abort_if_not(var_1_42 >= 1);
 assume_abort_if_not(var_1_42 <= 30);
 var_1_43 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_43 >= 16383);
 assume_abort_if_not(var_1_43 <= 32767);
 var_1_44 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_44 >= 0);
 assume_abort_if_not(var_1_44 <= 8191);
 var_1_49 = __VERIFIER_nondet_ushort();
 assume_abort_if_not(var_1_49 >= 1);
 assume_abort_if_not(var_1_49 <= 32767);
}
void updateLastVariables(void) {
 last_1_var_1_15 = var_1_15;
 last_1_var_1_27 = var_1_27;
}
int property(void) {
 if ( ((last_1_var_1_27) <= ( ((last_1_var_1_27) * ( ((last_1_var_1_27) * (last_1_var_1_15))))))) {
  if ( ((last_1_var_1_15) > (last_1_var_1_27))) {
  } else {
  }
 } else {
 }
 if (var_1_23) {
 }
 if (var_1_23) {
 }
 if (var_1_31) {
 } else {
 }
 if ( (( (- ( (((((var_1_1)) < ((var_1_8))) ? ((var_1_1)) : ((var_1_8))))))) >= (-0.875))) {
  if (var_1_31) {
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
                   ((
                                                       ((
                                                            ((
          last_1_var_1_27
         ) <= (
                                                             ((
           last_1_var_1_27
          ) * (
                                                              ((
            last_1_var_1_27
           ) * (
            last_1_var_1_15
           ))
          ))
         ))
        ) ? (
                                                        ((
                                                              ((
           last_1_var_1_15
          ) > (
           last_1_var_1_27
          ))
         ) ? (
                                                         ((
           var_1_1
          ) == (
                                                          ((double) (
                                                           ((
                                                            ((((( var_1_6 )) < (( var_1_7 ))) ? (( var_1_6 )) : (( var_1_7 ))))
            ) + (
             var_1_8
            ))
           ))
          ))
         ) : (
                                                         ((
           var_1_1
          ) == (
                                                          ((double) (
            var_1_8
           ))
          ))
         ))
        ) : (
                                                        ((
          var_1_1
         ) == (
                                                         ((double) (
           var_1_7
          ))
         ))
        ))
       ) && (
                                            ((
         var_1_9
        ) == (
                                             ((signed short int) (
                                              ((((( (( var_1_10 ) - ( var_1_11 )) )) < (( (( (( var_1_12 ) + ( var_1_13 )) ) - ( var_1_14 )) ))) ? (( (( var_1_10 ) - ( var_1_11 )) )) : (( (( (( var_1_12 ) + ( var_1_13 )) ) - ( var_1_14 )) ))))
         ))
        ))
       ))
      ) && (
                                           ((
        var_1_23
       ) ? (
                                            ((
         var_1_15
        ) == (
                                             ((signed long int) (
                                              ((
           var_1_14
          ) - (
           var_1_13
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
                                            ((signed char) (
                                            ((
         var_1_18
        ) + (
                                             ((
          var_1_19
         ) - (
          var_1_20
         ))
        ))
       ))
      ))
     ))
    ) && (
                                          ((
      var_1_23
     ) ? (
                                           ((
       var_1_21
      ) == (
                                            ((unsigned long int) (
                                             ((
                                              ((
          var_1_22
         ) - (
                                               ((
           1000000000u
          ) - (
           var_1_13
          ))
         ))
        ) - (
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
     var_1_31
    ) ? (
                                          ((
      var_1_23
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_24
       ) && (
        var_1_25
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_23
     ) == (
                                           ((unsigned char) (
                                            ((
        var_1_24
       ) && (
                                             ((
         var_1_25
        ) && (
         var_1_26
        ))
       ))
      ))
     ))
    ))
   ))
  ) && (
                                        ((
                                               ((
                                                (- (
                                                 ((((( var_1_1 )) < (( var_1_8 ))) ? (( var_1_1 )) : (( var_1_8 ))))
     ))
    ) >= (
     -0.875
    ))
   ) ? (
                                         ((
     var_1_31
    ) ? (
                                          ((
      var_1_27
     ) == (
                                           ((signed short int) (
                                            ((
        var_1_19
       ) - (
        var_1_12
       ))
      ))
     ))
    ) : (
                                          ((
      var_1_27
     ) == (
                                           ((signed short int) (
                                            ((
        var_1_13
       ) - (
                                             ((
         var_1_28
        ) - (
                                              ((
          var_1_20
         ) + (
          var_1_19
         ))
        ))
       ))
      ))
     ))
    ))
   ) : (
                                         ((
     var_1_27
    ) == (
                                          ((signed short int) (
                                           ((((( var_1_29 )) < (( var_1_28 ))) ? (( var_1_29 )) : (( var_1_28 ))))
     ))
    ))
   ))
  ))
 ) && (
                                       ((
   var_1_29
  ) == (
                                        ((signed char) (
                                         ((
                                          ((((var_1_30) < 0 ) ? -(var_1_30) : (var_1_30)))
    ) - (
     var_1_20
    ))
   ))
  ))
 ))
) && (
                                      ((
  var_1_31
 ) == (
                                       ((unsigned char) (
   var_1_26
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
