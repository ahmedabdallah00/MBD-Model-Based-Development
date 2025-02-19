function varargout = MyVarFunction(NumberofOutputs)
       for i = 1 : NumberofOutputs
           varargout{i} = i ^ 2;
       end
end