#!/usr/bin/env ruby

$executable = "demo/demo"
$scenario = "demo/hugeScenario.xml"

def main
  if ARGV.count < 3
    puts "Usage: timer <num-iterations> <min-threads> <max-threads> <output-file> <implementations..."
    puts "       edit the script to change executable and/or scenario"
    return
  end

  num_iterations = ARGV[0].to_i
  min_threads = ARGV[1].to_i
  max_threads = ARGV[2].to_i
  output_file = ARGV[3]
  implementations =  ARGV[4..-1]

  iteration_data = []
  current_iteration = 0

  implementations.each do |implementation|
    num_threads = max_threads
    m_t = min_threads
    (m_t, num_threads) = [1,1] if implementation == "seq" or implementation == "vector"    # HACK: dont run the sequential or vector versions multiple times!
    (m_t..num_threads).each do |nthreads|
        puts "running #{$scenario} #{num_iterations} times with #{implementation} (and #{nthreads} threads)"
        iteration_data[current_iteration] = [implementation, nthreads]
        num_iterations.times do
          time = `./#{$executable} --timing-mode --implementation=#{implementation} --nthreads #{nthreads} #{$scenario} | grep "Time: " | cut -d ' ' -f 2`
          iteration_data[current_iteration] << time
          puts time
        end
        current_iteration += 1
    end
  end


  puts "writing results to #{output_file}"
  File.open(output_file, 'w') do |file|
    iteration_data.each do |row|
      row.each do |element|
        file.write "#{element.strip}, "
      end
      file.write "\n"
    end
  end
end

main

