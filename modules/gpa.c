double calculateRequiredGPA(double current_cgpa, double completed_credits,
                            double target_cgpa, double remaining_credits)
{
    double total_credits = completed_credits + remaining_credits;
    double target_points = target_cgpa * total_credits;
    double current_points = current_cgpa * completed_credits;

    if (remaining_credits <= 0.0) return 0.0;

    return (target_points - current_points) / remaining_credits;
}