#!/usr/bin/env ruby

name = ARGV[0]
filename = ARGV[1]

content = File.read(filename);
puts "const char* #{name} = #{content.inspect};\n"

