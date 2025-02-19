function res =MyVarInputFunction(varargin)
      NumArg = nargin;
      for i = 1: NumArg
          fprintf("Inputs %d: %s\n",i,varargin{i});
      end
      res = 'function excution complete';
end