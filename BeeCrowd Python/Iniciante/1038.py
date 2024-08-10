def check_leds(digit):
  led_mapping = {
      '0': 6,
      '1': 2,
      '2': 5,
      '3': 5,
      '4': 4,
      '5': 5,
      '6': 6,
      '7': 3,
      '8': 7,
      '9': 6
  }
  return led_mapping.get(digit,0)

def main():
  test_cases = int(input())

  for _ in range(test_cases):
      number = input()

      total_leds = 0
      for digit in number:
          total_leds += check_leds(digit)

      print(total_leds, "leds")

main()
